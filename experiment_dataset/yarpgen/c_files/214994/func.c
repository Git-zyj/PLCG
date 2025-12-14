/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214994
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) var_4);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_18 = ((/* implicit */long long int) -1677520625);
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_2 [i_0] [i_1])) + (var_14)))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((var_3) + (var_5)))))))))));
            var_20 += ((/* implicit */_Bool) ((long long int) (-(arr_0 [i_0]))));
        }
        var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 15; i_2 += 2) 
    {
        var_22 ^= ((long long int) arr_4 [i_2 - 1]);
        arr_6 [i_2] [i_2] = (!(((/* implicit */_Bool) arr_5 [i_2 + 1])));
        var_23 = ((((/* implicit */_Bool) arr_4 [i_2 - 2])) ? (arr_4 [i_2 - 3]) : (arr_4 [i_2 + 2]));
        var_24 = ((/* implicit */long long int) max((var_24), (var_8)));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_25 &= ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_9 [i_3]))))))) ? (((int) -1LL)) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_3 - 1])) > (((/* implicit */int) arr_9 [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((long long int) ((short) 1LL)));
                        var_26 = ((/* implicit */_Bool) min((var_26), ((!(((/* implicit */_Bool) ((arr_9 [i_6]) ? (var_14) : (((/* implicit */long long int) var_5)))))))));
                    }
                    for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */long long int) arr_7 [i_3]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */long long int) ((((((/* implicit */int) arr_13 [i_3 - 1])) + (2147483647))) >> (((((/* implicit */int) var_9)) - (14493)))));
                            var_29 ^= ((/* implicit */long long int) 981859797);
                        }
                        for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            var_30 = ((((/* implicit */_Bool) (-(-21LL)))) ? (((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_27 [i_9] [i_7] [i_3] [i_4] [i_3 - 1])) : (-21LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((_Bool) var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(-18LL)))) ? (((/* implicit */int) ((_Bool) var_14))) : (((/* implicit */int) var_13))))));
                            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4] [i_4])) ? (arr_24 [i_3] [i_4] [i_5] [i_3] [i_9] [i_3] [i_9]) : (((/* implicit */int) arr_7 [i_3]))))))));
                        }
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) -18LL)) && (((/* implicit */_Bool) -18LL))));
                        var_33 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_3 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_26 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1])))) : (max((arr_11 [i_3 - 1]), (((/* implicit */long long int) arr_16 [i_3] [i_3] [i_3 - 1])))));
                    }
                    arr_28 [i_3] [i_4] [i_5] = -16;
                    var_34 ^= ((/* implicit */short) (-((+(arr_12 [i_5] [i_4])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_10 = 1; i_10 < 17; i_10 += 1) 
        {
            var_35 = (_Bool)1;
            arr_33 [i_3] = 12LL;
            /* LoopSeq 2 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_36 = (!(((/* implicit */_Bool) (-(var_12)))));
                var_37 = arr_20 [i_3] [i_10] [i_11] [i_3 - 1] [i_10] [i_3];
            }
            for (int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                arr_38 [i_3] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))));
                var_38 ^= max(((-(arr_14 [i_10] [i_10 + 3] [i_10 + 1] [i_12]))), (max((((/* implicit */long long int) arr_13 [i_3])), (((((/* implicit */_Bool) arr_29 [i_10 - 1] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-29LL))))));
                var_39 = ((int) (-(((((/* implicit */_Bool) arr_8 [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL)))));
            }
            /* LoopSeq 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_40 = ((/* implicit */int) max((((/* implicit */long long int) (_Bool)1)), (((long long int) arr_10 [i_3 - 1]))));
                var_41 = ((/* implicit */_Bool) var_11);
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                var_42 = ((/* implicit */long long int) (~(arr_15 [i_3] [i_3 - 1] [i_10 + 2] [i_10 - 1])));
                var_43 = ((/* implicit */int) ((long long int) ((var_6) ? (((/* implicit */int) arr_13 [i_14])) : (((/* implicit */int) arr_31 [i_3] [i_3])))));
            }
            for (short i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                var_44 *= ((long long int) (!(((/* implicit */_Bool) min((-7LL), (-27LL))))));
                arr_46 [i_3] [i_3] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) 39)) && (((/* implicit */_Bool) var_5))));
                var_45 = ((/* implicit */short) var_2);
            }
            arr_47 [i_3] [i_3] [i_3] = ((/* implicit */long long int) (-((+(var_12)))));
        }
    }
    for (int i_16 = 0; i_16 < 21; i_16 += 3) 
    {
        var_46 = min((arr_49 [i_16]), (((/* implicit */int) ((_Bool) arr_49 [i_16]))));
        var_47 -= ((/* implicit */_Bool) var_11);
    }
    /* LoopSeq 3 */
    for (long long int i_17 = 0; i_17 < 14; i_17 += 4) 
    {
        var_48 = ((/* implicit */_Bool) arr_40 [i_17] [i_17] [i_17]);
        var_49 = ((/* implicit */_Bool) var_12);
    }
    for (long long int i_18 = 1; i_18 < 13; i_18 += 1) 
    {
        var_50 = ((/* implicit */int) -35LL);
        var_51 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_18 + 1] [i_18 + 1] [i_18]))))) ? (((/* implicit */int) (_Bool)1)) : (((int) -18LL))))));
        var_52 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) 1631320689)))))))));
    }
    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
    {
        arr_60 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_41 [i_19 - 1] [i_19 - 1] [i_19]), (((/* implicit */int) (!(((/* implicit */_Bool) 29)))))))) ? (min((((/* implicit */long long int) (_Bool)0)), (3208430609150605465LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_19] [i_19 - 1] [i_19 - 1])) && (((/* implicit */_Bool) arr_41 [i_19] [i_19 - 1] [i_19 - 1]))))))));
        var_53 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 17LL)) || ((_Bool)1))), (((_Bool) 15))));
    }
}
