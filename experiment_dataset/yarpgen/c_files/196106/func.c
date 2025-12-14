/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196106
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
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [10LL]))))) == (((((/* implicit */int) (signed char)65)) ^ (((/* implicit */int) arr_1 [2ULL] [2ULL]))))));
                var_17 = ((/* implicit */unsigned char) var_2);
                var_18 = ((/* implicit */long long int) var_9);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 9; i_2 += 4) 
    {
        for (unsigned char i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_12 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_9 [i_2 - 3] [i_2] [i_2])))) + (((-1LL) - (-1279086674187271235LL)))))));
                    arr_13 [i_3] [(short)4] [i_3] = ((((/* implicit */_Bool) -3573412371264548625LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) : (25LL));
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-126)) ? (var_4) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) arr_0 [i_3 + 1])))))));
                }
            } 
        } 
    } 
    var_20 += ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-66))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)79))))) + (((/* implicit */int) var_1))))) : ((((!(((/* implicit */_Bool) (short)-28722)))) ? (((((/* implicit */_Bool) -9223372036854775801LL)) ? (var_13) : (((/* implicit */long long int) 2546792924U)))) : (var_13))));
}
