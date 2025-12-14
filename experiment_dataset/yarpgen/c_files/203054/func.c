/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203054
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [(unsigned char)12] = ((((/* implicit */_Bool) max(((unsigned short)48614), (((/* implicit */unsigned short) arr_2 [i_1 + 1] [i_1 + 2] [i_1 - 3]))))) ? (((long long int) var_6)) : (((/* implicit */long long int) min((arr_5 [7LL] [i_1 - 2] [i_1 + 1] [i_1 + 2]), (var_0)))));
                    var_12 += ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_0]))))) * (((((/* implicit */int) arr_7 [(unsigned short)12] [i_1 - 1] [(unsigned short)12])) / (((/* implicit */int) (short)-9260)))))) == (((int) arr_6 [i_1 - 2] [i_1 + 2] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (short)9259))));
                                var_14 = (+(max((((((/* implicit */int) arr_1 [i_2])) ^ (arr_5 [(unsigned char)13] [i_1] [i_1] [i_1]))), (((/* implicit */int) var_1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */unsigned int) var_0);
    var_16 = ((/* implicit */long long int) min((var_16), (max((((/* implicit */long long int) var_5)), ((-(min((((/* implicit */long long int) var_5)), (2995540717078210588LL)))))))));
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_11)) - (11670)))));
}
