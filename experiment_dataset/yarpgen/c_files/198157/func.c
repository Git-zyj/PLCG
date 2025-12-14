/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198157
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (((((~(((/* implicit */int) arr_0 [i_0] [i_1 + 1])))) + (2147483647))) << (((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_1)))))) - (2))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)156)) % (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 2] [i_1 - 1])) : (arr_7 [i_1 - 1] [i_1 + 3] [i_1 + 1] [i_1 - 1])))));
                        arr_10 [i_0] [i_0] [(short)10] [i_1] = ((/* implicit */unsigned int) (~(((((((/* implicit */int) arr_9 [i_3] [i_2] [i_0] [i_0])) / (arr_2 [i_0] [i_1]))) / (((/* implicit */int) var_6))))));
                        arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [(unsigned short)1]))))), (min((var_9), (var_9))))))));
                        arr_12 [(_Bool)1] [(unsigned short)22] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(unsigned short)2] [i_2] [i_3])) ? (((/* implicit */int) (short)-7282)) : (((/* implicit */int) (short)-7282))))), ((~(17822962783184643073ULL)))))) ? (((/* implicit */int) (short)-7282)) : (((/* implicit */int) (short)-7282))));
                        var_16 -= ((/* implicit */unsigned short) ((short) max((var_8), (((/* implicit */unsigned short) var_10)))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [(short)16] [i_1] [i_4] = ((((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_1] [i_2] [i_1])) == (((unsigned long long int) var_0)))) ? (((((/* implicit */int) var_3)) / (((((/* implicit */int) var_10)) * (((/* implicit */int) (signed char)14)))))) : (1483983603));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1 - 1])) >> (((((/* implicit */int) var_3)) - (44679)))))) ? (((/* implicit */unsigned long long int) (-(min((var_7), (var_12)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_5 [i_0] [i_0] [(_Bool)1]) : (((/* implicit */long long int) arr_13 [i_0] [24U] [i_2] [i_4] [(signed char)12]))))), (((unsigned long long int) -1483983603)))))))));
                        var_18 = ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1 + 1] [i_1])) ? (min((((/* implicit */int) (unsigned short)12924)), (arr_13 [i_0] [i_0] [20LL] [i_2] [i_1]))) : (((((/* implicit */_Bool) (short)15511)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2044))))));
                        arr_16 [i_0] [i_0] [10] [(short)0] |= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [2U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [14U] [14U]))) : (var_9)))) ? (((((/* implicit */_Bool) (unsigned short)12924)) ? (arr_5 [i_4] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-23))))) : (((/* implicit */long long int) arr_7 [i_1 + 3] [i_1 + 3] [i_2] [i_4]))))));
                    }
                }
            } 
        } 
    } 
    var_19 = var_8;
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_5))));
}
