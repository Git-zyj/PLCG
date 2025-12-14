/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26817
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)184)), (min(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)71)))), (((/* implicit */int) (unsigned char)0))))));
                var_16 = ((/* implicit */_Bool) arr_3 [i_0]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_6 [i_0] [(_Bool)1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)55)))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((signed char) ((unsigned char) var_11))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    var_18 += ((/* implicit */long long int) (+(arr_9 [i_3 - 1] [i_0] [i_3 - 1])));
                    var_19 = ((/* implicit */unsigned char) ((arr_8 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))));
                }
                for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) (unsigned char)71)) - (((/* implicit */int) (unsigned char)70)))))));
                    arr_17 [i_0] [i_1] [i_4] &= ((/* implicit */_Bool) ((unsigned char) ((16777216) - (((/* implicit */int) (_Bool)1)))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (1829330085U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
                    var_22 &= ((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_4]);
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) (_Bool)1))), (((((/* implicit */_Bool) (unsigned char)245)) ? (((7736919961317661280LL) / (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [7U] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_5 + 1] [i_5]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (137438953471ULL)))) ? (((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned char)4)))) - (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))) : (min((arr_9 [i_5 + 1] [i_5 + 1] [i_6 - 1]), (((/* implicit */unsigned long long int) var_12))))));
                                arr_27 [i_1] [i_6] [i_5] = ((/* implicit */signed char) arr_12 [i_0] [i_1]);
                            }
                        } 
                    } 
                    var_24 = ((var_12) >= (((((/* implicit */_Bool) (unsigned short)65511)) ? (var_9) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) : (673672002U))))));
                    arr_28 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_16 [10ULL] [i_5] [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_16 [(_Bool)1] [i_5] [i_5 + 1] [i_5 + 1])))), (((((/* implicit */int) (_Bool)1)) - (((((/* implicit */int) arr_3 [i_1])) >> (((/* implicit */int) (unsigned char)4))))))));
                }
                arr_29 [i_0] [i_1] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) (signed char)-38))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_1);
}
