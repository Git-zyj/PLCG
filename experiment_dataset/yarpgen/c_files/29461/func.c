/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29461
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_11 [0LL] [i_1 - 1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_8 [i_1] [i_1])))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (arr_5 [i_1] [i_0] [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_4 - 2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2 - 1] [i_1]))) : (((unsigned int) arr_5 [i_1] [i_0] [i_4]))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [3LL] [i_1] = ((/* implicit */unsigned int) min((((short) var_3)), (((/* implicit */short) min((((unsigned char) arr_7 [i_1] [i_1])), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_7 [i_2] [i_0]))))))))));
                    arr_13 [i_2 - 2] [i_0] [i_0] |= ((/* implicit */unsigned int) (!(((((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_9 [i_0] [0LL] [i_0] [i_0] [i_0])))) < (((/* implicit */int) min((arr_1 [i_0]), (arr_3 [i_0] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */unsigned int) var_8)) & (var_7));
}
