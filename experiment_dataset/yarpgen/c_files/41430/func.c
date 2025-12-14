/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41430
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) arr_2 [i_1] [i_0]);
                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) arr_3 [i_0])) / (3116992045U))) : (((/* implicit */unsigned int) (-(2029782194))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_11 &= ((/* implicit */short) (+(((arr_7 [i_1] [i_2] [i_2] [(signed char)6]) + (((2187667380492315397LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_12 = ((/* implicit */int) (((+(((/* implicit */int) (unsigned short)65535)))) < (((/* implicit */int) ((_Bool) arr_8 [i_0] [i_2])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (short i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) arr_10 [i_0]);
                                var_14 = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 &= ((/* implicit */_Bool) ((short) var_0));
}
