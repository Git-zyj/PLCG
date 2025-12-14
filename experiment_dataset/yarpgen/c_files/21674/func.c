/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21674
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
    var_13 = ((/* implicit */_Bool) (((-(((/* implicit */int) (short)144)))) & ((+(((/* implicit */int) min((var_0), (var_7))))))));
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_3)), (var_2)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_2])) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_2])) : (((/* implicit */int) arr_1 [i_1 + 1] [i_2])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_2])) : (((/* implicit */int) arr_1 [i_1 - 1] [(unsigned short)9]))))));
                    var_17 = ((/* implicit */signed char) min((((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_2])), (max((((((/* implicit */_Bool) (short)8257)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [(unsigned short)20])))), (((/* implicit */int) min(((_Bool)1), (arr_0 [i_1] [i_2]))))))));
                    arr_8 [i_0] [(signed char)5] [i_0] = ((/* implicit */_Bool) (unsigned short)65504);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)-33))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16296)) || (((/* implicit */_Bool) var_5)))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned short)6]))) & (var_10))))))));
    }
}
