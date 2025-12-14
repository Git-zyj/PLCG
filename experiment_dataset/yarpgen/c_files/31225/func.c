/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31225
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
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0 + 2] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) (short)-17437))) + (3913065221044580763LL))), (3913065221044580792LL)));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned char) min((arr_1 [i_3] [i_1 + 1]), (((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)1942))))));
                            var_19 = ((/* implicit */short) 1835391924);
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned char) min((arr_1 [i_0] [i_3]), (arr_7 [i_0] [i_0] [i_0 - 3] [i_2])))))));
                            var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((long long int) arr_7 [i_4] [i_4] [i_1 - 1] [i_1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) / (arr_4 [i_1 - 1])))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((-1835391924) % (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1])))), (((/* implicit */int) min((((/* implicit */unsigned short) min(((_Bool)0), (var_0)))), (max(((unsigned short)31744), (((/* implicit */unsigned short) arr_10 [i_1 + 1] [i_0] [13U] [13U]))))))))))));
        }
        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), ((-(((/* implicit */int) var_6))))));
                var_24 = ((/* implicit */unsigned short) min(((-(((unsigned int) (unsigned char)78)))), (max((6234102U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1937)) == (((/* implicit */int) var_4)))))))));
            }
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
            {
                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_0 - 2]);
                var_25 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)16335)) >= (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_5] [i_7]))));
            }
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 19; i_8 += 1) 
            {
                for (short i_9 = 1; i_9 < 18; i_9 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 2; i_10 < 19; i_10 += 4) 
                        {
                            var_26 = ((/* implicit */_Bool) max(((signed char)64), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6)))))));
                            arr_26 [i_9] [i_5] [(_Bool)1] [i_9] [i_10] [i_8] [i_5] = ((/* implicit */_Bool) arr_0 [i_0 - 3]);
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            var_27 |= ((/* implicit */unsigned long long int) (_Bool)1);
                            var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_5])) ? (((/* implicit */long long int) -1835391924)) : (((((/* implicit */_Bool) arr_4 [i_5])) ? (-3913065221044580763LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))), (max((((/* implicit */unsigned long long int) (short)4095)), (var_5)))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (signed char)3))));
                            var_30 = ((/* implicit */unsigned char) var_10);
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_14 [i_8 - 1] [i_0 - 2]), (arr_14 [i_8 - 1] [i_0 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_8] [i_8 + 1] [i_5] [i_8])) ? (((int) (unsigned short)16311)) : (((/* implicit */int) arr_29 [i_8] [i_8] [i_8] [i_9] [i_9] [i_9] [i_8]))))) : (min((((/* implicit */long long int) arr_12 [i_9 + 1])), (var_13)))));
                        }
                        for (long long int i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
                        {
                            var_32 ^= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1961)) * (min((var_17), (((/* implicit */int) var_6))))))) < (min((((/* implicit */long long int) (-(-1835391924)))), (var_9)))));
                            arr_33 [i_12] [i_9] [i_8] [i_5] [(unsigned short)19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_11 [i_12] [i_8 - 1] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (-16LL)));
                        }
                        /* vectorizable */
                        for (long long int i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */long long int) arr_25 [(_Bool)1] [i_0 - 3] [i_0] [(unsigned char)15] [i_0] [i_0]);
                            var_34 = ((/* implicit */unsigned char) arr_30 [i_8] [i_8]);
                        }
                        for (long long int i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                            var_36 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29087)) ? (((/* implicit */int) (unsigned short)18595)) : (((/* implicit */int) (unsigned short)30367))));
                            arr_39 [i_8] [(unsigned short)16] [i_14] [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(min((var_13), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)59477)) << (((((-1296160469) + (1296160499))) - (28))))))))));
                            var_37 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) (~(-2209187684208745000LL)))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            arr_43 [i_8] [i_5] [i_15] [13ULL] [i_15] [i_8 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2209187684208744995LL))));
                            var_38 = ((/* implicit */unsigned short) ((int) arr_20 [i_0 - 3]));
                            var_39 ^= ((/* implicit */unsigned int) (unsigned char)149);
                            var_40 = ((/* implicit */unsigned short) arr_14 [14LL] [i_8]);
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_41 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_0 - 1] [i_9 + 1] [i_8 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_9 + 2] [i_0 - 2]))))))) == ((+(arr_11 [i_0 + 1] [i_9 - 1] [i_8 + 1])))));
                            var_42 = ((/* implicit */unsigned short) arr_11 [i_0] [(unsigned char)17] [(_Bool)1]);
                        }
                        var_43 = ((/* implicit */unsigned short) arr_35 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [(unsigned short)9] [i_0 + 2]);
                        arr_47 [i_0] [i_8] [i_5] [i_8] [i_9] [i_5] = ((/* implicit */int) var_4);
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned char) arr_16 [i_0 - 3]);
        }
        var_45 = ((/* implicit */_Bool) min((max((((((/* implicit */int) var_6)) | (((/* implicit */int) (unsigned char)159)))), (((/* implicit */int) (unsigned short)37120)))), (((/* implicit */int) ((short) var_15)))));
        arr_48 [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16335))) % ((-9223372036854775807LL - 1LL))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_17 = 2; i_17 < 19; i_17 += 2) 
        {
            /* LoopNest 3 */
            for (short i_18 = 1; i_18 < 19; i_18 += 2) 
            {
                for (unsigned char i_19 = 0; i_19 < 20; i_19 += 1) 
                {
                    for (int i_20 = 0; i_20 < 20; i_20 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_37 [i_17] [i_17] [i_17 - 1] [i_17 + 1] [i_17]))));
                            arr_62 [i_17 - 2] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)41)) ? (17283819762747495201ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252)))));
                            var_47 = ((/* implicit */unsigned short) arr_7 [(unsigned char)15] [i_17] [i_17] [i_17 - 2]);
                        }
                    } 
                } 
            } 
            arr_63 [i_0] = (unsigned short)49179;
            /* LoopSeq 2 */
            for (unsigned char i_21 = 0; i_21 < 20; i_21 += 2) 
            {
                var_48 = ((/* implicit */signed char) 0ULL);
                var_49 = ((/* implicit */long long int) (-(705856129925904467ULL)));
                arr_67 [i_0] [i_17] [i_21] [0] = ((/* implicit */signed char) var_9);
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_23 = 1; i_23 < 18; i_23 += 1) 
                {
                    var_50 = ((/* implicit */unsigned char) ((2494780340U) == (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)105)))))));
                    var_51 = ((/* implicit */unsigned short) (signed char)69);
                }
                arr_72 [(unsigned short)17] = ((/* implicit */unsigned short) (~(((int) 705856129925904467ULL))));
                /* LoopSeq 1 */
                for (long long int i_24 = 1; i_24 < 18; i_24 += 3) 
                {
                    var_52 = ((/* implicit */unsigned char) (unsigned short)22146);
                    var_53 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)123))));
                }
                var_54 = ((/* implicit */long long int) ((signed char) arr_40 [i_0] [i_0 + 1] [(unsigned short)18] [i_0] [i_0] [i_0]));
            }
        }
        for (short i_25 = 0; i_25 < 20; i_25 += 1) 
        {
            arr_81 [i_25] [i_25] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) min(((signed char)-29), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_0] [i_0 - 3] [i_0] [i_25] [i_25] [i_25]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)4088))))) : (((((/* implicit */int) arr_32 [i_0] [i_0] [i_25] [i_25] [i_25] [i_25])) ^ (-1204578622)))))));
            var_55 = ((/* implicit */unsigned char) (((-(5339071293361557015ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25])))));
            /* LoopNest 3 */
            for (unsigned short i_26 = 3; i_26 < 18; i_26 += 1) 
            {
                for (short i_27 = 0; i_27 < 20; i_27 += 4) 
                {
                    for (long long int i_28 = 0; i_28 < 20; i_28 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */unsigned long long int) arr_44 [i_0] [i_25] [i_26] [6ULL] [i_28]);
                            var_57 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) var_7)), (5543818572300553201LL))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1))))));
                        }
                    } 
                } 
            } 
            var_58 = ((/* implicit */unsigned short) (short)-4080);
            var_59 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_41 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0 - 4] [(short)9]))) ? (((/* implicit */unsigned long long int) max((min((var_8), (((/* implicit */unsigned int) arr_27 [i_0 + 1] [i_0] [i_0] [i_25])))), (((/* implicit */unsigned int) (unsigned char)253))))) : (max((((/* implicit */unsigned long long int) var_11)), ((-(13107672780347994601ULL)))))));
        }
    }
    var_60 = ((/* implicit */unsigned int) (!(((_Bool) (~(-2209187684208744995LL))))));
    var_61 = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) var_3)), (var_9)))));
    var_62 = ((/* implicit */long long int) 13107672780347994601ULL);
}
