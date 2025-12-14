/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230734
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((var_15) << (((((/* implicit */int) var_4)) - (49980))))) < (min((((/* implicit */int) var_6)), (var_5))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 -= ((/* implicit */int) arr_2 [4]);
            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
            /* LoopSeq 4 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned int) var_12);
                            arr_14 [i_4] [i_0] [i_3] [i_2] [12] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
                            var_23 *= ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (~(var_7))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) << (((/* implicit */int) var_0))));
                            arr_16 [1LL] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) var_14);
                        }
                    } 
                } 
                var_24 *= (unsigned char)234;
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
                arr_18 [i_0] [(unsigned short)8] = ((/* implicit */int) (!(arr_11 [i_0] [i_0] [i_1] [i_2] [1])));
                var_25 += ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
            }
            for (long long int i_5 = 4; i_5 < 18; i_5 += 1) 
            {
                arr_23 [i_0] [i_0] [7LL] = (~(((/* implicit */int) var_1)));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 2; i_6 < 16; i_6 += 1) 
                {
                    var_26 += ((unsigned long long int) arr_25 [14LL] [i_6 - 2] [i_6] [4] [(_Bool)1]);
                    arr_27 [i_0] [i_0] [(unsigned char)12] [i_0] = ((/* implicit */unsigned char) ((_Bool) (~(var_16))));
                }
                for (int i_7 = 2; i_7 < 18; i_7 += 2) 
                {
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (unsigned short)46825))));
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */int) var_4);
                        arr_32 [i_0] [6LL] [5ULL] [i_0] = ((/* implicit */unsigned char) var_11);
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(-1775654665)));
                        var_29 -= (-(((/* implicit */int) var_6)));
                    }
                    var_30 ^= ((/* implicit */int) var_9);
                }
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
            {
                arr_37 [i_0] [i_1] [(short)8] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_10))));
                /* LoopSeq 2 */
                for (int i_10 = 1; i_10 < 17; i_10 += 4) 
                {
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) var_11))));
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8064))) >= (var_10))))));
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) var_1))));
                    arr_40 [i_0] [i_10] = ((/* implicit */int) ((arr_4 [i_0]) != (arr_22 [i_9 + 1] [i_0])));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_43 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (short)13126));
                    arr_44 [i_0] [i_11] [i_0] [i_0] [(unsigned short)18] [i_0] = ((/* implicit */int) arr_25 [i_0] [i_9 + 1] [i_9] [i_9 + 1] [i_0]);
                    arr_45 [i_0] [18] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) var_12));
                }
            }
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
            {
                arr_48 [i_0] [i_0] [16] &= ((/* implicit */unsigned short) ((var_17) < (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                var_34 |= ((/* implicit */unsigned char) ((var_15) >= (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [(unsigned short)4] [i_0]))));
                var_35 += ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_12 + 1] [6U] [i_12 + 1] [6U] [i_12 + 1])) >= (((/* implicit */int) (unsigned char)252))));
            }
        }
        for (unsigned char i_13 = 4; i_13 < 16; i_13 += 1) 
        {
            var_36 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) var_1))));
            arr_51 [i_0] [i_13 + 3] = (+(var_16));
            var_37 = ((/* implicit */int) min((var_37), (var_16)));
            var_38 *= ((/* implicit */_Bool) arr_30 [(short)10] [i_13 + 3] [i_13 - 1] [i_13 - 1] [i_13]);
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((unsigned int) var_2)))));
            var_40 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -1LL)) < (5010544228202923465ULL)));
            arr_54 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
        }
        var_41 &= ((/* implicit */unsigned long long int) ((long long int) arr_2 [6LL]));
    }
    for (int i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 19; i_16 += 4) 
        {
            var_42 ^= ((/* implicit */long long int) ((var_11) < (((/* implicit */unsigned long long int) ((int) var_3)))));
            arr_60 [i_15] = ((/* implicit */unsigned short) max((max((((long long int) (unsigned char)255)), (min((var_9), (((/* implicit */long long int) 3005345669U)))))), (((/* implicit */long long int) min((var_5), (((/* implicit */int) ((arr_12 [i_15] [i_16]) != (((/* implicit */unsigned long long int) var_2))))))))));
        }
        var_43 = ((/* implicit */int) ((914583045U) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)53753)))))))));
    }
    for (unsigned char i_17 = 3; i_17 < 24; i_17 += 4) 
    {
        var_44 += ((/* implicit */long long int) min(((-(var_15))), (min((max((((/* implicit */int) var_12)), (var_7))), (var_15)))));
        /* LoopNest 3 */
        for (unsigned short i_18 = 0; i_18 < 25; i_18 += 4) 
        {
            for (int i_19 = 2; i_19 < 24; i_19 += 3) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_66 [i_17 - 1]) << (((var_15) - (1111360878)))))))))) != (arr_66 [i_17]))))));
                        var_46 = ((/* implicit */unsigned short) min((var_46), (arr_61 [i_19 - 1])));
                        var_47 += ((/* implicit */unsigned char) min((((/* implicit */long long int) ((short) 785417383118248945LL))), (max((max((((/* implicit */long long int) (unsigned char)16)), (140733193388032LL))), (((/* implicit */long long int) ((892328931U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)15))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_21 = 0; i_21 < 25; i_21 += 3) 
                        {
                            var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) arr_61 [(unsigned char)11]))));
                            arr_72 [i_18] [i_20] [i_18] = ((/* implicit */unsigned short) ((unsigned char) arr_70 [i_17 + 1] [i_20] [i_19 + 1]));
                            var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) ((unsigned char) var_0)))));
                        }
                        for (long long int i_22 = 0; i_22 < 25; i_22 += 4) 
                        {
                            var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) var_4))));
                            var_51 = ((/* implicit */int) (-(min((var_11), (((/* implicit */unsigned long long int) arr_68 [i_17 + 1] [i_17 + 1] [i_22] [i_19 - 1]))))));
                            var_52 += ((/* implicit */int) ((var_5) < (((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) max((2062344050U), (((/* implicit */unsigned int) var_6))))))))));
                            var_53 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)-3900)))))) < (18014398509473792LL)));
                        }
                        var_54 = ((/* implicit */int) -6416625931577145054LL);
                    }
                } 
            } 
        } 
        var_55 = min((var_10), (((/* implicit */long long int) (+((-(-1766730251)))))));
    }
    var_56 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 405729995)))))) < (min((var_2), (((/* implicit */long long int) var_7)))))))));
    var_57 = min((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) && (((/* implicit */_Bool) var_12)))), (((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_12))))) >= (var_16))));
}
