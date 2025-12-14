/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42157
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_19 = ((/* implicit */short) (-(((((/* implicit */int) ((_Bool) arr_2 [i_0]))) & (((/* implicit */int) var_17))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) var_15);
        var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)32242))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((18446744073709551615ULL) > (17177732645799734104ULL))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        {
                            arr_18 [i_1] [i_2] [9ULL] [i_3] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_2)))))) ^ (((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [(short)6] [i_1] [i_1] [i_1] [i_1]))) : (0ULL)))));
                            var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-4))))) ? (((((/* implicit */int) arr_11 [13LL])) ^ (((/* implicit */int) arr_17 [i_5] [19] [i_3] [i_2] [i_2] [i_1])))) : (((/* implicit */int) var_8))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_16 [i_2] [(_Bool)1] [i_3] [i_2] [i_2])) : (((/* implicit */int) arr_16 [i_1] [i_2] [i_3] [i_4] [i_5 - 1])))))));
                            var_25 = ((/* implicit */signed char) arr_12 [i_1] [i_2] [i_3]);
                        }
                    } 
                } 
                arr_19 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(0ULL)))) ? (((/* implicit */int) ((_Bool) (signed char)-8))) : (arr_15 [i_1] [(short)15] [(short)5] [i_3])));
            }
            for (int i_6 = 1; i_6 < 17; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_2] [i_7])) & (((/* implicit */int) var_0)))) < ((~(((/* implicit */int) arr_24 [i_8] [i_7] [i_6] [i_2] [i_1])))))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) var_17))));
                            var_28 = ((/* implicit */signed char) var_13);
                        }
                    } 
                } 
                var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))) > (18446744073709551607ULL)))) & (((var_0) ? (((/* implicit */int) arr_28 [10ULL] [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_2))))));
            }
            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((arr_22 [i_1] [i_1] [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32755))))))));
            var_31 = ((/* implicit */short) -1498313004);
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            arr_33 [i_9] [i_9] [i_1] = ((unsigned char) (~(arr_31 [i_1])));
            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((18446744073709551602ULL) > (((((/* implicit */_Bool) arr_11 [i_1])) ? (arr_20 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_25 [i_1] [(short)15] [i_1] [i_9] [i_9] [(_Bool)1])))))))));
        }
    }
    for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 2) 
    {
        var_33 -= ((/* implicit */unsigned long long int) ((9852649459901689425ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4)))));
        var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) 17731274061793241098ULL))));
        arr_38 [i_10] = ((short) ((int) arr_26 [i_10 - 1] [18] [2] [i_10] [i_10]));
    }
    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) 
    {
        var_35 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_27 [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_11]))) : (72057576858058752LL)))));
        arr_41 [i_11] = ((/* implicit */signed char) ((_Bool) min(((((_Bool)1) ? (18446744073709551602ULL) : (22ULL))), (((((/* implicit */_Bool) arr_22 [i_11] [i_11] [i_11] [i_11])) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))))))));
        var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_13 [i_11] [i_11] [i_11] [i_11])) ? (arr_10 [i_11] [i_11] [i_11]) : (((/* implicit */int) (short)(-32767 - 1)))))))));
    }
    var_37 = ((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_8)))))))));
    var_38 = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (var_18) : (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-3)) & (((/* implicit */int) var_6)))))))));
}
