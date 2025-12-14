/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41817
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) : (((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_3)))))))))));
        arr_3 [(unsigned char)12] [i_0] = ((/* implicit */_Bool) min((var_4), (var_4)));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
            var_10 = ((/* implicit */long long int) ((var_9) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_0])) < (((/* implicit */int) var_9))))) : (((/* implicit */int) min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_1] [i_0] [i_0]))))));
        }
        for (short i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
            {
                arr_12 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) var_4);
                var_11 = ((/* implicit */unsigned long long int) var_0);
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_0] [i_2] [i_0])), (arr_8 [i_0])))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) (unsigned short)52082)) >> (((/* implicit */int) (unsigned short)1)))))))));
            }
            for (short i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
            {
                var_13 = ((/* implicit */_Bool) arr_15 [i_4] [i_0]);
                var_14 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((arr_8 [i_0]), (((/* implicit */unsigned short) arr_7 [i_0] [i_2])))), (((/* implicit */unsigned short) var_3))))) ? (arr_16 [i_2] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_2] [i_4])), (var_5)))))));
                var_15 = var_1;
            }
            for (int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) arr_7 [i_2] [i_2])), (var_1))) == (min((arr_11 [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_5])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    var_16 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_0]);
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [i_0] [i_2] [i_5] [i_2] [12LL])) : (arr_25 [i_0] [i_2] [i_0] [i_0]))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_7] [i_8] = ((/* implicit */_Bool) var_6);
                            arr_31 [i_0] [i_0] [i_5] [i_0] [12LL] = min((((/* implicit */long long int) var_5)), (min((((((/* implicit */_Bool) arr_15 [i_0] [i_2])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            var_18 += ((/* implicit */long long int) var_7);
                            var_19 &= ((/* implicit */int) arr_11 [i_8] [i_5] [i_0]);
                            arr_32 [i_0] [i_0] [i_8] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (short i_9 = 3; i_9 < 20; i_9 += 1) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_39 [i_0] [i_2] [i_9] [i_0] = ((/* implicit */long long int) arr_8 [i_9 - 3]);
                        arr_40 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */_Bool) arr_19 [i_9 - 1] [i_0] [i_9 + 3]);
                        arr_41 [i_0] [i_9 - 1] [(unsigned char)3] [i_0] = max((((/* implicit */unsigned short) (unsigned char)20)), ((unsigned short)41429));
                        var_20 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((arr_20 [i_2]), (((/* implicit */long long int) min((var_6), (((/* implicit */unsigned short) var_9)))))))) == (((var_8) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_9)))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_3), (var_2)))) || (var_9)))), (var_1)));
                            var_22 += max((((var_8) / (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) arr_23 [(short)14] [6U] [i_2] [i_12] [i_12] [i_12])));
                            arr_48 [i_0] [i_2] [i_2] [i_2] [i_0] [i_12] [i_0] |= min((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (arr_35 [i_2])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_2])) || (((/* implicit */_Bool) var_1)))))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_43 [i_0] [i_0] [i_11] [i_12]), (((/* implicit */unsigned long long int) min((var_3), (arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_42 [i_0] [i_2] [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_5)))))) : (((/* implicit */int) arr_22 [i_13] [i_2] [i_2] [i_0] [i_2]))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 23; i_14 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) var_6);
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_0] [i_14] [i_14] [i_0] [i_14] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_14] [i_14] [i_0] [i_0] [i_0]))) : (arr_44 [i_0] [i_0] [i_0] [i_0] [i_14] [i_14]))))));
        }
        /* vectorizable */
        for (short i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
        {
            arr_54 [i_15] |= ((/* implicit */unsigned short) arr_7 [i_0] [i_15]);
            var_26 = ((/* implicit */short) arr_8 [i_0]);
        }
        var_27 ^= ((/* implicit */unsigned int) var_7);
    }
    var_28 = ((/* implicit */_Bool) var_3);
    var_29 &= ((/* implicit */unsigned int) var_6);
    var_30 = ((/* implicit */unsigned char) var_5);
    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_5)))))), (((min((((/* implicit */unsigned int) var_9)), (var_4))) != (var_4))))))));
}
