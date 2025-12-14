/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208510
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_13))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)16939)) ^ (((/* implicit */int) (unsigned short)127)))))) : (((/* implicit */int) ((((/* implicit */int) var_13)) != (var_0))))));
    var_17 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) -2487957246912764289LL))))))) * (((/* implicit */int) max((arr_0 [i_0 - 1]), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)13))))))))));
                var_19 = ((/* implicit */int) 2487957246912764289LL);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                var_20 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2115775493U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) : (3344648328U)))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((signed char) var_5)));
                            var_22 = ((/* implicit */unsigned int) ((unsigned long long int) var_3));
                        }
                    } 
                } 
            }
        } 
    } 
}
