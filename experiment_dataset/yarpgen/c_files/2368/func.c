/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2368
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
    var_17 = ((/* implicit */_Bool) var_15);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((/* implicit */long long int) arr_4 [i_0 - 1] [i_1 - 1] [i_0]))))) : (max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2])))));
                                arr_15 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -3934541965335877666LL)) && ((_Bool)1)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_18 += ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (((/* implicit */int) ((arr_8 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) arr_5 [i_0])))))));
                                var_19 += ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) arr_18 [i_0] [i_0 + 1] [i_2 - 1] [i_1 + 1]);
                }
            } 
        } 
    } 
}
