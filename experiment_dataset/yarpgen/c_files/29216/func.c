/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29216
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [(short)4] [i_1] [i_1] = var_7;
                    var_13 += ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)35))) : (arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) arr_8 [(unsigned char)8] [i_3 - 1] [i_2] [i_0]);
                                arr_13 [(short)4] [i_1] = ((/* implicit */long long int) (signed char)55);
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10082)) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)12))));
}
