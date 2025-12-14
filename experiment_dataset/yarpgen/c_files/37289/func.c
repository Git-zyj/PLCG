/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37289
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) var_12))))) - ((~(var_10)))))) ? (((/* implicit */unsigned long long int) var_10)) : (var_7)));
    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) ((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_2] [i_3]))) : (arr_7 [i_0 + 1] [i_1]))))), (var_7))))));
                        arr_10 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_0 [i_2] [i_2]))))));
                    }
                    for (int i_4 = 2; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        arr_15 [i_0] [i_0 + 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_4] [i_4 - 1] [i_0 + 1] [i_4 + 1])))));
                        arr_16 [i_0 - 2] = ((/* implicit */short) (~(((unsigned int) arr_12 [i_0 + 2] [i_4 + 1]))));
                        var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_13 [(short)1] [i_4] [i_2] [i_1] [i_0 - 2] [i_0 - 2])))) ^ (((/* implicit */int) ((signed char) arr_4 [12])))))), (((((/* implicit */unsigned long long int) (-(arr_8 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) * (((unsigned long long int) arr_1 [i_2]))))));
                    }
                    for (int i_5 = 2; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */int) ((max((arr_8 [i_0] [i_5 - 2] [i_5] [i_0] [i_5] [(short)6]), (arr_8 [i_2] [i_5 - 1] [i_2] [i_5] [i_5 - 1] [i_2]))) + ((~(arr_8 [i_2] [i_5 + 1] [i_5 - 2] [i_2] [i_2] [i_5])))));
                        arr_20 [i_0 - 2] [i_1] [i_2] [i_5 - 2] |= ((/* implicit */short) max((((arr_9 [i_0 + 2] [i_0] [11ULL] [i_0] [i_0]) | (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0 + 2])) - (((/* implicit */int) arr_4 [i_0 - 1])))))));
                        var_18 = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_11 [i_0 - 2] [i_5 - 1])))));
                        var_19 = max((((/* implicit */int) max(((unsigned char)119), ((unsigned char)40)))), ((~((-(((/* implicit */int) arr_4 [i_0])))))));
                    }
                    for (int i_6 = 2; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        var_20 = min((((/* implicit */unsigned long long int) var_1)), (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6 - 1] [i_6] [i_6 - 2] [i_6 - 1]))))));
                        var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (((unsigned int) var_4))));
                        arr_24 [i_0] [i_1] [i_2] [i_6 - 1] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_13 [i_0] [i_0 + 2] [i_6 - 2] [i_6 - 2] [13U] [i_6]))))));
                        arr_25 [i_2] = ((/* implicit */unsigned int) (~((~(arr_14 [i_0 + 1])))));
                    }
                    var_22 = ((/* implicit */long long int) (-(((unsigned int) var_8))));
                    var_23 = ((/* implicit */signed char) arr_12 [i_0] [i_1]);
                }
                var_24 = arr_23 [i_0] [(_Bool)1] [i_0];
                var_25 = ((/* implicit */unsigned short) (~((+((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))));
                var_26 *= ((/* implicit */unsigned int) max((((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0])), (((int) min((4294967295U), (790034464U))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) max((var_10), (((long long int) ((signed char) var_10)))));
}
