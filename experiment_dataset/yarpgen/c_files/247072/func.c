/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247072
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
    var_13 ^= ((/* implicit */signed char) var_12);
    var_14 *= ((/* implicit */int) ((((_Bool) (~(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_1))));
    var_15 ^= ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_16 += ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) arr_1 [i_2])))));
                            var_17 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((int) var_7)))))));
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */unsigned int) arr_9 [i_1 + 1] [i_1 - 3] [i_1] [i_1] [i_0 - 1]);
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_5 [i_0] [i_5] [i_1]))));
                                var_20 ^= ((/* implicit */int) arr_12 [i_0] [i_5] [i_6] [i_5]);
                                arr_18 [i_6] [i_5] [i_6] [i_6] [i_1] [i_0] |= (!(((/* implicit */_Bool) ((unsigned int) (_Bool)1))));
                                var_21 -= ((/* implicit */long long int) var_1);
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (unsigned char)76))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 += ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
}
