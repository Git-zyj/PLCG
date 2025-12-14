/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40484
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
    for (short i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_14 = ((signed char) arr_5 [i_2]);
                    var_15 = ((((max((501485287), (((/* implicit */int) (short)(-32767 - 1))))) / ((-2147483647 - 1)))) / ((~(((((/* implicit */_Bool) var_3)) ? (var_1) : (var_9))))));
                }
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((max((((unsigned int) -501485283)), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)45))))))), (((/* implicit */unsigned int) ((int) min((501485253), (501485285)))))));
                    var_16 += ((/* implicit */long long int) min((((((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (unsigned short)14170)))) + ((-(-501485284))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-5289)) - (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) arr_9 [i_0] [i_0 - 2] [i_1] [i_3])) : (((((/* implicit */_Bool) (short)-15094)) ? (((/* implicit */int) (short)9717)) : (((/* implicit */int) var_2))))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 501485287))))), (501485283)))) <= (((((/* implicit */_Bool) -501485283)) ? (((/* implicit */long long int) max((((/* implicit */int) arr_7 [i_0 - 2])), (-501485294)))) : (arr_1 [i_3])))));
                    var_18 = 501485279;
                    var_19 -= ((/* implicit */int) (_Bool)1);
                }
                var_20 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 - 1])))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) arr_16 [i_6] [i_5] [i_6] [i_6] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [7LL] [i_0])) : (0))), (-501485310)))) == (max((((((/* implicit */_Bool) (unsigned char)86)) ? (18014398505287680LL) : (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)3697)))))))));
                                var_22 -= ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) arr_4 [i_6] [i_0 + 1]))), (max((((/* implicit */int) var_10)), (-810105814)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((long long int) var_9));
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        for (short i_11 = 2; i_11 < 10; i_11 += 4) 
                        {
                            {
                                arr_29 [i_10] [i_10] &= ((/* implicit */signed char) (~(arr_28 [0] [0] [0] [0])));
                                arr_30 [i_9] [i_8] [i_8] [i_9] [i_8] [i_7] = ((/* implicit */unsigned int) var_6);
                                var_24 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)1))), ((~(18446744073709551596ULL))))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_11 + 2] [i_11 - 1] [i_8] [i_8] [i_11 - 1] [i_11 + 1])))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) var_9);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        arr_33 [i_12] [i_8] [i_9] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */unsigned int) arr_0 [i_8])) != ((-(var_12)))));
                        arr_34 [i_7] [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_3)))) / (arr_32 [i_12] [i_9] [i_7])));
                    }
                    for (long long int i_13 = 2; i_13 < 9; i_13 += 2) 
                    {
                        arr_38 [i_13] [i_9] [i_8] [i_7] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((min((((/* implicit */long long int) arr_2 [i_13 - 2] [i_13 - 1] [19LL])), (arr_28 [i_13 - 2] [i_9] [(signed char)8] [i_7]))) == (min((arr_28 [i_7] [i_7] [i_9] [i_13 - 2]), (((/* implicit */long long int) arr_7 [i_9])))))))));
                        arr_39 [i_9] [i_9] [i_8] [i_8] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_13 + 2] [6] [i_13 + 1] [i_13 - 2]))))) ? (((arr_11 [i_13 + 2] [i_13 + 1] [i_13 + 1] [i_13 - 2]) ? (var_5) : (((/* implicit */long long int) 3497776722U)))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        arr_40 [i_8] [i_7] [i_7] [i_7] [i_9] [i_13 + 2] = ((/* implicit */unsigned short) var_12);
                    }
                }
                for (int i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned short) ((arr_43 [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) ((signed char) (unsigned short)44516))) : (var_9)));
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (~((~(4294967295U))))))));
                        arr_46 [i_8] [i_8] [0] [i_15] = ((/* implicit */short) ((unsigned short) (signed char)(-127 - 1)));
                        var_28 = ((/* implicit */_Bool) max((min((var_0), (((/* implicit */short) arr_6 [i_15])))), (((/* implicit */short) ((arr_41 [i_7]) < (arr_41 [i_15]))))));
                        arr_47 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_44 [i_8] [i_14] [i_8] [i_7]))) || (((/* implicit */_Bool) ((var_11) << ((((~(var_6))) - (15116440515738976779ULL))))))));
                    }
                    for (signed char i_16 = 2; i_16 < 11; i_16 += 2) 
                    {
                        var_29 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_37 [i_8] [i_14] [i_16 - 1])) ? (((/* implicit */unsigned int) -501485276)) : (((unsigned int) 287104476244869120LL)))), (((/* implicit */unsigned int) ((signed char) 4294967295U)))));
                        var_30 &= ((/* implicit */unsigned int) var_2);
                        arr_51 [i_7] [i_8] [i_16] [i_8] |= ((/* implicit */_Bool) ((short) (signed char)113));
                    }
                    var_31 = ((/* implicit */int) max((var_31), (min((max(((+(((/* implicit */int) (_Bool)1)))), (((int) 18014398505287680LL)))), (((/* implicit */int) ((-501485278) == (((/* implicit */int) ((_Bool) var_8))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_18 = 0; i_18 < 12; i_18 += 1) 
                        {
                            var_32 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((501485287) - (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -1506757806)))) : (min((((/* implicit */long long int) var_2)), (arr_1 [i_17])))))));
                            var_33 = ((arr_45 [i_18] [i_8] [i_8] [i_8] [i_8] [i_7]) ? (((/* implicit */int) min((arr_19 [i_8] [i_18]), (arr_19 [i_8] [i_8])))) : (((/* implicit */int) ((min((var_12), (1526454542U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_55 [i_7] [3U] [i_14] [i_17] [i_7]) : (((/* implicit */int) (short)-7904)))))))));
                            var_34 = ((/* implicit */unsigned char) (short)-1);
                            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) min((min((((/* implicit */int) (_Bool)1)), (1))), (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) arr_25 [i_7] [i_7] [i_7] [i_7] [i_7]))))))))));
                        }
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) 501485276)) : (2016666794569988479LL)));
                    }
                }
                for (int i_19 = 0; i_19 < 12; i_19 += 1) /* same iter space */
                {
                    arr_63 [i_8] = ((/* implicit */signed char) ((short) min((var_6), (((/* implicit */unsigned long long int) 1152921504606842880LL)))));
                    arr_64 [i_7] [i_7] [i_19] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_7] [i_7])) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (-2973722293004446119LL))) == (((/* implicit */long long int) ((/* implicit */int) (!(arr_21 [i_7])))))))) : ((+(((/* implicit */int) ((short) (_Bool)0)))))));
                    arr_65 [i_19] [i_7] [i_7] [i_7] |= ((/* implicit */short) ((int) var_0));
                }
                arr_66 [i_8] = ((/* implicit */long long int) (+(var_6)));
            }
        } 
    } 
}
