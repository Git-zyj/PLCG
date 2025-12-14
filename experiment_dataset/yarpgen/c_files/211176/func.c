/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211176
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
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((2784497894U), (((/* implicit */unsigned int) (signed char)95))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (70368744177663LL)))))), (min((17084616098821274532ULL), (arr_3 [(short)0])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 6; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0 + 2] [i_0] [i_0] [(signed char)5] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)1))));
                            var_20 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)227))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)153))))), (var_8)));
    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
    var_23 = ((/* implicit */long long int) var_12);
}
