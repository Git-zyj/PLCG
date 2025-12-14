/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249662
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] = ((/* implicit */short) (+(min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)89))) : (var_15)))))));
                            var_20 ^= ((unsigned long long int) (~(((/* implicit */int) (signed char)26))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] &= min(((unsigned char)213), (((unsigned char) arr_9 [i_0])));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((((/* implicit */int) var_1)), (((((/* implicit */int) var_8)) & ((~(((/* implicit */int) var_0))))))));
    var_22 = ((/* implicit */long long int) (+(4294967295U)));
    var_23 = ((/* implicit */signed char) ((((unsigned long long int) var_9)) << (((/* implicit */int) var_12))));
}
