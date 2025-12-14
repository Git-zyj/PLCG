/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238893
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
    var_18 = ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) var_11)))) ? (var_9) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5)))))));
    var_19 = var_1;
    var_20 = ((/* implicit */unsigned long long int) ((int) var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                var_21 ^= ((/* implicit */unsigned int) arr_4 [i_1 + 2] [i_1 + 3]);
                /* LoopSeq 4 */
                for (short i_2 = 4; i_2 < 10; i_2 += 3) 
                {
                    var_22 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)29)) ? (((/* implicit */int) arr_4 [i_2 - 2] [i_1 - 3])) : (((/* implicit */int) arr_4 [i_2 - 2] [i_1 - 3]))))));
                    var_23 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)32767)))))) | (min((arr_0 [i_2 - 4]), (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_1])), (var_7))))))));
                    arr_8 [i_0] [(unsigned short)3] [i_2] = ((/* implicit */short) var_14);
                }
                for (short i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    arr_12 [i_0] [i_3] [4] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [9]))) : (var_1)))))) ? (min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) var_17)))))) : (((/* implicit */long long int) 1843303091))));
                    arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_3 [i_3] [(short)9] [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (var_14) : (((/* implicit */int) min((((/* implicit */short) arr_1 [i_1])), (var_2))))))) : (((unsigned int) arr_5 [i_1 + 2] [i_3 - 1] [i_3] [i_3]))));
                    var_24 = ((((/* implicit */_Bool) min(((signed char)-119), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3] [0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (var_17));
                }
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) min((2097152U), (((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (2097152U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [3] [i_0])) ? (((/* implicit */int) (unsigned short)31445)) : (((/* implicit */int) arr_9 [i_1] [i_4] [i_5])))))))));
                        var_26 = ((/* implicit */short) ((int) (signed char)74));
                        var_27 += ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-79))));
                        var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) min((var_1), (((/* implicit */unsigned int) arr_10 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [4] [i_4] [i_1])) ? (((/* implicit */int) var_12)) : (311893685)))) || (((/* implicit */_Bool) var_15)))))) : ((+((-(arr_18 [i_0])))))));
                        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (arr_0 [i_5])))) ? (((((/* implicit */_Bool) ((arr_18 [i_1]) - (((/* implicit */long long int) arr_16 [i_0] [i_4] [i_5]))))) ? (min((arr_17 [8LL] [(unsigned short)11] [(unsigned short)3] [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_10 [i_0])))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [i_5] [i_4] [(signed char)7])), (var_3)))))) : ((-(arr_17 [i_1 - 1] [i_1] [(signed char)10] [2] [i_1 - 2])))));
                    }
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_19 [i_4] [7U] [i_4]) & (arr_19 [(short)9] [i_1 - 3] [i_4])))) ? (((arr_19 [i_4] [i_1 - 3] [i_4]) - (arr_19 [i_6] [2U] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_6] [i_0] [i_0]) != (arr_19 [i_0] [i_1] [i_4])))))));
                        var_31 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_12)), (var_10)))), (max((var_13), (((/* implicit */unsigned int) arr_16 [i_1] [(unsigned char)10] [i_6]))))))));
                        var_32 = var_15;
                        arr_23 [(unsigned char)3] [i_4] [i_1] [i_1] [0U] = ((/* implicit */unsigned char) min((min((((((/* implicit */int) var_16)) / (((/* implicit */int) arr_15 [i_0] [2] [i_4] [(unsigned char)8])))), (arr_14 [9] [(_Bool)1]))), ((~(((arr_14 [i_1] [i_4]) << (((((arr_0 [i_4]) + (199572008))) - (29)))))))));
                    }
                    var_33 = ((/* implicit */int) var_2);
                    var_34 = ((/* implicit */unsigned char) (-(var_14)));
                    arr_24 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_1);
                }
                for (int i_7 = 3; i_7 < 11; i_7 += 1) 
                {
                    arr_27 [i_7] [i_0] [9ULL] [i_0] = ((/* implicit */signed char) (((~((~(64665151))))) | (((min((((/* implicit */int) arr_10 [i_0])), (arr_16 [(signed char)4] [i_1] [(unsigned short)9]))) >> (((/* implicit */int) ((arr_17 [9U] [i_1] [i_1] [i_1] [9]) < (((/* implicit */unsigned long long int) arr_18 [(_Bool)1])))))))));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_1 - 3] [i_1 + 1] [i_1 + 4] [i_7])) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_7] [i_7])) : (((/* implicit */int) var_2))));
                    arr_28 [i_7] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_14 [i_1 + 3] [(short)1])) ? (var_11) : (arr_14 [i_0] [(unsigned short)11])))))) ? (((int) arr_0 [i_1 - 3])) : (((/* implicit */int) arr_6 [i_7] [i_7]))));
                }
            }
        } 
    } 
    var_36 = ((/* implicit */signed char) var_15);
}
