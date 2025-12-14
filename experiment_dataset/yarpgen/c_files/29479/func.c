/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29479
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) 1914967333)) <= (6LL)));
                    var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))) * (max((((/* implicit */unsigned long long int) var_8)), (13907633617411079639ULL))))))));
                    arr_9 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_5))) >> (((arr_3 [i_0] [i_2] [i_2]) + (1851862374)))))) ? ((~(((/* implicit */int) var_0)))) : (arr_3 [i_0] [i_1 - 3] [i_2])));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(-1914967359)))))))))));
    var_14 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
    {
        for (unsigned char i_4 = 4; i_4 < 15; i_4 += 2) 
        {
            {
                var_15 += ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) 2424356810768426806LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_4] [i_3] [i_4 + 1])))))))));
                /* LoopNest 2 */
                for (short i_5 = 3; i_5 < 16; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_15 [i_5] [i_5]);
                            var_17 = ((/* implicit */int) (((+(arr_11 [i_3]))) << (((var_6) - (249510775U)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
