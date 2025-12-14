/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219584
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
    var_16 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL)))))) ? (((/* implicit */int) (unsigned short)12823)) : (((/* implicit */int) var_5)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1]))) ^ (var_0)))) ? ((((_Bool)1) ? (((/* implicit */int) (short)30593)) : ((+(((/* implicit */int) (unsigned short)43283)))))) : (((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_0 [i_3] [i_3])) : (((/* implicit */int) var_3)))) << (((((((/* implicit */_Bool) (unsigned short)57458)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) - (9223372036854775798LL)))))));
                            arr_12 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */int) ((short) var_10));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 9223372036854775807LL))));
                            arr_13 [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) == (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))), (-1859977114)));
                        }
                    } 
                } 
                var_18 -= ((/* implicit */long long int) max(((+(((/* implicit */int) arr_5 [i_0] [i_1])))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))) >= (2216247542U))))));
            }
        } 
    } 
}
