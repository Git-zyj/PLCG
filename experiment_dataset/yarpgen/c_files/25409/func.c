/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25409
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
    var_13 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_12))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_10 [i_2] [0LL] [i_2 - 1] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) 0U)) & (1438017865586165578LL)));
                            var_15 -= ((/* implicit */_Bool) min((max((max((955469615661694372LL), (1438017865586165578LL))), (((/* implicit */long long int) (~(arr_5 [i_0] [i_1] [i_0])))))), (((/* implicit */long long int) (~(-937241452))))));
                            var_16 = ((unsigned char) (((-(arr_8 [i_0] [i_0]))) / (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))));
                            arr_11 [i_0] [i_1] [i_2] [2] [i_1] [i_2] = (!(((/* implicit */_Bool) ((((((/* implicit */int) var_11)) == (((/* implicit */int) arr_7 [i_0] [i_2 - 1] [i_3])))) ? (max((var_1), (arr_8 [5LL] [5LL]))) : (((((/* implicit */_Bool) var_10)) ? (arr_9 [i_0] [(unsigned char)6] [i_2 + 1] [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_3 - 1])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
