/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248881
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_10 += ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-71)) + (84)))));
                                arr_17 [i_0] = (i_0 % 2 == 0) ? (((((/* implicit */int) (short)32745)) >> (((arr_7 [i_0]) - (125530181293333926LL))))) : (((((/* implicit */int) (short)32745)) >> (((((arr_7 [i_0]) - (125530181293333926LL))) - (2415107067405832266LL)))));
                                var_11 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) arr_12 [i_0 - 2] [i_1] [i_1] [7ULL] [i_0]))))) ? (((((/* implicit */_Bool) (short)32767)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32746)) ? (((/* implicit */int) (short)32767)) : (var_1))))))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) 3618804563U)) ? (((/* implicit */int) (unsigned char)1)) : (var_3))))) < (var_3)));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) var_1);
}
