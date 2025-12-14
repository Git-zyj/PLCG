/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27519
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */unsigned long long int) (+((-((+(((/* implicit */int) (unsigned char)65))))))));
                var_18 &= ((/* implicit */_Bool) arr_2 [i_1]);
                arr_6 [i_1] [i_1] [(signed char)4] &= (~(((/* implicit */int) (signed char)91)));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (-1697009270) : (arr_2 [i_0]))))))));
                            var_20 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_2] [(signed char)1] [i_3]);
                            arr_13 [i_0] [(_Bool)1] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_0 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_1);
}
