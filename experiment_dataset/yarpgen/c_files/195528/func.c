/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195528
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
    var_10 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)63239))), (max((var_7), (((/* implicit */unsigned long long int) var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (+(var_7))))) ? (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0 - 2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1LL)) ? (-1LL) : (14LL)))) ? (min((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])), (-1LL))) : (((/* implicit */long long int) 0U))))));
                arr_7 [i_1] |= var_8;
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 1LL))) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */int) ((arr_2 [i_0 + 1] [11]) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)3] [i_0])))))) * (arr_4 [i_0 + 1] [i_0 + 1])))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_13 [i_0] [i_0] [i_1 - 1] [i_2] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_9)))) << (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_2 [i_1 + 1] [i_1 - 2])))));
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_1 + 1]))) * (arr_2 [i_2] [i_0 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)119)) ? (1LL) : (arr_2 [i_0] [i_0 - 2]))))));
                    arr_15 [i_0 - 2] = ((/* implicit */_Bool) (short)29099);
                    arr_16 [5] [i_2] [i_2] = ((/* implicit */int) (~(max((((var_5) ? (-9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))))), (-1LL)))));
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned int) ((arr_11 [i_1 + 1] [i_1 - 2]) ^ (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                }
                /* LoopNest 3 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) 
                        {
                            {
                                arr_26 [i_5] [i_1 - 3] [8LL] [i_4] [i_0 - 2] = ((/* implicit */long long int) (-(23)));
                                arr_27 [1LL] [i_1] [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_7))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_11 = min((-1LL), (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (!(((/* implicit */_Bool) (short)29107)))))))));
}
