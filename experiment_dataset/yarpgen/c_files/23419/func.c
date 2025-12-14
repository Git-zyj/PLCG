/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23419
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_4))))));
                            arr_8 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (((-962398561) ^ (((/* implicit */int) (_Bool)1))))));
                            arr_9 [i_1] [(unsigned char)13] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-22372))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (short i_5 = 2; i_5 < 16; i_5 += 4) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_4] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_8)), ((+((-2147483647 - 1)))))))));
                            var_13 -= ((/* implicit */_Bool) max(((+(((/* implicit */int) var_9)))), ((+(((/* implicit */int) var_9))))));
                            arr_18 [i_0] [i_0] [i_0] [i_1] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) != (((/* implicit */int) (!(((/* implicit */_Bool) min(((-2147483647 - 1)), (2147483647)))))))));
                            arr_19 [i_1] [5ULL] [i_4] [i_5 - 2] = ((/* implicit */unsigned short) var_0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) max((-1806929729), (var_10)));
}
