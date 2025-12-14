/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243037
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
    var_17 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), ((+(min((2147483647), (((/* implicit */int) var_4))))))));
    var_18 += ((/* implicit */int) 4294967274U);
    var_19 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    var_20 -= ((/* implicit */unsigned short) ((2147483628) - (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))));
                    arr_8 [i_2] [i_0 + 2] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))));
                }
                arr_9 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) max((var_2), (((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1] [i_0]))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((/* implicit */unsigned short) ((266720993201844600LL) > (((/* implicit */long long int) 474043062))))), (var_13))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 151985636)) > (max((((((/* implicit */_Bool) (short)-24198)) ? (-1LL) : (((/* implicit */long long int) (-2147483647 - 1))))), (((/* implicit */long long int) min((var_13), ((unsigned short)41010))))))));
            }
        } 
    } 
}
