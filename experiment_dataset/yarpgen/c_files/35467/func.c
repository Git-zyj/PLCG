/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35467
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
    var_15 = ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 16364024477800829402ULL)) ? (16364024477800829414ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) (~(arr_5 [i_1])));
                            var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((16364024477800829402ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) (+(arr_1 [i_0] [(short)4])))) : (((((/* implicit */_Bool) var_14)) ? (2082719595908722237ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103)))))))));
                            arr_12 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */long long int) var_14);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32755))) : (var_11)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-23314)))))), ((~(((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_13)))))))))));
}
