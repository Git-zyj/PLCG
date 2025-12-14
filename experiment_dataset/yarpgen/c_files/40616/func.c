/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40616
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_5 [i_1] [i_1] [i_1])))), ((-(((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))))));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */int) ((unsigned char) arr_9 [i_0] [(unsigned char)9] [i_0]))) : (((/* implicit */int) var_3))));
                    var_16 = ((/* implicit */unsigned char) 333195960U);
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */unsigned char) ((unsigned int) var_5));
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_24 [i_5] [i_6] |= ((/* implicit */unsigned short) min(((((-(333195957U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_21 [i_3] [5ULL] [i_6] [i_7])))))), ((~(min((333195974U), (arr_14 [i_7] [i_7])))))));
                            var_18 = ((/* implicit */short) ((unsigned int) (~(((/* implicit */int) ((_Bool) 333195960U))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_19 [i_7]))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            arr_27 [i_6] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 598660343U))));
                            var_20 = ((/* implicit */long long int) ((unsigned short) arr_16 [i_3] [i_3] [i_8 - 1]));
                            var_21 -= ((unsigned int) 4294967295U);
                            var_22 += ((/* implicit */signed char) var_14);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            arr_30 [i_9] [i_6] [i_5] [(unsigned char)4] [i_6] [i_3] &= ((/* implicit */unsigned char) (~(2883773015U)));
                            var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [21] [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_15 [i_5] [i_3 - 1] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)185)))))));
                        }
                        arr_31 [i_4] [i_5] [i_4] [i_5] [i_3] [i_5] &= ((/* implicit */short) min((((/* implicit */long long int) ((unsigned int) arr_28 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))), (max(((-(3913301769175856508LL))), (((/* implicit */long long int) (+(4294967285U))))))));
                        var_24 *= (~(var_0));
                        arr_32 [i_3] = ((/* implicit */long long int) (-(arr_29 [i_6] [i_6] [i_3] [7ULL] [i_6])));
                    }
                    arr_33 [i_5] [i_4] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (_Bool)1)), (333195974U)));
                }
                var_25 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)195))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        {
                            arr_39 [i_3] [i_4] [i_3] [i_3] [i_11] = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) 2251799813685247ULL)))));
                            /* LoopSeq 3 */
                            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                            {
                                var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)210)) ? (3913301769175856508LL) : (-3913301769175856520LL)));
                                var_27 = ((/* implicit */signed char) -1LL);
                                arr_42 [i_3] [i_3] [i_3] [i_3] [22U] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_3] [i_4] [i_10 + 4] [i_10] [i_11] [i_12])))))) + (((long long int) 598660343U))));
                            }
                            /* vectorizable */
                            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                            {
                                var_28 = ((/* implicit */int) arr_35 [i_13] [i_3]);
                                arr_45 [i_4] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_11] [i_13] [i_3] [i_13]))));
                                var_29 = ((/* implicit */_Bool) ((long long int) (-(arr_19 [(unsigned char)0]))));
                                arr_46 [i_3] [(unsigned char)7] [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_11);
                            }
                            for (unsigned int i_14 = 4; i_14 < 20; i_14 += 3) 
                            {
                                arr_49 [i_3] [i_10 + 3] [i_10] [i_4] [i_14 + 4] [i_3] [i_4] = ((/* implicit */short) (+(min((24U), (1348343784U)))));
                                var_30 += max((((/* implicit */unsigned long long int) (+(4294967281U)))), (max((((2251799813685260ULL) / (18444492273895866369ULL))), (((/* implicit */unsigned long long int) max((arr_23 [i_3] [i_3] [i_4] [i_10] [i_3] [i_14 + 4]), (((/* implicit */unsigned int) -717441805))))))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned short i_15 = 0; i_15 < 24; i_15 += 4) 
                            {
                                arr_53 [i_4] [i_11] [i_3] [i_10] [i_11] [i_11] = ((/* implicit */_Bool) var_13);
                                var_31 |= ((/* implicit */unsigned long long int) (!(((_Bool) arr_41 [i_3 - 1] [i_15]))));
                                arr_54 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((2251799813685249ULL) - (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_3)), (167860877U))))))));
                                var_32 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (_Bool)1)), (1805145871U))), (((/* implicit */unsigned int) arr_40 [i_3] [i_4] [i_10] [i_10] [i_11] [i_15]))));
                                arr_55 [i_4] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) min(((!(((/* implicit */_Bool) 4294967272U)))), ((!(((/* implicit */_Bool) 4294967285U)))))))));
                            }
                            var_33 = ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_10 - 1] [i_10])))));
                            var_34 ^= ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [3ULL]))) | (arr_14 [i_10] [i_11]))))));
                        }
                    } 
                } 
                arr_56 [i_3] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_3] [i_3 - 1] [i_3 - 1] [(_Bool)1] [i_4] [i_4] [4U]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3] [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3] [i_4]))) / (arr_25 [i_3 - 1] [i_3] [i_3 - 1] [(unsigned char)10] [i_3])))));
            }
        } 
    } 
    var_35 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((long long int) 34359738367LL))))) / (var_8)));
}
