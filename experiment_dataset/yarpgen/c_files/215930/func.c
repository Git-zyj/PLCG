/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215930
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
    var_18 = ((/* implicit */unsigned int) var_12);
    var_19 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))), ((_Bool)1)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = arr_4 [i_1];
                arr_6 [i_1] [i_1] [(signed char)9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_4 [i_0]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0] [i_0])))))) ? (((unsigned int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] &= ((/* implicit */signed char) min((min((arr_10 [i_0] [i_0] [i_3] [i_3] [i_3 + 1]), (arr_10 [i_0] [i_3] [i_2] [i_3] [i_3 - 1]))), ((+(arr_10 [i_0] [i_1] [i_2] [i_3] [i_3 + 3])))));
                            arr_12 [i_2] [2LL] [8U] [i_2] = ((/* implicit */int) arr_1 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_14);
}
