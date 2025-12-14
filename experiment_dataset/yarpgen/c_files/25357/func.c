/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25357
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
    var_12 = ((/* implicit */int) ((min(((~(var_3))), (((/* implicit */long long int) var_11)))) / (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (0) : (((/* implicit */int) var_5))))));
                            var_14 *= ((/* implicit */int) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) || (((/* implicit */_Bool) (~((~(var_4))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_15 = var_9;
                            var_16 = ((/* implicit */long long int) ((_Bool) 9223372036854775807LL));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_11)))) ? (((((/* implicit */int) var_1)) ^ (2147483630))) : (min((var_4), (var_9)))))) ? (((/* implicit */long long int) ((max((var_4), (((/* implicit */int) var_0)))) >> (((var_8) - (1389105310)))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-3))))), (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_3)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)41)))) ^ (((max((var_9), (((/* implicit */int) var_11)))) << (((/* implicit */int) ((_Bool) var_4))))))))));
            }
        } 
    } 
}
