/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216090
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
    var_11 = ((/* implicit */short) -5352534221483363766LL);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((long long int) arr_2 [i_0]))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-21709))))) : (18LL))), (((/* implicit */long long int) (short)-12167))));
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    var_12 -= ((/* implicit */short) (+(((int) max((arr_2 [i_0]), (((/* implicit */int) var_8)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_1] [i_1] [i_4] = ((_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_4] [i_3] [i_2 + 1] [i_0])) << (((((((/* implicit */int) (short)-32757)) + (32786))) - (18)))))), (arr_14 [i_1] [i_2 - 2] [i_2 + 1] [i_2 + 2])));
                            arr_16 [i_0] [i_1 - 1] [i_2] [9LL] [i_3] [i_4] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 2353727024U)) ? (((long long int) (-(arr_4 [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)8])))));
                            var_13 = ((/* implicit */unsigned int) (_Bool)0);
                        }
                        for (short i_5 = 3; i_5 < 9; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned int) -5352534221483363763LL);
                            var_15 = ((/* implicit */long long int) min((var_15), (min((arr_17 [i_0] [i_1] [i_3]), ((~(arr_17 [i_2 - 2] [(short)1] [i_2 - 2])))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_16 = ((245760U) <= (245768U));
                            var_17 = ((/* implicit */long long int) var_4);
                        }
                        var_18 = ((short) (~(((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1] [i_1] [i_2 + 2]))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_17 [i_1 - 3] [i_1 - 1] [i_7])) ? (var_10) : (9223372036854775807LL))), (min((((/* implicit */long long int) (_Bool)1)), (arr_17 [i_1 - 3] [i_7] [i_7])))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_2 + 1]), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) arr_18 [i_0] [i_1 + 1] [4U] [(_Bool)1] [i_1 - 3] [i_2 - 2]))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_9 = 1; i_9 < 20; i_9 += 3) 
        {
            var_21 = ((/* implicit */short) arr_26 [(short)9] [i_9]);
            /* LoopSeq 3 */
            for (short i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                arr_34 [i_10] [i_9 - 1] [i_9] = ((/* implicit */long long int) min((((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (2022511616U)))), (((/* implicit */unsigned int) arr_26 [i_10] [(short)15]))));
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_22 = (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) var_4))))));
                        arr_40 [i_8] [i_9] [i_10] [i_10] [i_12] = (!(arr_32 [i_8] [i_8] [i_8] [(short)20]));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_27 [i_9]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ^ (((arr_31 [i_10] [i_10] [i_10] [i_10]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_8] [i_8] [(short)19]))))));
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7897021461090320714LL))) >> (((((/* implicit */int) (short)3823)) - (3819))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_43 [i_8] [2LL] [i_10] [(short)16] [(short)8] [i_8] = ((/* implicit */_Bool) ((((_Bool) arr_42 [i_8] [i_8] [i_10] [i_9] [i_10] [i_11] [i_13])) ? (((((/* implicit */_Bool) 2412600965U)) ? (((/* implicit */int) (_Bool)1)) : (1851856781))) : ((~(((/* implicit */int) arr_31 [i_9] [(short)6] [i_11] [i_13]))))));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_10])) ? (var_9) : (((/* implicit */long long int) arr_33 [i_10] [i_9 - 1] [i_9 - 1]))));
                        arr_44 [i_8] [i_8] [i_9 + 1] [i_10] [i_10] [(_Bool)1] = ((/* implicit */long long int) ((int) var_6));
                        var_26 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (9223372036854775807LL)));
                        var_27 &= ((arr_32 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1]) ? (((/* implicit */int) arr_42 [i_8] [i_8] [10] [i_8] [(short)4] [i_8] [0LL])) : (((/* implicit */int) arr_32 [i_8] [i_9 + 1] [i_10] [(_Bool)1])));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_28 &= ((long long int) ((arr_46 [i_8] [i_9] [i_10] [i_11] [i_11] [(short)7] [i_14]) ? (((/* implicit */int) min((arr_31 [i_8] [i_9] [i_11] [i_14]), (arr_36 [i_14])))) : (((/* implicit */int) (_Bool)0))));
                        var_29 = (!(arr_35 [i_9 - 1] [i_10] [i_9] [i_9 + 1]));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)9181))) ? (((((/* implicit */_Bool) 2412600965U)) ? (((/* implicit */int) arr_31 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) arr_31 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 1])))) : (((/* implicit */int) ((arr_31 [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 1]) || ((_Bool)1))))));
                    }
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_31 += ((/* implicit */_Bool) ((arr_31 [i_15] [i_10] [(short)11] [i_8]) ? (20) : (((/* implicit */int) arr_48 [i_9 + 1] [4U] [i_8]))));
                    arr_50 [(short)13] [i_10] [i_10] [i_15] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) -9223372036854775802LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9181))) : (arr_41 [i_10]))));
                    var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_9 + 1] [i_15])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((_Bool) arr_26 [i_8] [i_15]))) : (((/* implicit */int) ((short) var_6)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_54 [i_10] [2U] [i_10] [i_15] [i_15] [i_15] [i_16] = ((/* implicit */unsigned int) arr_53 [i_9]);
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8])) ? (arr_27 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_8] [i_10] [i_15] [i_16])))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) -9223372036854775806LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0))))));
                        var_34 *= ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_52 [i_8] [i_9] [i_10] [i_15] [18LL]))) << (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)-32742)))))));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) arr_42 [10] [i_9 - 1] [2LL] [i_15] [i_9 - 1] [i_8] [i_9 - 1]))));
                    }
                }
                for (long long int i_17 = 0; i_17 < 21; i_17 += 2) /* same iter space */
                {
                    arr_58 [i_8] [i_10] [(short)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-32762))))) : ((-(634249262U)))));
                    arr_59 [i_8] [(short)15] [i_10] [i_10] [i_17] = ((/* implicit */_Bool) ((long long int) (_Bool)1));
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_64 [i_8] [i_9 - 1] [i_8] [(short)3] [i_10] = ((/* implicit */_Bool) max((((/* implicit */int) (short)32742)), (((((/* implicit */_Bool) arr_49 [i_9 - 1] [i_10] [i_9 + 1] [i_10] [i_9 + 1])) ? (arr_61 [i_9] [i_9 - 1] [(_Bool)1] [i_9] [i_9 - 1]) : (arr_61 [i_9] [i_9 + 1] [(_Bool)1] [i_9] [i_9 - 1])))));
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (_Bool)0))));
                    }
                    arr_65 [i_10] = ((/* implicit */_Bool) (+(min((max((((/* implicit */long long int) (_Bool)1)), (9223372036854775801LL))), (max((9223372036854775807LL), (9223372036854775807LL)))))));
                }
                for (long long int i_19 = 0; i_19 < 21; i_19 += 2) /* same iter space */
                {
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_32 [i_8] [i_9] [(_Bool)1] [i_19])), (9223372036854775807LL)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) ((short) var_9)))))) ? (((/* implicit */int) (!(arr_46 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) : (((/* implicit */int) ((_Bool) max((((/* implicit */short) arr_35 [i_8] [i_10] [i_10] [i_19])), (arr_55 [i_8] [i_9] [i_10])))))));
                    arr_68 [i_10] [(_Bool)1] = ((/* implicit */_Bool) arr_53 [i_10]);
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_67 [i_19] [i_19] [i_10] [i_9] [i_8]) < (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2412600968U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9 - 1]))) : (2200740818U)));
                }
                /* vectorizable */
                for (long long int i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    var_39 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                    arr_71 [(short)9] [i_9] [i_10] [i_10] [i_10] [7LL] = ((/* implicit */_Bool) ((arr_48 [(short)19] [(_Bool)1] [i_9 + 1]) ? (((((/* implicit */int) arr_63 [i_8] [i_9] [i_10] [(_Bool)1])) >> (((/* implicit */int) var_6)))) : (((/* implicit */int) (short)(-32767 - 1)))));
                    var_40 -= ((/* implicit */short) ((arr_66 [i_8] [i_9] [i_10]) & (((/* implicit */int) (_Bool)1))));
                }
                var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 998008708)) && ((_Bool)1)));
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32756)) ? (5352534221483363765LL) : (max((-9223372036854775781LL), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                arr_75 [i_8] [i_8] [i_8] [i_8] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_43 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)32762)) : (((/* implicit */int) (short)4000))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -69779462)) ? (((/* implicit */int) (short)13643)) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */long long int) -54279810)), (8545838472345383202LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5352534221483363765LL)) ? (((/* implicit */int) arr_29 [i_9 + 1])) : (((/* implicit */int) arr_55 [i_9] [i_9 + 1] [(_Bool)1]))))) : (((((/* implicit */_Bool) (~(arr_53 [i_8])))) ? (max((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)32767)) >= (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    var_44 ^= ((/* implicit */_Bool) max((((long long int) (+(2144928646)))), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) var_1)))), (arr_29 [(_Bool)1]))))));
                    arr_82 [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_7)), (24U)))), (((-8333568667353218754LL) ^ (var_10)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) var_5)) & (((/* implicit */int) (short)-32761))))));
                    var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_39 [(_Bool)1] [i_9] [i_9] [i_22] [(_Bool)1] [i_23] [i_23]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */unsigned int) arr_61 [i_8] [i_8] [i_22] [i_22] [i_23])) <= (27U)))))))));
                    var_46 = ((/* implicit */short) min((((((/* implicit */_Bool) max((47U), (5U)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-3369)) - (((/* implicit */int) (_Bool)1))))) : (arr_27 [i_22]))), (((/* implicit */long long int) min((((/* implicit */int) (short)-7697)), (((((/* implicit */int) var_5)) | (((/* implicit */int) var_7)))))))));
                }
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    arr_85 [(_Bool)1] [i_9] [i_9] = ((/* implicit */_Bool) ((long long int) max((arr_32 [i_24] [i_24] [i_24] [i_24 - 1]), ((_Bool)1))));
                    /* LoopSeq 1 */
                    for (short i_25 = 0; i_25 < 21; i_25 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned int) max((var_47), (((unsigned int) arr_47 [i_8] [i_8] [i_8] [(_Bool)0] [i_8]))));
                        var_48 = ((/* implicit */unsigned int) (short)-32767);
                    }
                    arr_88 [i_8] [i_9] [i_9 + 1] [i_9 + 1] [(_Bool)1] = ((/* implicit */unsigned int) (_Bool)0);
                }
            }
        }
        var_49 = ((/* implicit */short) 1046528);
    }
    var_50 &= ((((/* implicit */_Bool) 1046537)) ? (((((((/* implicit */_Bool) (short)3376)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) / (((/* implicit */long long int) 682487105U)))) : (((/* implicit */long long int) (~((~(((/* implicit */int) (short)-32767))))))));
    var_51 = ((/* implicit */unsigned int) (~((~(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-32755))))))));
}
