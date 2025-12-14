/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208789
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) -6095925180020485701LL))));
                                arr_15 [i_0] [i_0] [i_3] [i_0] [10LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [10LL] [i_0])) ? (((arr_6 [i_4] [i_3 - 1] [i_2]) / (((/* implicit */int) (_Bool)1)))) : (max((2097152), (((/* implicit */int) arr_0 [i_4] [i_1]))))))) ? (((((/* implicit */int) ((signed char) arr_2 [i_3 - 1]))) | (((((/* implicit */_Bool) (short)21878)) ? (var_9) : (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (arr_4 [i_2 + 1])))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 1] [i_1])) + (2147483647))) >> (((((/* implicit */int) (short)-4027)) + (4041)))))))) ? ((+((~(((/* implicit */int) var_8)))))) : (((/* implicit */int) ((short) ((int) (unsigned short)4816))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)0))))));
}
