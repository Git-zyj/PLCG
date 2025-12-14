/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54667
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) (+(((unsigned long long int) var_10)))));
                    var_16 &= ((/* implicit */_Bool) ((unsigned int) (~(((((/* implicit */_Bool) arr_0 [8LL] [8LL])) ? (var_13) : (((/* implicit */long long int) 3129034165U)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */_Bool) var_10);
                                arr_14 [i_0] [i_0] = ((/* implicit */signed char) var_14);
                                arr_15 [i_0] [i_0] [i_3] [i_3] [i_4] [i_3] |= ((/* implicit */long long int) ((((((/* implicit */int) var_9)) % (((int) 7449819703744074547ULL)))) >= (var_8)));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
                    var_18 += ((/* implicit */unsigned long long int) arr_3 [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((8191U) >> (0ULL)))) ? (((/* implicit */int) var_15)) : (var_10)));
}
