/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236794
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_3)))) ? (15623598834252322911ULL) : (((/* implicit */unsigned long long int) (+(var_9))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) var_12);
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 4] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_0 + 3] [i_0 - 4] [i_1 - 2])))))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2823145239457228705ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((unsigned short) 15623598834252322900ULL)))));
                    }
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_13 [i_2] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_8 [i_4] [i_2] [i_1 + 1] [i_0]);
                        arr_14 [i_1] [i_0] = ((/* implicit */signed char) ((arr_9 [i_1 - 2] [i_0 - 2] [i_1 - 1] [i_0 - 2] [i_0]) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (2823145239457228725ULL)));
                        arr_15 [i_0] [7] [i_0] = ((/* implicit */signed char) (+(var_11)));
                        arr_16 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((840427397U) >> (((var_7) + (1533338514)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37118)) && (((/* implicit */_Bool) var_0)))))) : (var_3)));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)39397)) ? (arr_11 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62)))));
                    }
                    arr_17 [i_0] [18ULL] [18ULL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0 - 3] [i_1 - 2] [i_0] [i_1 + 1])) ? (arr_11 [i_0]) : (((/* implicit */long long int) var_2))));
                }
            } 
        } 
        var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_0 + 3] [(unsigned char)12]))))))));
        arr_18 [i_0] = ((/* implicit */unsigned long long int) -2147483639);
    }
    var_21 = ((/* implicit */long long int) var_10);
    var_22 = ((/* implicit */unsigned short) var_11);
}
