/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206334
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
    var_10 = ((/* implicit */int) ((unsigned int) (!(var_9))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_2 [12LL] = ((/* implicit */int) arr_1 [4LL]);
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -9223372036854775793LL)) ? (3578764732175821007LL) : (((/* implicit */long long int) arr_1 [(short)13])))), (((/* implicit */long long int) var_2))))) ? (((/* implicit */unsigned int) (~((-(((/* implicit */int) (_Bool)1))))))) : (((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1]))))))))));
        var_12 |= ((/* implicit */short) min((max((arr_0 [(short)1] [i_0 + 1]), (arr_0 [i_0 + 2] [i_0 + 1]))), (((((((/* implicit */long long int) 3U)) > (arr_0 [i_0 - 2] [i_0 - 2]))) ? (((/* implicit */long long int) ((arr_1 [i_0]) - (4007683235U)))) : ((~(arr_0 [i_0] [i_0])))))));
        var_13 ^= ((/* implicit */long long int) min((1998912510U), (((((/* implicit */_Bool) (+(2296054785U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) || (((/* implicit */_Bool) var_8)))))) : (arr_1 [3U])))));
        var_14 ^= ((/* implicit */unsigned int) ((int) (-(arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        var_15 = ((/* implicit */int) ((((_Bool) 0LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)110)) ? (2296054803U) : (arr_3 [i_1]))))));
        var_16 += (~(((/* implicit */int) ((signed char) arr_4 [20LL] [(short)8]))));
        var_17 = ((/* implicit */short) (((~(arr_3 [i_1]))) << (((arr_3 [i_1]) - (1236703364U)))));
    }
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (short i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) arr_9 [(signed char)5])))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [14LL])) ? (((((/* implicit */_Bool) 2296054790U)) ? (2199023254528LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32757))))) : (((((/* implicit */_Bool) ((long long int) arr_3 [i_2]))) ? ((+(var_8))) : (((/* implicit */long long int) min((arr_3 [i_2]), (((/* implicit */unsigned int) var_5)))))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_10 [i_2] [i_2])))) ? (min((((/* implicit */long long int) max((arr_9 [i_2]), (1998912510U)))), (max((((/* implicit */long long int) arr_9 [i_3])), ((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((int) ((signed char) arr_9 [i_3]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)-1)))) && (((/* implicit */_Bool) ((signed char) arr_7 [i_2] [i_2])))));
                    var_22 |= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(_Bool)1] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [15LL])))))) : (((((/* implicit */_Bool) arr_4 [2U] [2U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12680))) : (2296054785U))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_8 [i_2] [i_4] [i_4]))));
                        var_24 &= ((/* implicit */long long int) var_9);
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_25 ^= ((/* implicit */long long int) var_1);
                            arr_18 [i_2] [i_2] = ((/* implicit */signed char) 7340032);
                            var_26 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_3 - 2] [i_5]))));
                            var_27 = (-(arr_4 [i_3] [i_2]));
                        }
                        for (long long int i_7 = 2; i_7 < 15; i_7 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) -1049344414))));
                            var_29 = -8162922065416270038LL;
                            var_30 = ((/* implicit */short) -7847668535953083356LL);
                        }
                        for (long long int i_8 = 2; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            var_31 = arr_21 [i_2] [i_3 - 2];
                            var_32 = ((/* implicit */int) arr_14 [i_3 - 1] [i_8 - 2] [i_8] [i_3 - 1]);
                            var_33 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) 6U)))));
                            var_34 = ((/* implicit */long long int) ((unsigned int) 0U));
                        }
                        var_35 = ((/* implicit */signed char) ((int) (_Bool)1));
                        var_36 = ((/* implicit */int) ((long long int) (-(arr_14 [i_2] [i_3] [i_2] [i_5]))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        var_37 = ((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_3] [i_3 - 2] [i_3 + 1] [i_3 - 2]))));
                        var_38 = ((/* implicit */_Bool) (((((+(((/* implicit */int) arr_16 [i_2] [i_2] [i_3] [i_2] [i_9] [i_9])))) + (2147483647))) >> (((arr_14 [i_2] [i_2] [i_4] [i_3]) - (6628936886265511784LL)))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned int) -7340007);
                        var_40 = ((/* implicit */long long int) arr_3 [i_2]);
                        arr_29 [i_4] [i_4] [i_2] [i_2] [i_3] [i_2] = ((long long int) 2251799813160960LL);
                    }
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        var_41 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12293)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) arr_16 [15LL] [15LL] [15LL] [2U] [i_3] [i_3 - 2]))))) ? (((((/* implicit */_Bool) arr_24 [i_2] [i_3] [2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (0LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)17))) != (arr_23 [i_2] [2LL] [i_3 - 1] [12LL] [i_3 - 1]))))));
                        var_42 ^= ((/* implicit */int) (+(arr_19 [i_2] [i_3 + 1] [i_11] [i_2] [i_3 - 1] [i_4] [i_11])));
                        var_43 = ((/* implicit */long long int) 7340006);
                    }
                    var_44 = ((/* implicit */_Bool) (~(var_2)));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_12 = 1; i_12 < 20; i_12 += 1) 
    {
        var_45 = ((/* implicit */_Bool) arr_4 [i_12 + 1] [i_12]);
        var_46 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_13 = 3; i_13 < 22; i_13 += 3) 
    {
        var_47 |= ((/* implicit */unsigned int) ((long long int) (+(((((/* implicit */_Bool) arr_35 [i_13] [15LL])) ? (arr_37 [i_13 - 3]) : (arr_36 [i_13] [(signed char)14]))))));
        var_48 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((unsigned int) var_4)))))));
    }
    for (int i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        var_49 |= ((/* implicit */int) arr_30 [i_14] [i_14]);
        arr_41 [4] = ((/* implicit */signed char) min((max((((/* implicit */long long int) 579064624U)), (arr_19 [i_14] [i_14] [(short)12] [i_14] [i_14] [i_14] [i_14]))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [14U] [14U])) % (max((((/* implicit */int) arr_6 [6LL] [6LL])), (-412128915))))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 24; i_16 += 3) 
        {
            for (signed char i_17 = 1; i_17 < 21; i_17 += 4) 
            {
                {
                    var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned int) arr_46 [4U] [i_16])), (((/* implicit */unsigned int) max((7340006), (((/* implicit */int) (signed char)-7)))))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_46 [10LL] [10LL])), (((long long int) arr_46 [18LL] [i_16 + 1]))))))))));
                    var_51 = ((/* implicit */long long int) ((2296054811U) < (((/* implicit */unsigned int) 7340009))));
                    var_52 = ((/* implicit */signed char) -7340008);
                }
            } 
        } 
        var_53 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_46 [6LL] [(signed char)24])) ? (-5314199807922016234LL) : (((/* implicit */long long int) -1547263132)))) % (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
        /* LoopSeq 1 */
        for (int i_18 = 0; i_18 < 25; i_18 += 1) 
        {
            var_54 = ((/* implicit */int) arr_50 [i_15]);
            var_55 = ((/* implicit */long long int) ((short) ((short) ((long long int) (_Bool)1))));
        }
        var_56 = ((/* implicit */unsigned int) (+((~(-7340007)))));
    }
    var_57 += 5567117;
}
