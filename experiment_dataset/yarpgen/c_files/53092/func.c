/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53092
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_4 [i_0] [(short)2] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (arr_1 [i_0] [i_0])))))));
        arr_5 [(_Bool)1] [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_3 [i_0 + 1])), (max((((((/* implicit */int) (unsigned short)16)) >> (((((/* implicit */int) arr_0 [i_0])) + (31357))))), (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) (short)496))))))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((_Bool) (((~(((/* implicit */int) (short)-10505)))) ^ (((((/* implicit */_Bool) arr_3 [(short)1])) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) (short)-23431)))))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        for (unsigned int i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            for (unsigned char i_3 = 4; i_3 < 21; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_16 [i_2] [i_2] [(unsigned short)2] = (unsigned short)65519;
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 22; i_5 += 3) 
                        {
                            var_15 &= ((/* implicit */unsigned char) ((((unsigned int) min((var_12), ((unsigned short)25043)))) >> (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_3] [i_4] [i_4] [(short)6] [i_3] [i_3])), (var_11)))))))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_15 [i_5])))) >> (((/* implicit */int) ((unsigned char) var_11)))))) ? (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 4] [i_2 - 2] [i_2 + 4])))) : (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_3] [i_2 + 4] [i_3] [i_3] [i_4] [i_5])) : (arr_6 [i_4] [i_4]))) >> (((/* implicit */int) min((arr_7 [i_5]), (((/* implicit */short) arr_19 [i_3]))))))))))));
                            var_17 = ((unsigned short) ((unsigned short) min((var_3), (((/* implicit */long long int) var_12)))));
                            var_18 = ((/* implicit */unsigned char) max((((((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_1] [(unsigned short)23] [i_1])), ((unsigned short)9)))) | (((((/* implicit */int) var_12)) & (((/* implicit */int) arr_7 [(short)4])))))), (((/* implicit */int) ((_Bool) min(((short)-1), (((/* implicit */short) arr_17 [i_2] [i_1] [i_1] [i_1] [(unsigned short)15] [i_5]))))))));
                            var_19 = ((/* implicit */unsigned char) (~((+(max((((/* implicit */long long int) var_10)), (var_11)))))));
                        }
                        var_20 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) var_13)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_23 [(unsigned short)19] [(unsigned short)19] [(unsigned short)19] [i_4] [i_2] = ((/* implicit */long long int) ((unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned short)65532)) : (((((/* implicit */int) arr_11 [i_6] [i_6] [i_6])) & (((/* implicit */int) (unsigned short)25)))))));
                            var_21 ^= ((/* implicit */short) max((((arr_8 [i_1] [i_1] [i_3 - 1]) >> (((((/* implicit */int) (unsigned short)17)) ^ (((/* implicit */int) (_Bool)1)))))), (((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) ((_Bool) arr_8 [i_1] [i_1] [i_1]))) : (((/* implicit */int) ((short) var_1)))))));
                            var_22 = ((short) ((short) arr_22 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] [(short)22]));
                            var_23 = ((/* implicit */int) ((unsigned char) min((arr_9 [i_1] [i_1]), (arr_9 [i_1] [i_1]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_26 [(_Bool)1] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_3] [(unsigned short)9] [i_3 - 3] [i_3])) - (((/* implicit */int) arr_10 [i_2 - 3] [i_2 - 1] [i_2 + 2] [i_2]))));
                            var_24 = ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_21 [i_1] [i_2] [i_1] [i_3] [i_4] [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_1]) || (((/* implicit */_Bool) var_4)))))) : (((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_7] [i_2])) ? (arr_24 [i_1] [i_1] [i_2] [i_1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(short)4] [i_3 + 2] [i_4] [i_2]))))));
                            arr_27 [i_1] [i_2] [i_2] [i_2] [(short)17] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [(short)16])) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_2 + 2] [i_2] [i_2 + 2] [i_7])));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_3 - 3] [i_2 - 2])) <= (((/* implicit */int) arr_9 [i_3 + 1] [i_2 - 2]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 4; i_8 < 21; i_8 += 4) 
                        {
                            arr_32 [i_2] [(unsigned char)22] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_25 [i_2]))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_2 - 2] [i_2] [i_2 - 3] [i_2 - 3] [i_2 + 1]))) | (arr_29 [i_1])));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_8] [i_8 - 2] [(_Bool)1] [2] [(unsigned short)10] [(_Bool)1])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_2]))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_2] [i_2]))) ^ (var_3)))));
                        }
                        var_28 |= min((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) << (((((/* implicit */int) var_7)) - (5231)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((unsigned int) var_2)))), (((/* implicit */unsigned int) min((((unsigned short) arr_9 [i_1] [i_1])), (min((((/* implicit */unsigned short) arr_10 [18] [18] [i_1] [i_3])), (var_2)))))));
                    }
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((unsigned short) ((unsigned short) arr_10 [i_2 + 1] [i_2 + 4] [i_3 - 1] [i_3])))));
                }
            } 
        } 
    } 
}
