/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48770
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_2))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) 1131278433U);
                var_21 ^= max((((unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2))))), (max((2433011009152119802ULL), (5592025063206401072ULL))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] [i_2] [i_0] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) var_8))), ((unsigned char)196))))));
                            var_22 ^= ((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)7)), (var_0)));
                            var_23 = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)127)))));
                            var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (short)8721))));
                            arr_11 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                        }
                    } 
                } 
                arr_12 [i_0] = min((((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) (unsigned short)61988)))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 1626493830U)) : (15927386301081184571ULL))));
            }
        } 
    } 
}
