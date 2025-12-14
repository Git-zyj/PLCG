/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242500
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_14))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) 9ULL);
                            arr_10 [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (short)115))));
                            var_21 = ((/* implicit */unsigned long long int) min((max((var_19), (((/* implicit */unsigned int) arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1])))), (((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)146)), ((short)15029))))));
                            arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_1])))), (((((/* implicit */_Bool) 7661816139461832907ULL)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) var_6))))));
                        }
                    } 
                } 
                arr_12 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) (short)-21))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    arr_16 [i_1] = ((/* implicit */unsigned char) 0U);
                    arr_17 [i_0 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((arr_3 [(unsigned short)11] [i_1]) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))))) <= (9752653980372909814ULL)));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_25 [i_1] [i_1] [i_4 - 1] [i_1] [(unsigned char)8] = ((/* implicit */_Bool) arr_15 [i_1] [9ULL]);
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4278190080U)) ? (((/* implicit */int) (short)19)) : (1537180415)));
                            var_23 = ((/* implicit */short) ((var_7) + (var_17)));
                            var_24 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)48989))));
                        }
                        for (unsigned short i_7 = 3; i_7 < 8; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [9U] [i_7])) ? (16777215U) : (((/* implicit */unsigned int) 1537180422)))))));
                            arr_29 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_4 [i_1] [i_7 - 3]);
                        }
                        for (short i_8 = 2; i_8 < 9; i_8 += 4) 
                        {
                            arr_33 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_19 [i_8 + 1] [i_8 + 3] [i_5] [i_4 - 1] [i_4 + 2] [i_0 + 1])) : (((/* implicit */int) (_Bool)1))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_20 [i_5] [i_1] [i_0 + 1] [i_4 + 2] [i_8 + 2] [i_8])));
                            arr_34 [i_1] [i_1] [i_4] [i_5] [2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16115046127092141033ULL))));
                        }
                        arr_35 [i_1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (short)31569))))));
                        arr_36 [10U] [10U] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) var_12));
                    }
                }
                var_27 += ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
    var_28 = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
    var_29 = ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) min((2556703467U), (1602336144U)))) : ((-(3ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))));
}
