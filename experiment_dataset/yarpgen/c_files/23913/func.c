/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23913
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) (-(((/* implicit */int) (short)32754)))))))), (var_1)));
    var_12 = min((((((/* implicit */int) (short)-32754)) | (((/* implicit */int) var_10)))), (var_9));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-32754))))))) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32735))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_0] [(_Bool)1] [i_2 + 2] [i_3] [i_3] = ((/* implicit */_Bool) arr_5 [i_0] [i_0]);
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32735)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_3] [i_2] [i_3])) >> (((((/* implicit */int) arr_0 [i_0] [i_1])) - (133)))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_0)) + (((/* implicit */int) var_10)))))) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [i_2 + 2] [i_2 - 2] [i_2 + 2]), (((/* implicit */unsigned char) arr_10 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 - 2] [i_2 + 1])) || (((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2 - 2] [i_2 + 2] [i_2 - 2]))))) : (((((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 3] [i_2 - 2] [i_2 + 2])) - (((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */short) min((((arr_14 [i_0] [i_0] [i_2 + 2] [i_2 + 2] [i_3] [i_3] [i_3]) | (((/* implicit */int) arr_3 [i_1] [i_1] [i_2 - 1])))), (((arr_14 [(short)8] [i_0] [i_2 + 2] [i_2 + 2] [1U] [(short)8] [i_2]) / (((/* implicit */int) arr_7 [i_2] [i_0] [i_2 - 1] [i_4] [i_4] [8LL]))))));
                            arr_16 [i_2] [i_1] [(short)10] [i_3] [i_4] [i_1] [i_0] = ((/* implicit */int) ((long long int) (short)32754));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) max((arr_8 [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_1] [i_2 + 3] [7LL] [i_2] [i_2] [i_2 + 1] [i_2])) >= (((/* implicit */int) arr_19 [i_1] [i_2 + 1] [3] [i_2] [i_2 + 2] [i_2 + 2] [i_3]))))))))));
                            var_18 = ((/* implicit */short) min((((/* implicit */int) arr_0 [i_2 + 3] [i_1])), ((-(((/* implicit */int) arr_0 [i_1] [i_0]))))));
                            var_19 *= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_19 [11LL] [i_0] [i_1] [i_1] [i_1] [i_3] [i_5])) ? (((((/* implicit */int) (short)-32735)) & (((/* implicit */int) (short)-32735)))) : (max((arr_12 [i_0] [(unsigned short)10] [i_2 + 2] [i_3] [i_5]), (((/* implicit */int) (short)-32754)))))));
                            var_20 = ((/* implicit */unsigned short) max((min((((/* implicit */int) arr_15 [i_0] [i_2] [i_2 - 1] [i_2] [i_0])), (min((var_6), (((/* implicit */int) arr_3 [i_0] [(unsigned short)9] [7LL])))))), (((/* implicit */int) max((arr_19 [(short)2] [3ULL] [i_2 - 2] [i_3] [i_5] [i_5] [i_5]), (arr_19 [(unsigned char)8] [i_2] [i_2 - 2] [(unsigned char)8] [i_5] [i_5] [i_5]))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            arr_23 [i_0] [i_3] [i_2] [(signed char)2] [i_0] = ((/* implicit */short) (-(arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_6] [i_6])));
                            var_21 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) ((arr_14 [i_0] [i_0] [i_2] [i_0] [i_6] [(unsigned char)10] [i_0]) <= (((/* implicit */int) arr_0 [i_1] [i_0]))))), (((unsigned short) arr_6 [i_0]))))) / (((((/* implicit */int) arr_17 [i_2] [(unsigned char)2] [i_2 - 2] [i_2 - 2] [2] [i_0] [i_1])) - (((((/* implicit */_Bool) arr_17 [i_6] [i_0] [i_2 + 1] [i_1] [i_0] [i_0] [i_0])) ? (arr_21 [i_0] [i_1] [i_2] [i_2] [i_6]) : (arr_21 [i_0] [i_2] [i_2] [i_1] [i_0])))))));
                        }
                    }
                } 
            } 
        } 
        arr_24 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((long long int) arr_9 [i_0] [i_0])))), (max((((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) min(((short)32754), (((/* implicit */short) var_8)))))))));
    }
}
