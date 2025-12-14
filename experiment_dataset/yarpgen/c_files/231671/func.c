/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231671
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((long long int) (-(var_4)))))));
                            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((var_16) != (var_2)))) : (((/* implicit */int) arr_6 [i_3] [i_3] [i_1] [i_3] [i_3] [i_0]))));
                            arr_8 [i_0] [15LL] [i_2 - 2] [10U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (134217728U) : ((~(4160749568U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */long long int) arr_4 [(unsigned short)12] [i_2] [i_3])) : (9223372036854775795LL))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) arr_4 [i_1] [i_2] [i_3])) : (var_14)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (var_18)))) : (((/* implicit */int) var_0))))));
                            arr_9 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)1))))) > (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_2)))))) ^ (8388606)));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned int) ((int) (-(var_13))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) var_12))))) ? (4160749556U) : (((/* implicit */unsigned int) 8388606))));
    var_23 = ((/* implicit */long long int) var_13);
    var_24 &= ((/* implicit */unsigned short) min((var_9), (((/* implicit */unsigned char) ((((var_17) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) > (((/* implicit */long long int) min((4193792), (((/* implicit */int) var_0))))))))));
}
