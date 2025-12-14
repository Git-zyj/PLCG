/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198809
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_15 ^= (_Bool)1;
                                arr_13 [11LL] [i_0 - 1] [i_1] [i_2] [i_1] [0U] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)53143))))), (arr_2 [i_2])));
                                var_16 = ((/* implicit */short) max((var_16), (var_10)));
                            }
                        } 
                    } 
                    var_17 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)76)) << ((((((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) - (2893621876U))))))));
                    var_18 += ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)12378))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */unsigned long long int) (unsigned short)16444);
    var_20 ^= ((unsigned char) max((max((-6070872394066579717LL), (-4611686018427387904LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)53143)) : (((/* implicit */int) var_14)))))));
}
