/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30788
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (~((-(-7980991936803480862LL))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 += (-((-(((/* implicit */int) var_2)))));
                var_13 *= ((/* implicit */unsigned char) max(((-(-7980991936803480862LL))), (((/* implicit */long long int) (-(-1590808079))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */long long int) arr_3 [i_0] [(short)3])) > (var_0)))), (var_8)))) - (arr_3 [i_0] [i_0])));
                var_15 &= ((/* implicit */unsigned char) (~((-(((((/* implicit */int) (unsigned char)1)) * (((/* implicit */int) var_1))))))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_16 *= ((/* implicit */_Bool) 2147483647);
                            var_17 = ((/* implicit */int) min(((-(7980991936803480863LL))), (((/* implicit */long long int) 2147483647))));
                            var_18 = ((/* implicit */unsigned char) var_0);
                            var_19 -= ((/* implicit */signed char) (~((((~(-517132880))) - (((((/* implicit */int) var_2)) - (((/* implicit */int) var_5))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) var_7))))))) / (((/* implicit */int) var_8))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (min((7980991936803480859LL), (((/* implicit */long long int) var_8)))) : (var_9))) / (var_9))))));
}
