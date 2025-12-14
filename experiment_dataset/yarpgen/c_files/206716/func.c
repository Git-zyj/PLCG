/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206716
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
    var_14 = min((((/* implicit */unsigned long long int) var_0)), (var_13));
    var_15 = ((/* implicit */unsigned short) 5167830366184879177ULL);
    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * ((+(max((var_13), (var_13)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) (-((+(max((var_3), (((/* implicit */int) var_12))))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)-30804), (((/* implicit */short) (unsigned char)252))))))))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        var_19 = ((/* implicit */short) ((max((arr_3 [i_1 + 1]), (arr_3 [i_1 + 2]))) <= (arr_3 [i_1 + 3])));
        /* LoopSeq 3 */
        for (short i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_10))));
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (short i_4 = 2; i_4 < 16; i_4 += 1) 
                {
                    for (long long int i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (unsigned char)22);
                            arr_13 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 2] [i_1 + 3] [i_1] = (short)-10424;
                            arr_14 [i_5] [i_3] [i_1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 3] [i_1] [i_1] [i_1])))) << (((/* implicit */int) arr_12 [i_1] [i_1 + 2] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 + 2]))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_0 [i_1]))));
        }
        for (short i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            arr_18 [i_1] [i_6] [i_6] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_10)))) > (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_2)), (arr_7 [i_1] [i_1] [i_6]))) > (var_13))))));
            /* LoopSeq 2 */
            for (short i_7 = 2; i_7 < 16; i_7 += 2) 
            {
                var_23 = ((/* implicit */short) (((~(((/* implicit */int) max((var_8), (var_9)))))) ^ (((/* implicit */int) max((arr_0 [i_7 - 2]), (arr_0 [i_6]))))));
                arr_21 [i_1] [i_6] [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [i_7] [i_7 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_7 - 1] [i_7 - 1] [i_7 - 2]))))) : (((((/* implicit */_Bool) ((arr_20 [i_1] [i_6] [i_7]) ? (var_1) : (arr_8 [i_1] [i_6] [i_7])))) ? (((/* implicit */int) arr_20 [i_7 + 2] [i_7 + 2] [i_7])) : (((/* implicit */int) arr_12 [i_1 + 1] [i_6] [i_1 + 1] [i_7] [i_7] [i_7 - 1] [i_7 - 1]))))));
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? (((arr_20 [i_1 + 2] [i_6] [i_8]) ? (((/* implicit */int) arr_22 [i_6] [i_7] [i_7] [i_8] [i_7] [i_8])) : (((/* implicit */int) arr_20 [i_1 + 2] [i_6] [i_7])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)20525)) : (((/* implicit */int) arr_20 [i_6] [i_7 - 1] [i_8]))))));
                    var_25 *= min((max((((/* implicit */short) arr_15 [i_1 - 1])), (var_6))), (((/* implicit */short) min((arr_15 [i_1 + 1]), (arr_15 [i_1 + 1])))));
                    var_26 = max(((unsigned char)243), (((/* implicit */unsigned char) var_0)));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63488)) - (((/* implicit */int) arr_12 [i_1] [i_1] [i_6] [i_6] [i_7] [i_7 + 2] [i_9])))))));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) arr_6 [i_1] [i_6] [i_7]))));
                        var_29 += ((/* implicit */unsigned char) var_3);
                        var_30 = ((/* implicit */signed char) var_3);
                    }
                }
                for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_34 [i_1 + 2] [i_7 + 1] [i_7] [i_11]), (arr_34 [i_1 + 2] [i_7 + 1] [i_11] [i_11])))), (max((var_1), (((/* implicit */unsigned long long int) arr_34 [i_1 - 1] [i_7 + 1] [i_7] [i_7 + 2]))))));
                    arr_35 [i_1] [i_7] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)201)) < (((/* implicit */int) (signed char)20))))) * (((/* implicit */int) ((14893335928759121583ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27370))))))));
                    var_32 = arr_25 [i_1] [i_1] [i_7] [i_7] [i_7];
                    var_33 = ((/* implicit */unsigned char) arr_31 [i_6] [i_11] [i_7] [i_11] [i_6]);
                }
            }
            for (long long int i_12 = 3; i_12 < 17; i_12 += 1) 
            {
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) min(((unsigned char)245), ((unsigned char)83))))));
                arr_38 [i_12] [i_12] [i_12] [i_12 - 1] = ((/* implicit */short) min(((unsigned char)234), ((unsigned char)234)));
            }
        }
        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 2) 
        {
            var_35 = ((/* implicit */short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_28 [i_13] [i_1] [i_13] [i_1] [i_13] [i_1]))))), (max(((unsigned char)189), (((/* implicit */unsigned char) arr_23 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 - 1]))))));
            arr_41 [i_1] [i_13] [i_13] = ((/* implicit */signed char) max(((short)30297), (((/* implicit */short) (unsigned char)252))));
        }
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_14 = 2; i_14 < 18; i_14 += 4) /* same iter space */
    {
        var_36 = (unsigned char)48;
        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_45 [i_14 - 1] [i_14 + 1]))));
        var_38 = ((/* implicit */short) (-(arr_43 [i_14 - 1])));
    }
    /* vectorizable */
    for (short i_15 = 2; i_15 < 18; i_15 += 4) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned short) var_2);
        /* LoopNest 2 */
        for (signed char i_16 = 1; i_16 < 18; i_16 += 3) 
        {
            for (short i_17 = 0; i_17 < 19; i_17 += 4) 
            {
                {
                    var_40 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_17])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_42 [i_15]))))) % (((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))) : (-10LL)))));
                    arr_54 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4202464597931035208ULL)) ? (((/* implicit */int) (short)-1492)) : (((/* implicit */int) (unsigned char)24))))) ? (1748597828996793309LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)25571)) ? (((/* implicit */int) arr_46 [i_15])) : (((/* implicit */int) var_6)))))));
                    var_41 = ((/* implicit */short) var_3);
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_15 - 1])) / (((/* implicit */int) var_2))));
                    var_43 = ((/* implicit */signed char) arr_43 [i_17]);
                }
            } 
        } 
        /* LoopSeq 4 */
        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_19 = 1; i_19 < 18; i_19 += 3) 
            {
                var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_6))))))))));
                /* LoopSeq 1 */
                for (unsigned short i_20 = 3; i_20 < 16; i_20 += 3) 
                {
                    arr_62 [i_15] [i_15] [i_18] [i_15] [i_20] = var_8;
                    var_45 = ((/* implicit */short) arr_53 [i_15] [i_19] [i_20]);
                }
            }
            for (short i_21 = 0; i_21 < 19; i_21 += 1) 
            {
                arr_66 [i_15] [i_18 + 1] [i_18 + 1] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_11))))));
                var_46 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_52 [i_15 - 2] [i_18 + 1]))));
                var_47 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                var_48 = ((/* implicit */short) ((((/* implicit */_Bool) arr_63 [i_15] [i_15 - 1] [i_18 + 1] [i_15])) ? (arr_63 [i_15] [i_15 + 1] [i_18 + 1] [i_21]) : (arr_63 [i_15] [i_15 - 2] [i_18 + 1] [i_21])));
            }
            for (unsigned char i_22 = 1; i_22 < 18; i_22 += 3) 
            {
                arr_69 [i_18] = ((/* implicit */unsigned long long int) (~(arr_47 [i_22 + 1])));
                var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (arr_45 [i_15] [i_15]) : (((/* implicit */unsigned long long int) -253927458233743414LL)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
            }
            arr_70 [i_18] &= ((/* implicit */short) (+(((/* implicit */int) var_2))));
        }
        for (signed char i_23 = 0; i_23 < 19; i_23 += 4) 
        {
            arr_73 [i_15 + 1] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)176))));
            arr_74 [i_15] [i_23] [i_23] = ((/* implicit */unsigned char) ((short) arr_46 [i_15 - 2]));
        }
        for (short i_24 = 0; i_24 < 19; i_24 += 2) 
        {
            var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_15])) > (((/* implicit */int) arr_50 [i_15] [i_24] [i_24]))))) <= (-1339219399)));
            /* LoopSeq 2 */
            for (long long int i_25 = 0; i_25 < 19; i_25 += 4) 
            {
                arr_80 [i_15] [i_24] [i_25] = ((/* implicit */unsigned char) arr_65 [i_15] [i_24] [i_25]);
                var_51 = ((/* implicit */unsigned char) var_3);
                arr_81 [i_15] [i_15] = ((/* implicit */unsigned char) (_Bool)1);
            }
            for (unsigned char i_26 = 1; i_26 < 17; i_26 += 1) 
            {
                var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) (_Bool)1))));
                var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) (!(((/* implicit */_Bool) var_6)))))));
                arr_85 [i_15] [i_24] [i_26 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)3690)) ? (7736192478925950378ULL) : (((/* implicit */unsigned long long int) 1892129408))));
                arr_86 [i_15] [i_24] [i_24] = ((/* implicit */signed char) arr_48 [i_24]);
            }
            arr_87 [i_15] [i_15] [i_15] = ((/* implicit */int) arr_53 [i_15 - 2] [i_24] [i_24]);
        }
        for (signed char i_27 = 0; i_27 < 19; i_27 += 3) 
        {
            var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) var_4))));
            var_55 = ((/* implicit */short) var_0);
            var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) arr_43 [i_15]))));
        }
        var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_59 [i_15] [i_15] [i_15 + 1])) : (((/* implicit */int) arr_57 [i_15] [i_15] [i_15] [i_15]))));
    }
    /* vectorizable */
    for (short i_28 = 0; i_28 < 19; i_28 += 4) 
    {
        arr_95 [i_28] [i_28] = ((/* implicit */unsigned long long int) arr_61 [i_28] [i_28] [i_28] [i_28] [i_28]);
        var_58 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (short)-29140)) : ((+(((/* implicit */int) (short)7912))))));
        var_59 = ((/* implicit */short) (~(((/* implicit */int) arr_64 [i_28] [i_28] [i_28] [i_28]))));
        var_60 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-20531)) : (((/* implicit */int) var_10))))));
    }
}
