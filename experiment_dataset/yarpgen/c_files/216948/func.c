/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216948
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
    var_17 = ((/* implicit */unsigned int) max((min((11023480237287409906ULL), (((/* implicit */unsigned long long int) 0U)))), ((-(((((/* implicit */_Bool) var_6)) ? (13262323479785197340ULL) : (((/* implicit */unsigned long long int) 4294967281U))))))));
    var_18 = ((/* implicit */unsigned long long int) ((var_13) ? (((long long int) 1926263137U)) : (((/* implicit */long long int) var_14))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [7LL] = ((/* implicit */signed char) (unsigned char)51);
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7)))) : (max((((/* implicit */unsigned int) arr_3 [i_1])), (((unsigned int) arr_3 [i_1]))))));
            arr_5 [i_0] [i_0] [i_0] = var_13;
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_20 -= ((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)18997))))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U)))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        {
                            arr_25 [i_0] [i_2] [i_0] [i_5] [i_6] [i_5] [i_6] = ((/* implicit */long long int) (-(var_9)));
                            var_22 = ((/* implicit */unsigned int) (~((~(2109319806887679742LL)))));
                            var_23 -= ((((/* implicit */_Bool) (~(arr_16 [i_0] [i_2] [(signed char)0] [(signed char)0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)30))))) : (arr_17 [i_6] [i_6] [i_6]));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_8 = 1; i_8 < 15; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 2) 
                    {
                        arr_30 [i_0] [i_2] [i_5] [i_8] [i_5] = ((/* implicit */unsigned long long int) (((-(var_14))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_0]))))));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) - (8U)));
                        arr_32 [i_9] [i_8] [(signed char)12] [i_0] [i_2] [i_0] = ((((/* implicit */unsigned long long int) 3982783661U)) <= (11023480237287409906ULL));
                    }
                    for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_24 += ((/* implicit */unsigned int) arr_1 [i_0]);
                        var_25 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_8 - 1]))) % (2LL)));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_26 [2ULL] [i_8 - 1] [i_8 - 1] [2ULL] [i_8 + 1])) * (5184420593924354275ULL)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-111)) ? (var_1) : (((/* implicit */unsigned long long int) var_7))))) || (((/* implicit */_Bool) arr_6 [i_0] [i_0] [(signed char)1])))))));
                        arr_38 [12] [i_0] = ((/* implicit */int) ((short) arr_23 [i_0] [i_5] [i_5] [i_8 + 1] [i_8 + 1] [i_0]));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_10)) : (arr_26 [i_0] [11] [11] [i_5] [i_5])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))));
                    }
                    var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))));
                }
                var_30 = ((/* implicit */int) var_0);
            }
            for (long long int i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                var_31 = ((/* implicit */long long int) (((+(var_16))) < (arr_10 [i_0] [i_0] [i_12] [11])));
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) >> (((((/* implicit */int) arr_12 [i_12] [i_12] [i_12] [i_12])) - (49)))))) || ((!(((/* implicit */_Bool) 3838286914U))))));
                arr_41 [5U] [5U] [i_0] = arr_10 [i_0] [i_2] [i_0] [i_0];
            }
            for (short i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                var_33 += ((/* implicit */long long int) ((unsigned char) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]));
                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3458151027U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))) : (11023480237287409896ULL)));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) 18U);
                            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (+(((((/* implicit */_Bool) 3838286912U)) ? (37U) : (((/* implicit */unsigned int) arr_45 [i_2] [i_14])))))))));
                            var_37 = ((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_0] [i_15] [i_13] [i_14]));
                            var_38 = ((/* implicit */int) ((long long int) ((short) (unsigned short)45682)));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 16; i_16 += 2) 
        {
            var_39 = ((/* implicit */int) ((((unsigned int) var_7)) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)99)) != (var_3))))));
            var_40 += ((/* implicit */unsigned long long int) var_4);
            var_41 = ((/* implicit */int) var_7);
        }
    }
    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 1) /* same iter space */
    {
        var_42 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_39 [7] [i_17] [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [7U])))))), ((~(-6559567984898537197LL)))));
        arr_55 [i_17] [i_17] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */long long int) -2119488295)) - (-2109319806887679742LL)))) ? ((+(1077435602))) : (((/* implicit */int) var_5)))));
    }
    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 1) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned long long int) ((int) arr_50 [i_18] [i_18]))) : (max((arr_1 [i_18]), (((/* implicit */unsigned long long int) arr_23 [i_18] [i_18] [i_18] [i_18] [14U] [i_18])))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))), (((((/* implicit */_Bool) arr_53 [i_18])) ? (2657998088948951368ULL) : (((/* implicit */unsigned long long int) -2109319806887679756LL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            var_44 = ((/* implicit */unsigned int) arr_9 [i_19] [i_19] [i_18] [i_18]);
            var_45 = ((/* implicit */short) ((arr_13 [i_18] [i_18] [i_19] [1LL]) | (arr_13 [i_19] [i_18] [i_18] [i_18])));
            /* LoopSeq 1 */
            for (long long int i_20 = 2; i_20 < 9; i_20 += 1) 
            {
                arr_62 [(unsigned char)8] [i_19] = ((/* implicit */signed char) ((4387522243054462980LL) - (arr_28 [i_18] [0LL] [i_18] [i_18] [i_18] [i_18])));
                /* LoopNest 2 */
                for (unsigned int i_21 = 3; i_21 < 7; i_21 += 3) 
                {
                    for (unsigned int i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned int) (-(1442159334)));
                            arr_68 [8LL] [i_19] [i_20 + 1] [i_20 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) arr_8 [i_21] [i_21] [0U] [i_21 + 3]))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */short) (((-(((/* implicit */int) arr_33 [4LL] [i_19] [i_19] [(short)9] [i_19])))) - (((/* implicit */int) (unsigned char)99))));
            }
        }
        /* LoopNest 3 */
        for (unsigned int i_23 = 1; i_23 < 7; i_23 += 3) 
        {
            for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 3) 
            {
                for (int i_25 = 0; i_25 < 10; i_25 += 1) 
                {
                    {
                        arr_78 [i_18] [i_18] [i_18] [i_25] = ((/* implicit */int) var_8);
                        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (short)-31286))));
                        arr_79 [i_18] [i_18] [i_18] [i_25] [(signed char)6] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+((~(-1388687158)))))) <= ((+(3458151041U)))));
                        /* LoopSeq 2 */
                        for (int i_26 = 0; i_26 < 10; i_26 += 2) /* same iter space */
                        {
                            var_49 = ((/* implicit */int) (!(((/* implicit */_Bool) max((-2109319806887679734LL), (((/* implicit */long long int) arr_3 [i_18])))))));
                            var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) min((456680373U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_67 [i_18] [i_24] [i_24] [i_18] [i_23 - 1] [i_18]))))))))));
                            var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483625)) ? (-1554176784) : (-1554176784)))), (arr_21 [i_18])))) && (((/* implicit */_Bool) var_12))));
                        }
                        for (int i_27 = 0; i_27 < 10; i_27 += 2) /* same iter space */
                        {
                            var_52 = var_3;
                            var_53 = ((/* implicit */signed char) (-(((/* implicit */int) var_15))));
                            var_54 = ((/* implicit */int) (~((-(3030121383102185293ULL)))));
                            var_55 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_18] [i_18] [i_24] [i_18] [i_27] [i_24] [i_25])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_34 [i_18] [i_18] [i_23 + 2] [i_24] [4] [i_27] [4]))))), (min(((+(arr_27 [i_18] [i_18] [i_24] [i_18] [i_23]))), (((/* implicit */unsigned long long int) ((int) 10LL)))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_56 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_28 = 0; i_28 < 13; i_28 += 1) /* same iter space */
    {
        var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [3U] [i_28] [i_28])) ? (arr_4 [i_28] [i_28] [(short)15]) : (arr_4 [i_28] [i_28] [i_28])));
        var_58 = ((/* implicit */long long int) (((-(var_1))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        /* LoopNest 2 */
        for (unsigned long long int i_29 = 0; i_29 < 13; i_29 += 1) 
        {
            for (int i_30 = 0; i_30 < 13; i_30 += 2) 
            {
                {
                    var_59 = ((/* implicit */_Bool) var_7);
                    arr_93 [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_52 [i_29] [i_30]))) ? (3741410537U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37489))))))));
                }
            } 
        } 
    }
    for (int i_31 = 0; i_31 < 13; i_31 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_32 = 2; i_32 < 10; i_32 += 1) 
        {
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                {
                    var_60 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 14631449697660370441ULL)) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_35 [i_31] [9] [(unsigned short)5] [i_31] [9] [i_31]))))), (((long long int) (signed char)-72)))) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_32 + 1])))));
                    var_61 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((_Bool) 9223372036854775790LL))))), (((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */long long int) ((3787412665U) >> (((var_1) - (8238913467567601960ULL)))))) : (((long long int) var_14))))));
                    /* LoopSeq 1 */
                    for (long long int i_34 = 0; i_34 < 13; i_34 += 2) 
                    {
                        var_62 = ((/* implicit */short) (signed char)-44);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_35 = 2; i_35 < 12; i_35 += 4) 
                        {
                            var_63 = (+(-1095377554));
                            var_64 = ((/* implicit */unsigned long long int) arr_86 [i_31] [i_32]);
                            var_65 = ((/* implicit */int) 2030219500U);
                            var_66 = ((/* implicit */unsigned long long int) var_14);
                        }
                        for (unsigned long long int i_36 = 0; i_36 < 13; i_36 += 4) /* same iter space */
                        {
                            var_67 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_23 [(signed char)3] [(_Bool)1] [i_33] [i_34] [(short)7] [i_36])), ((~((~(2030219488U)))))));
                            var_68 = ((/* implicit */int) ((((/* implicit */_Bool) 10426368545379848544ULL)) ? (((/* implicit */long long int) ((unsigned int) var_9))) : (arr_102 [i_32] [i_32 - 2] [i_32 - 1] [0LL])));
                            var_69 = min((0U), (((/* implicit */unsigned int) -641503289)));
                        }
                        for (unsigned long long int i_37 = 0; i_37 < 13; i_37 += 4) /* same iter space */
                        {
                            arr_114 [i_31] [i_31] [i_31] [i_34] [i_34] [i_37] [i_37] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) ((((/* implicit */long long int) arr_11 [i_31] [i_37])) != (var_6)))), (min((((/* implicit */unsigned int) (signed char)-103)), (arr_26 [i_37] [(signed char)13] [i_33] [(signed char)13] [i_31])))))));
                            var_70 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_31] [5] [i_31] [i_31] [i_37] [(short)1])) > (((((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [10] [i_32] [i_33] [i_34] [i_37]))))) & (var_11)))));
                            var_71 = ((/* implicit */long long int) var_10);
                        }
                        arr_115 [i_34] [i_34] [i_33] [i_33] = (-(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < ((-2147483647 - 1)))))) | (arr_13 [i_31] [i_31] [i_33] [(unsigned char)10]))));
                    }
                    arr_116 [(short)12] [i_32] [8ULL] [3U] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_89 [i_31]), (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned int) max((-1554176764), (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) 3820992457U)) ? (var_9) : (((/* implicit */unsigned int) -1732103990))))))) | (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-3615319856798351214LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27093)))))));
                }
            } 
        } 
        var_72 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) -424672918)) ? (arr_28 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31]) : (arr_28 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31]))), (arr_28 [i_31] [10] [i_31] [i_31] [i_31] [i_31])));
        var_73 = arr_105 [i_31] [i_31] [i_31] [i_31];
    }
}
