/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245389
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
    var_11 = ((/* implicit */long long int) (~(((/* implicit */int) (short)8718))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_3] [i_2] [i_2] = max((max((var_5), (((/* implicit */unsigned int) (signed char)127)))), (((((/* implicit */_Bool) ((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (min((4294967295U), (((/* implicit */unsigned int) (signed char)-13)))) : (((var_6) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                            arr_13 [i_3] [i_1] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 63488U)))))) == ((-(3445876962U)))))), (((signed char) max((((/* implicit */unsigned int) (short)-5374)), (4U))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */int) ((min(((~(4294967295U))), (max((((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_1])), (arr_6 [(signed char)15] [i_1] [(signed char)0] [i_1]))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_3)))))))));
                var_13 = ((/* implicit */signed char) arr_0 [(signed char)15]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_4 = 1; i_4 < 14; i_4 += 4) 
    {
        arr_16 [i_4 + 4] &= min((0U), (3978313847U));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_15 [i_4 - 1]))));
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [(short)2])) ? (((/* implicit */int) arr_7 [i_5] [i_6])) : (((/* implicit */int) arr_18 [i_6]))));
                var_16 += ((/* implicit */signed char) var_8);
                arr_22 [i_4 + 2] [i_4] [i_4] [i_4] = ((/* implicit */short) (+(((((/* implicit */int) var_4)) + (((/* implicit */int) var_0))))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4 - 1])) ? (4294967295U) : (arr_2 [i_4 - 1])));
                var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) ((-1) > (((/* implicit */int) var_0)))))));
            }
            for (signed char i_7 = 4; i_7 < 16; i_7 += 1) 
            {
                arr_25 [i_5] = ((arr_17 [i_4] [i_4 + 4] [i_4]) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [(short)8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-48))))));
                var_19 = ((/* implicit */unsigned int) var_9);
                var_20 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5374))) : (var_1));
            }
            for (signed char i_8 = 1; i_8 < 17; i_8 += 1) 
            {
                arr_29 [i_4] [i_4] [i_8 - 1] [i_8] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2097152)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [13] [i_8] [i_8 + 1]))))) : (arr_10 [i_4 + 2] [11U] [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_8])));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_8 - 1]))) : (((((/* implicit */_Bool) 3445876962U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121))) : (3445876957U))))))));
            }
        }
        for (unsigned int i_9 = 1; i_9 < 15; i_9 += 1) 
        {
            var_22 = (~(var_3));
            var_23 *= ((/* implicit */signed char) (short)8718);
            arr_33 [i_4] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-55))));
        }
        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    {
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) 3445876957U))));
                        var_25 = ((/* implicit */int) arr_19 [17U]);
                        var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)4)) > (((/* implicit */int) (short)8718)))))) | (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) arr_8 [i_4] [i_4] [i_4 + 2])) : (arr_2 [i_4 + 4]))));
                    }
                } 
            } 
            var_27 = ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_40 [i_4 + 1])) : (((/* implicit */int) ((((/* implicit */int) (signed char)104)) >= (((/* implicit */int) (signed char)64)))))));
        }
        arr_43 [(short)17] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) arr_9 [i_4 + 1]))), (((2199023255551LL) & (((/* implicit */long long int) arr_8 [i_4 + 4] [i_4] [i_4 + 1]))))));
        arr_44 [i_4] [i_4] |= ((/* implicit */unsigned int) (signed char)-40);
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_4] [i_4])) >= (((/* implicit */int) var_9)))))))) >= (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) 1832437612U)) : ((-9223372036854775807LL - 1LL)))))))))));
    }
    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
    {
        var_29 = ((/* implicit */unsigned int) max((var_29), (((min((var_10), (3445876949U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) var_4)))))))));
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_3)) > (849090333U)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) 2305843007066210304LL))))))))));
    }
}
