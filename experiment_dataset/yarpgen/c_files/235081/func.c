/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235081
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
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-3538660188642325812LL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((max((arr_0 [i_0 + 2]), (((/* implicit */signed char) var_4)))), (((/* implicit */signed char) max((min((var_4), ((_Bool)0))), (((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    {
                        var_13 -= ((/* implicit */signed char) var_6);
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((arr_11 [i_0] [i_0] [(_Bool)1] [i_1] [i_0]), (((/* implicit */unsigned char) var_3)))))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), (arr_6 [i_1] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_5 [i_3] [i_1]))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (-6874617355654405774LL)))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)244))));
        arr_16 [i_4] = ((/* implicit */_Bool) min((((((/* implicit */int) var_3)) % (((/* implicit */int) min((var_6), ((unsigned char)181)))))), (((/* implicit */int) ((arr_12 [i_4]) || (((/* implicit */_Bool) (unsigned char)132)))))));
        var_16 -= ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) arr_13 [i_4] [i_4]))), (-9223372036854775799LL)));
    }
    for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 3; i_6 < 15; i_6 += 2) 
        {
            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) max(((_Bool)0), (var_5)))), ((signed char)11))))) : (var_9)));
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_27 [i_5] [i_6] [(unsigned char)6] [i_8] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_5] [i_6] [(_Bool)1] [i_7] [i_6]))) == (arr_18 [i_7])))))))));
                        var_18 *= ((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_2), (var_8))))) : (max((2305843009146585088LL), (((/* implicit */long long int) arr_25 [i_5] [i_6] [(unsigned char)14] [i_8]))))))));
                        var_19 += var_11;
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((arr_26 [i_5] [i_6] [i_7] [i_7]) / (max((arr_26 [i_5] [i_5] [(_Bool)1] [i_8]), (arr_26 [4LL] [(_Bool)1] [i_7] [i_8]))))))));
                    }
                } 
            } 
            var_21 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
            arr_28 [i_6 + 2] [(_Bool)0] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_22 [i_5] [i_6 - 3] [(_Bool)1])), (min((var_10), (((/* implicit */unsigned char) (_Bool)1))))))), (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned char) arr_22 [i_5] [i_6 - 2] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_5] [i_5])) == (((/* implicit */int) arr_12 [i_6])))))) : (arr_26 [i_5] [i_6] [i_6 - 3] [(_Bool)1])))));
            var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)227)) ? (arr_15 [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
        }
        var_23 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) arr_21 [i_5] [i_5] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_5])))) + (((((/* implicit */int) arr_22 [i_5] [i_5] [i_5])) + (((/* implicit */int) var_6)))))), ((-(((/* implicit */int) arr_21 [i_5] [i_5] [i_5]))))));
    }
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (signed char i_10 = 1; i_10 < 15; i_10 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_24 += ((/* implicit */unsigned char) ((((((/* implicit */int) min((var_6), (((/* implicit */unsigned char) arr_14 [i_11] [i_13]))))) >= (((/* implicit */int) ((unsigned char) var_12))))) || (((_Bool) min((arr_30 [i_12]), (((/* implicit */long long int) arr_21 [i_9] [i_10] [i_11])))))));
                                arr_42 [i_9] [i_11] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_21 [i_13 - 1] [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_19 [i_10 + 1] [i_10] [i_10 + 1])))) << (((/* implicit */int) max((arr_37 [i_9] [i_10] [i_12]), (((((/* implicit */_Bool) arr_21 [i_9] [i_10] [(signed char)6])) && ((_Bool)1))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_19 [i_9] [i_9] [i_14]))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((((/* implicit */int) arr_44 [i_14] [i_10 + 1] [i_10 + 1] [i_14])) < (((/* implicit */int) arr_44 [i_14] [i_10 - 1] [i_10 + 1] [i_14]))))));
                        var_27 = ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_24 [i_9] [i_10] [i_11] [i_10 - 1] [i_9])));
                        arr_47 [i_9] [i_10] [i_9] = ((/* implicit */signed char) ((var_5) ? (((((/* implicit */int) arr_39 [i_9] [i_10 + 1] [i_11] [i_14])) >> (((/* implicit */int) var_4)))) : (((/* implicit */int) var_3))));
                        var_28 = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                    }
                    for (signed char i_15 = 2; i_15 < 14; i_15 += 4) 
                    {
                        arr_52 [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_9] [i_15])) ? (((/* implicit */int) ((((/* implicit */int) arr_29 [i_9] [(_Bool)1])) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_9] [(_Bool)1]))))))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (var_5)));
                    }
                }
                /* LoopNest 3 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 1; i_18 < 15; i_18 += 2) 
                        {
                            {
                                var_30 *= ((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_9]);
                                var_31 += ((/* implicit */_Bool) (signed char)-111);
                                var_32 -= (!(max((((_Bool) (_Bool)1)), (var_8))));
                            }
                        } 
                    } 
                } 
                arr_62 [i_9] = ((/* implicit */_Bool) arr_15 [i_9] [i_9]);
                arr_63 [i_9] [i_9] = ((/* implicit */signed char) var_8);
            }
        } 
    } 
}
