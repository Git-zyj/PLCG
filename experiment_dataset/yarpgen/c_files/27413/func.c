/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27413
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_2))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */int) ((unsigned short) ((unsigned char) arr_13 [i_0] [i_0] [i_0])));
                                var_12 = ((/* implicit */long long int) arr_10 [i_4] [i_1] [i_4] [i_1] [i_2] [i_1]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 2; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [14ULL] [i_2] [4U] = ((/* implicit */int) var_4);
                        var_13 -= ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_2] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))) : (14424071793067916209ULL))))), (((/* implicit */unsigned long long int) ((int) var_1)))));
                    }
                    for (signed char i_6 = 2; i_6 < 16; i_6 += 3) /* same iter space */
                    {
                        arr_20 [i_0] [i_2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) arr_18 [6] [i_6 - 1] [i_6 + 1] [i_6 + 1]);
                        arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max(((~(var_1))), (var_1)));
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), (arr_16 [i_1] [i_6])))) + (2147483647))) >> (((((((((arr_0 [(unsigned char)6]) | (((/* implicit */int) var_10)))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) arr_10 [4ULL] [i_1] [i_0] [i_0] [(unsigned short)2] [i_1]))) - (240))))) - (1197760180))))))));
                    }
                    for (signed char i_7 = 2; i_7 < 16; i_7 += 3) /* same iter space */
                    {
                        arr_24 [i_0] = ((/* implicit */unsigned char) (+(min((arr_8 [i_7 - 1] [i_7 - 1] [i_2] [i_7] [i_1] [i_7 - 2]), (var_1)))));
                        arr_25 [i_7] [i_0] [i_0] [6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (max((((((/* implicit */_Bool) arr_4 [(short)1] [i_0] [i_2])) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_6 [i_0]))), (((var_6) | (((/* implicit */int) var_9)))))) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    }
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) min((max((arr_15 [i_0] [i_2]), (((/* implicit */int) var_0)))), ((-(arr_3 [i_0] [i_0])))))) ? (max((((/* implicit */long long int) var_4)), (((long long int) var_3)))) : (((/* implicit */long long int) max((((int) var_10)), (((((/* implicit */int) var_10)) >> (((arr_6 [15]) + (861428981)))))))))))));
                }
            } 
        } 
    } 
}
