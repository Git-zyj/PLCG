/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36516
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227))))) ^ (10065855879623272649ULL))) / (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */short) (signed char)63)), ((short)32766)))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) ((var_11) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((var_11) || (var_11))))))) > ((+(var_14)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_13);
        var_20 = ((/* implicit */short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (signed char)56);
                    arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)10048)) / (((/* implicit */int) (signed char)-53))))) * (arr_5 [i_1] [i_1])));
                    arr_10 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) 12655895186870342955ULL);
                    var_21 = ((/* implicit */int) (!(((var_9) == (((/* implicit */unsigned int) -1426610800))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0])))) & (((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) & (var_15)))));
    }
    var_23 = ((/* implicit */_Bool) var_0);
}
