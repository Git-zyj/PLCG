/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52959
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((int) (!(((((/* implicit */int) (unsigned short)41406)) != (((/* implicit */int) var_8)))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 4; i_1 < 21; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned int) max((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) arr_0 [(unsigned char)4] [i_1]))))), (max((var_3), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [18]))))))))));
            arr_4 [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 4]))) | (((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_5) : (((/* implicit */long long int) var_14))))))));
            arr_5 [i_0] [i_0] = ((unsigned short) ((((/* implicit */int) ((short) var_0))) == ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        }
        for (long long int i_2 = 4; i_2 < 21; i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] [i_0] = ((/* implicit */short) var_14);
            arr_10 [i_2 - 1] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_18), (((/* implicit */short) arr_0 [i_0] [(_Bool)1]))))) ? (((/* implicit */int) (unsigned short)24130)) : (((/* implicit */int) var_2)))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (56) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_7 [i_2 - 4] [i_2])) : (((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) ((short) var_0))))) - (56465)))));
        }
        for (long long int i_3 = 4; i_3 < 21; i_3 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) min((var_22), (max((((unsigned char) (_Bool)1)), (arr_0 [20] [i_3])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_14 [i_0] [i_3 - 2] [i_3 - 4] [i_0])) : (arr_3 [i_0] [i_3 - 3] [i_0]))) : (((/* implicit */int) max((arr_7 [i_3 + 1] [i_3 - 2]), (arr_7 [i_3 + 1] [i_3 - 3]))))));
                arr_16 [i_3 - 2] [i_3 - 4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_11 [i_0])))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_0])), (var_17))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_3 - 4])))));
            }
            for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
            {
                arr_19 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_18 [i_0] [i_3 - 1] [i_5 + 3])))) ? (max((var_7), (((/* implicit */long long int) arr_7 [i_3 - 4] [i_3 - 2])))) : (((/* implicit */long long int) arr_11 [i_0]))));
                var_24 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_13))), (((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) 15)))))));
                arr_20 [i_0] [i_5 + 3] = ((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned short)24138)), (((var_14) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3 - 3] [i_3 - 3] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_3 - 3])) : (((/* implicit */int) var_15)))))));
                arr_21 [i_0] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)74)) || (((/* implicit */_Bool) 1092395189))));
            }
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 20; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    {
                        arr_27 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)4)) <= (((/* implicit */int) (unsigned short)16384)))))));
                        var_25 = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)113));
                        arr_28 [i_0] = ((/* implicit */_Bool) max(((unsigned char)2), ((unsigned char)4)));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) ((var_13) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((int) (_Bool)1)) : ((+(((/* implicit */int) arr_25 [i_3 - 1] [i_3] [i_0])))))))));
        }
        for (long long int i_8 = 4; i_8 < 21; i_8 += 1) /* same iter space */
        {
            arr_32 [i_0] = ((min((min((((/* implicit */int) var_18)), ((-2147483647 - 1)))), (((/* implicit */int) arr_7 [i_8 - 2] [i_8 - 4])))) > (min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(_Bool)1]))) == (var_17)))), (max((((/* implicit */int) var_11)), (var_16))))));
            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_13);
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (unsigned short)41378))));
            arr_34 [i_0] [i_0] = ((/* implicit */short) max((var_9), (((((/* implicit */int) (unsigned short)41416)) - (((/* implicit */int) ((((/* implicit */int) (signed char)6)) != (((/* implicit */int) (_Bool)1)))))))));
        }
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [10LL]))))) ? ((~(var_13))) : (((/* implicit */unsigned long long int) (-(arr_26 [i_0] [i_0] [i_0] [i_0])))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_0] [14] [i_0])))))))));
        arr_35 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            {
                arr_42 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_37 [i_9]), (((/* implicit */short) var_19))))) ? (((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_10])) ? (var_0) : (((/* implicit */int) arr_24 [i_9] [i_10] [i_9] [i_10])))) : (((/* implicit */int) max((((/* implicit */signed char) arr_17 [(unsigned char)11] [i_10] [i_10])), (arr_29 [20] [i_9] [i_9]))))));
                var_29 = ((/* implicit */unsigned int) (-(min((((((/* implicit */long long int) var_0)) + (var_7))), (((/* implicit */long long int) min((arr_25 [i_10] [i_9] [i_9]), (((/* implicit */unsigned short) var_4)))))))));
                /* LoopSeq 2 */
                for (unsigned char i_11 = 2; i_11 < 13; i_11 += 3) 
                {
                    var_30 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_10] [i_10]))) : (arr_13 [i_10]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_10] [i_10] [i_10] [1LL])))))) <= (((/* implicit */unsigned long long int) var_0))));
                    var_31 *= ((/* implicit */signed char) var_8);
                }
                for (unsigned char i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    var_32 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_14 [i_10] [i_10] [i_12] [i_12]))))));
                    var_33 |= ((/* implicit */unsigned int) arr_7 [i_9] [i_10]);
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10527))) : (2734624916032350086LL)))))));
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) arr_22 [i_10]))));
                }
            }
        } 
    } 
    var_36 = ((/* implicit */int) var_1);
}
