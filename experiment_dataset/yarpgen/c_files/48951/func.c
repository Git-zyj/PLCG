/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48951
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_19 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) var_16)))));
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_6 [i_1]), (arr_6 [i_1]))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
            arr_10 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) + (arr_0 [i_1] [i_1])));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_17 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (((((/* implicit */_Bool) (short)7340)) ? (134217727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7340)))))));
                        var_23 = ((/* implicit */short) var_18);
                        arr_18 [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) arr_5 [i_1]);
                    }
                } 
            } 
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (short)7340))));
            arr_19 [i_2] &= ((/* implicit */int) ((((arr_7 [i_1]) != (((/* implicit */long long int) arr_16 [i_1] [i_1] [i_1] [i_2] [i_1])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_1]))))) : (arr_9 [i_1] [i_2])));
        }
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_6 = 1; i_6 < 8; i_6 += 2) 
            {
                arr_25 [i_1] [i_1] [i_6 + 2] [i_6] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6 + 2]))))), (((((/* implicit */_Bool) arr_6 [i_1])) ? ((~(((/* implicit */int) (short)7340)))) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [i_5])) <= (((/* implicit */int) arr_5 [i_6])))))))));
                var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_6] [i_6 + 1] [i_5]))));
            }
            for (unsigned char i_7 = 1; i_7 < 9; i_7 += 3) 
            {
                arr_30 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_7] [i_1])) ? (((/* implicit */int) arr_29 [i_5] [i_5] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_7 - 1] [i_5])))))));
                var_26 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((arr_29 [i_7] [i_7] [i_7 + 1]), (arr_29 [i_5] [i_5] [i_7 + 1])))), (min((arr_8 [i_7 - 1]), (arr_8 [i_7 - 1])))));
                arr_31 [i_5] [i_5] [i_1] [i_1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_1])) : (arr_23 [i_7] [i_5] [i_7]))))))));
                arr_32 [i_1] [i_5] [i_5] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(1099511627775LL)))) ? (((/* implicit */int) ((short) (short)-7342))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((((/* implicit */long long int) 2147483647)) != (2305807824841605120LL))))))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_8] [i_5]))) : ((-(((((/* implicit */_Bool) 562675075514368ULL)) ? (18446181398634037257ULL) : (4586183735202756184ULL)))))));
                arr_35 [i_1] [i_5] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (max((((/* implicit */long long int) arr_15 [i_1] [i_5] [i_8])), (var_18))) : (((/* implicit */long long int) var_11)))) >> (((arr_23 [i_1] [i_5] [i_5]) - (1045444309)))));
                var_28 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)7340)), (min((((/* implicit */unsigned long long int) arr_9 [i_1] [i_8])), (0ULL)))));
            }
        }
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            var_29 = ((/* implicit */unsigned long long int) max((arr_23 [i_1] [i_9] [i_9]), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_15 [i_9] [i_1] [i_1])), (var_17)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_9] [i_1]))))) : (arr_23 [i_9] [i_1] [i_1])))));
            var_30 -= ((((((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [i_9])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_9])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_13))))))) && (((/* implicit */_Bool) max((((unsigned long long int) -9223372036854775791LL)), (((((/* implicit */_Bool) var_5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_15 [i_9] [i_1] [i_1]))))))));
            arr_38 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((((((+((-2147483647 - 1)))) + (2147483647))) + (2147483647))) >> (((arr_20 [i_1] [i_1]) - (1978526908U)))));
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    {
                        var_31 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1]))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_47 [i_1] [i_10] [i_11] [i_12] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) (-2147483647 - 1)));
                            arr_48 [i_1] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) (~(5034109239110639240LL)));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 3; i_14 < 8; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            arr_56 [i_1] = (+(((((/* implicit */_Bool) 562675075514369ULL)) ? (2305807824841605120LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))));
                            var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_3 [i_14 - 3])) * (((((/* implicit */_Bool) arr_28 [i_1] [i_10] [i_1])) ? (8796093022207ULL) : (((/* implicit */unsigned long long int) arr_16 [i_1] [i_10] [i_14] [i_10] [i_10]))))));
                            var_33 = ((/* implicit */long long int) ((short) arr_23 [i_1] [i_10] [i_14]));
                            arr_57 [i_1] [i_1] = ((/* implicit */_Bool) (+(9223372036854775807LL)));
                        }
                        arr_58 [i_1] = ((/* implicit */unsigned long long int) (+(arr_40 [i_1] [i_14 - 1] [i_14 - 3])));
                        arr_59 [i_1] [i_10] [i_10] [i_1] [i_14] [i_15] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_5))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_17 = 2; i_17 < 9; i_17 += 3) 
            {
                var_34 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_55 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (var_10) : (arr_9 [i_1] [i_1])))));
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_1] [i_10] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_1] [i_10] [i_17] [i_10]))) : (0U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1]))))) : (((((/* implicit */_Bool) 274877906943LL)) ? (arr_15 [i_1] [i_1] [i_17]) : (((/* implicit */int) (unsigned char)0))))));
            }
            for (long long int i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (-(arr_46 [i_1] [i_1] [i_1] [i_10] [i_18]))))));
                var_37 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_64 [i_1] [i_10] [i_18]))));
            }
        }
        var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_52 [i_1] [i_1] [i_1] [i_1]))));
        arr_65 [i_1] = var_7;
    }
    var_39 ^= ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_18)) : (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 0U)) - (var_18))))))));
    var_40 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4294967291U)), (562675075514345ULL)))) && (((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) var_13)))))))), ((((!(((/* implicit */_Bool) var_10)))) ? (-1) : (((/* implicit */int) ((short) var_5)))))));
}
