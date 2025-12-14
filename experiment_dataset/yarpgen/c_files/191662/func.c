/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191662
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_3] [i_2] [i_3] [i_1] [i_3] |= ((/* implicit */signed char) (!(((var_0) == (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                            var_20 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((var_14) / (arr_5 [i_0] [i_3] [i_0])))) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3])) : (((int) arr_0 [i_1] [i_3]))))));
                            var_21 += ((arr_6 [i_2] [i_1] [i_2]) & (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (signed char)9)))));
                            var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2] [i_2] [i_1] [i_3])) || (((/* implicit */_Bool) ((((((((/* implicit */int) var_10)) % (arr_7 [i_0] [i_0] [i_3]))) + (2147483647))) << (((((/* implicit */int) var_6)) - (79))))))));
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */short) (~(((arr_7 [i_1] [i_0] [i_0]) - (((int) var_8))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_12);
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) (-(var_14)))))));
}
