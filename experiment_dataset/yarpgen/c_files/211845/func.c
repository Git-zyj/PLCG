/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211845
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
    var_13 = ((/* implicit */int) max((var_13), ((((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_3)))))) ? (((((/* implicit */_Bool) 511)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */long long int) 511)) < (511LL)))))) : (max((((/* implicit */int) min((var_4), (((/* implicit */short) (_Bool)1))))), (var_8)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_12 [(short)13] [(signed char)19] [i_2 + 1] [i_0] [i_4] = ((/* implicit */unsigned char) arr_10 [i_0] [16] [i_0] [i_2 + 1] [i_3] [i_0] [i_2 + 1]);
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */signed char) (_Bool)1);
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) ((short) ((-514) | (((/* implicit */int) (unsigned char)243)))))))))));
                                var_15 += ((signed char) arr_9 [i_0] [i_1] [i_4] [i_3] [i_4]);
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) * ((+((~(arr_2 [i_0] [i_0] [7])))))));
                }
            } 
        } 
    } 
}
