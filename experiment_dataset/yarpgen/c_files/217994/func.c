/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217994
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned char)31), ((unsigned char)0)))) >> (0LL)));
    var_11 = ((/* implicit */signed char) var_9);
    var_12 = ((((/* implicit */_Bool) (unsigned char)225)) ? ((~(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) var_0)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) (_Bool)0);
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1))))) ? (arr_2 [i_2] [i_4]) : (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2])))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_3] [i_0])))))));
                                var_14 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) min(((unsigned short)3517), ((unsigned short)62019)))), (((((/* implicit */_Bool) 12620059709275465432ULL)) ? (arr_9 [i_3] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) 28LL))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) max((arr_5 [i_0]), (((/* implicit */unsigned int) (_Bool)0))));
                }
            } 
        } 
    } 
}
