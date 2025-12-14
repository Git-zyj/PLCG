/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43913
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10043)))))) >> (((((long long int) ((((/* implicit */_Bool) 2199006478336LL)) ? (2199006478336LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55432)))))) - (2199006478305LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    var_13 = ((/* implicit */long long int) ((short) var_4));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_1 [i_1]))) ? (arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)142)) << (((var_7) - (1176113923U))))))));
                }
                arr_7 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
            }
        } 
    } 
}
