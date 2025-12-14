/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202708
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
    var_15 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) ((short) -1491142776)))))));
                    arr_10 [i_1] [i_0] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (max((max((((/* implicit */unsigned long long int) 1566361820U)), (arr_0 [(short)3]))), (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned short) var_3))))))) : (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) var_9)))))));
                    arr_11 [i_1] [i_1] [i_0] = ((/* implicit */short) max((4ULL), (((/* implicit */unsigned long long int) -1491142785))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (max((((/* implicit */unsigned int) -1)), (arr_1 [i_0]))) : (((/* implicit */unsigned int) arr_8 [i_0])))) | (((((/* implicit */_Bool) var_11)) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 - 1])))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) var_7))))) ? ((+(var_7))) : (((/* implicit */int) (signed char)0))))), (((var_12) ^ (((/* implicit */unsigned long long int) -532753473)))))))));
    }
}
