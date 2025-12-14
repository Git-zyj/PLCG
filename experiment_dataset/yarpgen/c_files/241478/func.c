/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241478
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
    var_13 = ((/* implicit */unsigned long long int) (-(var_0)));
    var_14 = var_1;
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) (~(520437250U)))) - (((var_6) * (((/* implicit */long long int) 0U)))))) - ((+(var_0)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (((-(((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0])) == ((-9223372036854775807LL - 1LL))))))) * (((/* implicit */int) ((((/* implicit */_Bool) (+(var_6)))) && (((/* implicit */_Bool) 9223372036854775807LL))))))))));
        arr_3 [i_0 + 1] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned long long int) max((var_11), (var_11)))), (max((18446744073709551593ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_17 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 3172044383U)) / (var_0))))))), (((arr_5 [i_1]) & (arr_5 [i_1]))));
        var_18 &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775801LL))))) == (((/* implicit */int) ((arr_5 [i_1]) != (arr_5 [i_1]))))));
        arr_6 [i_1] = (((!(((/* implicit */_Bool) arr_5 [i_1])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_7)) | (var_4))) ^ ((-(var_8)))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) 0U)))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (-((~(arr_5 [i_1])))));
        var_19 = var_9;
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((18446744073709551610ULL), (((/* implicit */unsigned long long int) 4294966272U)))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_4 = 2; i_4 < 24; i_4 += 1) 
            {
                var_21 ^= ((/* implicit */unsigned int) ((long long int) (-(5380147948814847132LL))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) arr_8 [i_3]);
                            arr_19 [i_2] [i_3] [i_5] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 1628488153U)) || (((/* implicit */_Bool) ((((var_5) + (9223372036854775807LL))) << (((((arr_18 [i_2] [i_3] [i_4] [i_2] [i_4] [i_4] [i_6]) + (5596955130585954873LL))) - (10LL))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_7 = 1; i_7 < 24; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_8 = 1; i_8 < 23; i_8 += 4) 
                {
                    arr_25 [i_7] [i_7] [i_3] [i_7] |= ((/* implicit */unsigned int) var_8);
                    var_23 ^= ((/* implicit */unsigned int) 10530243126621321141ULL);
                }
                for (unsigned int i_9 = 1; i_9 < 24; i_9 += 4) 
                {
                    arr_28 [i_9] [i_7] [i_9 - 1] [i_7] = ((/* implicit */long long int) ((((/* implicit */long long int) 503534672U)) >= (-6803477352161473243LL)));
                    arr_29 [i_7] [i_7] [i_2] [i_2] [i_7] = ((/* implicit */long long int) var_11);
                }
                for (unsigned long long int i_10 = 3; i_10 < 24; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 4; i_11 < 22; i_11 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_8 [i_3]))));
                        var_25 = -8939699552404679906LL;
                        var_26 = (~(3434998225U));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((unsigned long long int) 2728026450U)))));
                        var_28 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2584326200U)) ? (arr_37 [i_2] [i_2] [i_3] [i_7] [i_10] [i_12] [i_7]) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                        var_29 ^= ((/* implicit */unsigned long long int) ((var_8) << (((arr_11 [i_7 + 1] [i_7 + 1] [i_10 - 3]) - (5693179192412382594ULL)))));
                        arr_39 [i_7] [i_7] [i_7] [i_3] [i_2] = ((/* implicit */long long int) (-((~(12009500183806164630ULL)))));
                    }
                    arr_40 [i_3] [i_10] [i_3] [i_3] [i_3] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_10 - 3] [i_7 - 1] [i_2]))));
                    var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2475030249191369803LL)) ? (arr_21 [i_10 - 3] [i_7 + 1] [i_2] [i_2]) : (arr_21 [i_10 - 3] [i_7 + 1] [i_2] [i_2])));
                }
                var_31 = (~(arr_23 [i_2] [i_2] [i_2] [i_7]));
                /* LoopSeq 3 */
                for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_2)) <= (arr_8 [i_7 - 1])));
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_5)) - ((~(arr_30 [i_7] [i_3] [i_3] [i_7])))));
                    var_34 ^= ((/* implicit */long long int) ((((((/* implicit */long long int) arr_32 [i_2] [i_2] [i_2] [i_2])) - (8082565748399769582LL))) == (((/* implicit */long long int) arr_23 [i_2] [i_2] [i_7 - 1] [i_2]))));
                    arr_43 [i_2] [i_3] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(12742684854791353628ULL))))));
                }
                for (unsigned int i_14 = 2; i_14 < 23; i_14 += 2) /* same iter space */
                {
                    arr_46 [i_2] [i_7] [i_2] [i_2] = ((/* implicit */unsigned int) arr_12 [i_3] [i_3] [i_3]);
                    var_35 = ((/* implicit */long long int) 10530243126621321141ULL);
                }
                for (unsigned int i_15 = 2; i_15 < 23; i_15 += 2) /* same iter space */
                {
                    arr_49 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_35 [i_2] [i_15 + 2] [i_15 + 2] [i_3] [i_7 - 1] [i_15 + 2])) > (((6266894056207603916ULL) ^ (arr_12 [i_2] [i_7] [i_2])))));
                    arr_50 [i_2] [i_2] [i_7] [i_2] [i_7] [i_15] = ((/* implicit */long long int) (-(arr_32 [i_15 + 2] [i_7 + 1] [i_7] [i_15 + 2])));
                    var_36 *= ((/* implicit */unsigned long long int) var_7);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 3) 
                    {
                        var_37 = ((/* implicit */long long int) max((var_37), (((((/* implicit */long long int) 4294966283U)) / (arr_21 [i_16 + 2] [i_16] [i_16 + 2] [i_16 + 2])))));
                        arr_53 [i_2] [i_2] [i_7] [i_7] [i_7] = var_12;
                    }
                }
            }
            for (long long int i_17 = 1; i_17 < 21; i_17 += 3) 
            {
                var_38 = ((/* implicit */long long int) min((var_38), ((~(var_0)))));
                var_39 = ((/* implicit */long long int) var_7);
                arr_57 [i_17] [i_3] [i_17] [i_17] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_9 [i_3])) ? (max((arr_41 [i_2] [i_2] [i_2] [i_2] [i_17]), (((/* implicit */unsigned long long int) -2475030249191369813LL)))) : (min((((/* implicit */unsigned long long int) 2475030249191369813LL)), (18446744073709551601ULL)))))));
                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */long long int) var_7)) <= (var_5))))))) >= (max((arr_16 [i_17 + 4] [i_17 + 1] [i_2] [i_17 + 4] [i_17 + 4]), (arr_16 [i_17] [i_17 + 1] [i_3] [i_3] [i_17 + 4]))))))));
            }
            var_41 = ((/* implicit */unsigned int) min(((+(3873670232620604037LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_3] [i_3] [i_3] [i_3])) && (((/* implicit */_Bool) arr_48 [i_2] [i_2] [i_3] [i_2])))))));
            arr_58 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(arr_38 [i_2] [i_3])))))) || (((/* implicit */_Bool) (~((~(-2475030249191369803LL))))))));
        }
        for (unsigned int i_18 = 2; i_18 < 24; i_18 += 1) 
        {
            arr_62 [i_2] = ((/* implicit */unsigned long long int) var_8);
            var_42 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2470213353760519029LL)) ? (-5679252835074160822LL) : (((/* implicit */long long int) 3915831118U))))))))) <= (max((var_8), (((/* implicit */long long int) var_11))))));
            var_43 = ((/* implicit */unsigned int) arr_8 [i_2]);
            var_44 = ((/* implicit */unsigned int) var_9);
        }
        var_45 = ((/* implicit */long long int) 6U);
    }
}
