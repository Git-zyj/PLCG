/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46365
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 1] = ((/* implicit */_Bool) (-(max((var_4), (((/* implicit */unsigned long long int) (unsigned char)0))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6)))))) || (((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((var_10) + (((/* implicit */int) var_5)))))))));
                            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((unsigned short) max((((long long int) -7542756590910458841LL)), (((/* implicit */long long int) min((var_9), (((/* implicit */unsigned char) var_5)))))))))));
                        }
                    } 
                } 
                arr_10 [i_1] [i_0 - 2] [(unsigned short)6] = ((/* implicit */unsigned int) min((((/* implicit */short) (signed char)(-127 - 1))), (((short) arr_9 [i_1] [i_1] [i_0] [i_1]))));
            }
        } 
    } 
    var_14 = max((((/* implicit */int) max((max(((unsigned short)64100), (((/* implicit */unsigned short) (signed char)21)))), (((/* implicit */unsigned short) var_5))))), (var_10));
    var_15 = ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) 7542756590910458823LL);
                    var_17 ^= ((/* implicit */_Bool) (signed char)116);
                    var_18 *= ((/* implicit */_Bool) max((max((((-1359040027) ^ (((/* implicit */int) (unsigned char)31)))), (((/* implicit */int) (signed char)11)))), (((((/* implicit */_Bool) arr_11 [i_5] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)255))))));
                }
            } 
        } 
    } 
}
