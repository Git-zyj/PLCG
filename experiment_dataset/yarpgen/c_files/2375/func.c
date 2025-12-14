/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2375
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (unsigned int i_4 = 4; i_4 < 20; i_4 += 4) 
                    {
                        {
                            arr_13 [i_4 - 1] [i_3] [i_1] [i_1] = (~(((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_4]))) : (3807301328U))));
                            arr_14 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) var_8)))));
                            var_19 ^= ((/* implicit */int) ((short) ((((/* implicit */int) min((var_2), (var_10)))) >= ((+(arr_3 [i_0]))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3921251710752216934LL)) ? (((/* implicit */int) arr_10 [i_4] [i_1] [i_2] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) min((var_4), (arr_5 [i_3] [i_1] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_1] [i_0]))))))))));
                        }
                    } 
                } 
            } 
            var_20 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned short) 3921251710752216964LL))) ? ((~(1659477836U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_0] [i_0])))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(min((arr_22 [i_0] [i_5] [i_6] [i_6] [i_7]), (arr_22 [i_0] [i_0] [i_5] [i_6] [i_7]))))))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), ((((~(arr_17 [i_5]))) ^ (((/* implicit */unsigned long long int) (~(arr_16 [i_0] [i_5] [i_6]))))))));
                    }
                } 
            } 
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_5])), (min((((((/* implicit */_Bool) -3921251710752216965LL)) ? (13551608777101328772ULL) : (((/* implicit */unsigned long long int) 3629915410U)))), (((/* implicit */unsigned long long int) (~(arr_16 [i_0] [i_0] [i_0]))))))));
            var_23 -= ((/* implicit */signed char) ((unsigned int) -3921251710752216935LL));
        }
        var_24 ^= ((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_0])), (max((2530868691U), (((/* implicit */unsigned int) (short)8688)))))));
        var_25 = ((/* implicit */unsigned short) (-((+(arr_2 [i_0] [i_0])))));
    }
    for (unsigned short i_8 = 3; i_8 < 8; i_8 += 3) 
    {
        var_26 ^= ((/* implicit */unsigned long long int) var_6);
        arr_28 [i_8] = ((/* implicit */unsigned char) (~(arr_26 [i_8 - 3])));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (~(((unsigned long long int) arr_2 [i_8] [i_8])))))));
        var_28 -= ((/* implicit */int) ((unsigned long long int) (-((-(((/* implicit */int) arr_7 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 2])))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_38 [i_9] [i_10] [i_10] [i_11] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_7 [i_9] [i_9] [i_9] [i_9] [i_9])), (max((((/* implicit */unsigned long long int) (unsigned short)49707)), (arr_33 [i_11] [i_11]))))), (((/* implicit */unsigned long long int) (~(arr_23 [i_10] [i_10] [i_10] [i_10]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_12 = 3; i_12 < 10; i_12 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 1; i_13 < 10; i_13 += 3) /* same iter space */
                        {
                            arr_46 [i_9] [i_9] [i_11] [i_9] [i_9] [i_9] = ((unsigned short) arr_45 [i_9] [i_9] [i_9] [i_9] [i_9]);
                            var_29 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_40 [i_12 - 3])))));
                        }
                        for (unsigned int i_14 = 1; i_14 < 10; i_14 += 3) /* same iter space */
                        {
                            var_30 ^= (~(((/* implicit */int) arr_1 [i_12 + 2])));
                            var_31 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_41 [i_14 - 1] [i_12 + 1] [i_11] [i_9]))));
                        }
                        arr_51 [i_12 + 1] [i_11] [i_10] [i_9] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65521)) : (((/* implicit */int) var_10))))));
                    }
                    /* vectorizable */
                    for (long long int i_15 = 3; i_15 < 10; i_15 += 4) 
                    {
                        arr_54 [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_44 [i_9] [i_9] [i_9] [i_9] [i_9]))));
                        var_32 = ((/* implicit */short) (-(((/* implicit */int) ((short) var_9)))));
                        var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_15 + 2] [i_15 + 4] [i_15 + 1] [i_10])) ? (((/* implicit */int) arr_41 [i_15 + 3] [i_15 + 4] [i_15 + 4] [i_15])) : (((/* implicit */int) arr_41 [i_15 + 4] [i_15 - 2] [i_15 + 2] [i_11]))));
                        /* LoopSeq 1 */
                        for (signed char i_16 = 1; i_16 < 13; i_16 += 2) 
                        {
                            arr_58 [i_9] [i_9] [i_15] [i_10] [i_11] [i_15] [i_16] = ((/* implicit */unsigned long long int) 3921251710752216957LL);
                            arr_59 [i_15] [i_11] [i_11] [i_15 + 2] [i_15] = ((/* implicit */signed char) (+(arr_33 [i_15 - 1] [i_16 - 1])));
                        }
                    }
                    arr_60 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) min((((/* implicit */long long int) min((min((arr_41 [i_9] [i_10] [i_11] [i_9]), (((/* implicit */unsigned short) arr_56 [i_9] [i_10] [i_10] [i_11] [i_11])))), (((/* implicit */unsigned short) ((signed char) (unsigned short)47352)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_8 [i_11] [i_10] [i_9])))) ? (arr_52 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) var_3))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)37875), (arr_63 [i_11] [i_11])))) + ((~(((/* implicit */int) arr_12 [i_9] [i_9] [i_10] [i_11] [i_17]))))))) > (((((/* implicit */_Bool) 177904246)) ? (((/* implicit */long long int) 625928826U)) : (-3921251710752216934LL)))));
                        arr_64 [i_9] [i_9] [i_11] [i_17] = ((/* implicit */unsigned long long int) arr_32 [i_9]);
                    }
                    var_35 ^= ((/* implicit */unsigned short) max((((((/* implicit */int) arr_61 [i_11] [i_9])) ^ (((/* implicit */int) arr_61 [i_10] [i_11])))), (((/* implicit */int) ((unsigned char) max((((/* implicit */int) var_11)), (1270744803)))))));
                }
            } 
        } 
        arr_65 [i_9] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5133))) : (3921251710752216957LL))))))));
    }
    for (int i_18 = 4; i_18 < 16; i_18 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_19 = 2; i_19 < 18; i_19 += 4) 
        {
            for (short i_20 = 2; i_20 < 18; i_20 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_21 = 1; i_21 < 19; i_21 += 1) 
                    {
                        var_36 = ((/* implicit */signed char) var_2);
                        /* LoopSeq 3 */
                        for (unsigned char i_22 = 0; i_22 < 20; i_22 += 4) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_19])) : (((/* implicit */int) (unsigned char)38))))))), ((-((+(-3921251710752216936LL)))))));
                            arr_81 [i_21] [i_18 - 3] [i_19 + 2] [i_20] [i_21] [i_21] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1270744804)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_21 + 1]))))));
                            arr_82 [i_22] [i_21] [i_21] [i_18 + 1] = ((/* implicit */unsigned short) arr_77 [i_22] [i_22] [i_22] [i_22]);
                        }
                        for (unsigned char i_23 = 0; i_23 < 20; i_23 += 4) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned long long int) arr_1 [i_18 - 3]);
                            arr_86 [i_23] [i_21] [i_20 + 2] [i_21] [i_18 + 3] = ((/* implicit */unsigned int) (_Bool)0);
                            arr_87 [i_18] [i_19 + 1] [i_20] [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_18 - 4] [i_21 + 1] [i_23] [i_23])) << ((((-(arr_73 [i_21 + 1] [i_20] [i_23] [i_21]))) - (184237820)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2456931925U)) ? (((/* implicit */long long int) -1270744804)) : (3921251710752216938LL)))) ? (((/* implicit */unsigned long long int) -24LL)) : (((unsigned long long int) (unsigned short)30284)))) : (((/* implicit */unsigned long long int) max((arr_23 [i_20] [i_20] [i_18 - 3] [i_18 - 3]), ((-(((/* implicit */int) (signed char)0)))))))));
                        }
                        for (unsigned char i_24 = 0; i_24 < 20; i_24 += 4) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned int) ((unsigned short) ((long long int) -1270744804)));
                            var_40 ^= ((/* implicit */signed char) ((max((3921251710752216934LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_18])) ? (arr_23 [i_24] [i_21] [i_20] [i_19]) : (((/* implicit */int) (unsigned short)5797))))))) / (((/* implicit */long long int) (+(arr_9 [i_21 - 1] [i_21] [i_20 - 2] [i_18 + 1]))))));
                        }
                    }
                    for (unsigned long long int i_25 = 2; i_25 < 17; i_25 += 3) 
                    {
                        var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) min(((~(max((arr_93 [i_18] [i_19] [i_20] [i_25] [i_25]), (arr_16 [i_18] [i_19 - 2] [i_25]))))), (((/* implicit */int) arr_5 [i_18] [i_18] [i_25])))))));
                        var_42 = ((/* implicit */unsigned short) (+(-2855350107289505154LL)));
                        var_43 -= ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_92 [i_25] [i_20 - 2] [i_18] [i_18] [i_18] [i_18])), (arr_8 [i_18 - 1] [i_19] [i_20]))))));
                    }
                    for (signed char i_26 = 1; i_26 < 18; i_26 += 2) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) ^ ((~(((/* implicit */int) var_9)))))))));
                        var_45 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                        arr_96 [i_19] = ((/* implicit */unsigned int) (~(((long long int) (+(10720781895353255917ULL))))));
                        var_46 = ((/* implicit */short) (~(((((/* implicit */_Bool) max((arr_71 [i_18 - 4] [i_20]), (((/* implicit */unsigned int) arr_3 [i_18 + 3]))))) ? ((-(3921251710752216934LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0)))))))));
                    }
                    for (signed char i_27 = 1; i_27 < 18; i_27 += 2) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_16)) ? (((arr_72 [i_19] [i_20] [i_27 - 1]) % (((/* implicit */unsigned long long int) arr_2 [i_19 - 2] [i_18])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_84 [i_27] [i_27 + 1] [i_20 - 2] [i_19] [i_19] [i_19] [i_18])) : (((/* implicit */int) arr_75 [i_18] [i_27] [i_19] [i_27])))))))));
                        var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) max((min((((/* implicit */unsigned long long int) 2486088049U)), (0ULL))), (((/* implicit */unsigned long long int) arr_69 [i_27 + 1] [i_19 + 2])))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_28 = 3; i_28 < 18; i_28 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            var_49 = ((/* implicit */signed char) (-(arr_72 [i_28 + 2] [i_18 + 4] [i_18])));
                            var_50 = ((/* implicit */int) ((unsigned short) (+(1270744803))));
                            var_51 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_19] [i_19]))) <= (arr_103 [i_18] [i_18 + 3] [i_18] [i_18] [i_18]))) ? (arr_11 [i_18 - 4] [i_18 - 1] [i_18] [i_18] [i_18]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                        }
                        var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((short) (unsigned short)15829)))));
                    }
                    for (unsigned char i_30 = 3; i_30 < 18; i_30 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_31 = 1; i_31 < 19; i_31 += 3) 
                        {
                            var_53 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_79 [i_18 + 1] [i_31 + 1] [i_20 - 1] [i_30] [i_31] [i_31] [i_31]))));
                            arr_112 [i_18 + 2] [i_19] [i_19] [i_19 + 2] [i_19 + 2] [i_30 - 3] [i_30] = ((/* implicit */signed char) (-(var_1)));
                        }
                        for (short i_32 = 0; i_32 < 20; i_32 += 2) 
                        {
                            var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) arr_16 [i_18 - 3] [i_18] [i_18]))));
                            var_55 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_18 [i_19 + 1] [i_19 - 2])) ? (((/* implicit */int) arr_18 [i_19 + 2] [i_19 + 2])) : (((/* implicit */int) arr_18 [i_19 + 2] [i_19 - 2])))));
                            var_56 -= ((/* implicit */short) max((min((arr_71 [i_18 - 2] [i_19 + 2]), (arr_71 [i_18 - 4] [i_19 + 2]))), (max((((/* implicit */unsigned int) var_15)), (arr_71 [i_18 - 4] [i_19 - 2])))));
                            var_57 ^= ((/* implicit */unsigned char) min((((unsigned int) ((arr_11 [i_18] [i_19] [i_20] [i_30] [i_32]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((max((var_17), (((/* implicit */unsigned int) var_10)))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_18 - 3] [i_19] [i_30 + 1] [i_32])))) + (32591)))))));
                            var_58 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                        }
                        var_59 -= ((/* implicit */int) max((max(((+(11983703324137822861ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_110 [i_18] [i_18] [i_19 + 1] [i_19 + 2] [i_20] [i_20 + 2] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (3921251710752216934LL)))))), (((/* implicit */unsigned long long int) ((short) max((var_16), (((/* implicit */unsigned int) var_0))))))));
                    }
                    /* vectorizable */
                    for (short i_33 = 0; i_33 < 20; i_33 += 3) 
                    {
                        var_60 = ((/* implicit */unsigned char) min((var_60), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 17179869183ULL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3921251710752216938LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_17)))))))));
                        arr_119 [i_18] [i_18] = (+((+(((/* implicit */int) arr_101 [i_18] [i_18] [i_19] [i_20] [i_33])))));
                        arr_120 [i_18] [i_18] [i_18] [i_18] [i_18 + 1] = ((/* implicit */short) ((unsigned int) arr_7 [i_20 - 1] [i_20] [i_20 - 2] [i_19] [i_19 + 2]));
                    }
                    var_61 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_19 - 1] [i_19] [i_20])) ? (((/* implicit */unsigned long long int) arr_2 [i_18 + 4] [i_19 - 2])) : (min((3242597491223183218ULL), (((/* implicit */unsigned long long int) (short)-5096)))))))));
                }
            } 
        } 
        var_62 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_111 [i_18 - 3] [i_18])) ? (((/* implicit */int) arr_111 [i_18 + 3] [i_18])) : (((/* implicit */int) arr_111 [i_18 - 2] [i_18 + 1]))))));
        var_63 = ((/* implicit */unsigned int) min((var_63), (((/* implicit */unsigned int) (~(max((arr_108 [i_18] [i_18 - 2]), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)122)) && (((/* implicit */_Bool) arr_72 [i_18] [i_18] [i_18 + 4]))))))))))));
    }
    var_64 = ((/* implicit */unsigned short) ((((var_14) + (2147483647))) << (((((((/* implicit */int) var_0)) + (32605))) - (14)))));
}
