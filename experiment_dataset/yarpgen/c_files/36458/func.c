/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36458
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) min((((/* implicit */int) arr_1 [i_1])), (min(((+(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_1 [i_0]))))));
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) arr_1 [i_1]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (5436228620759594751LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-5436228620759594733LL)));
                    var_19 = ((/* implicit */unsigned long long int) ((signed char) (-2147483647 - 1)));
                }
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((7571893430985192160LL), (((((((5436228620759594725LL) / (arr_6 [i_3] [i_0] [i_0]))) + (9223372036854775807LL))) >> (((var_4) + (704677948))))))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) -1500621733))), (((((/* implicit */_Bool) 2622374891U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))) ? (((unsigned int) min((var_6), (((/* implicit */unsigned short) arr_0 [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) ((5436228620759594721LL) != (((/* implicit */long long int) arr_10 [i_3] [i_1] [i_0]))))) : (((/* implicit */int) (unsigned char)249)))))));
                    var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(7571893430985192165LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))) : ((~(arr_6 [i_0] [i_1] [i_3]))))), (-5436228620759594728LL)));
                    var_23 ^= ((/* implicit */signed char) ((((/* implicit */int) (((~(((/* implicit */int) var_10)))) == (((/* implicit */int) (!(((/* implicit */_Bool) 3679804233U)))))))) * (((/* implicit */int) (unsigned char)200))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_10 [i_1] [i_3] [i_4]))));
                        arr_15 [i_4] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) var_5);
                    }
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_5] [i_3] [i_5] = ((/* implicit */long long int) min(((~(((/* implicit */int) var_13)))), (((/* implicit */int) min((arr_1 [i_5 + 2]), ((unsigned char)19))))));
                        arr_20 [i_0] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_5]);
                    }
                    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        arr_23 [i_6 - 1] [i_6] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */long long int) (((-2147483647 - 1)) > (((/* implicit */int) arr_7 [i_6]))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))) <= (((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_6 + 2] [i_6 + 2] [i_6 - 1])) ? (arr_14 [i_6 + 1] [i_6 + 2] [i_6] [i_6 - 1] [i_6] [i_6]) : (arr_14 [i_6 + 1] [i_6 + 2] [i_6] [i_6 - 1] [i_6] [i_6]))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 14; i_7 += 1) 
                        {
                            var_26 ^= (-(arr_9 [i_6 - 1] [i_6 - 1] [i_6 - 1]));
                            arr_26 [i_7 - 1] [i_1] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) (short)-5646))) < ((-(2748105875U)))));
                            var_27 = ((/* implicit */unsigned char) -310163241482202643LL);
                            arr_27 [i_0] [i_0] [i_3] [i_6] [i_6] = ((/* implicit */_Bool) (unsigned short)20541);
                        }
                        for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6] [i_6])))))));
                            arr_30 [i_0] [i_1] [i_3] [i_6] [i_8] = ((/* implicit */unsigned char) -5436228620759594719LL);
                        }
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_1] [i_1] [i_3] [i_6] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_22 [i_6] [i_9]) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_6 - 1]))) ^ (arr_16 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((int) arr_29 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1]))) : ((-(arr_33 [i_6 - 1] [i_6 - 1] [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6 - 1])))));
                            var_29 *= ((/* implicit */unsigned short) arr_28 [i_0] [i_0] [i_0] [i_6] [i_3]);
                        }
                    }
                }
            }
        } 
    } 
    var_30 ^= ((/* implicit */unsigned int) var_13);
    var_31 = ((/* implicit */int) min((((/* implicit */long long int) var_3)), (var_2)));
}
