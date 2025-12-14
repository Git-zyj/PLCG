/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206034
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) (-((((-(3021076605U))) ^ (arr_2 [i_2 + 1] [14] [i_2 + 3])))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58803)))))) ^ ((~((+(arr_0 [i_0])))))));
                                var_14 = ((/* implicit */_Bool) (+((+(arr_4 [i_3 - 2] [i_3] [6U])))));
                                arr_12 [i_1] [i_3 - 3] [(_Bool)1] [i_2] [0LL] [i_1] [i_1] = ((((/* implicit */_Bool) arr_5 [(signed char)6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (min((((/* implicit */long long int) (+(arr_2 [i_0] [i_1] [i_2 + 2])))), (arr_4 [i_0] [i_3 - 1] [i_2 + 3]))));
                            }
                        } 
                    } 
                    arr_13 [4] [i_0] [(signed char)14] [i_2 + 2] |= ((/* implicit */unsigned short) (+(((/* implicit */int) min((((short) arr_1 [i_0])), (((/* implicit */short) arr_7 [i_2 + 3] [i_2 - 1] [i_2 + 1] [i_1])))))));
                    arr_14 [i_0] [i_1] [i_0] [i_1] &= ((/* implicit */_Bool) arr_1 [i_2 + 1]);
                    var_15 = ((/* implicit */unsigned char) min(((-(arr_11 [i_2] [2LL] [i_2] [i_2 + 3] [i_1] [i_2]))), ((+(arr_4 [i_2] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (-((+(var_4)))));
}
