/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2
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
    var_13 = ((/* implicit */_Bool) var_8);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((((var_4) + (2147483647))) << (((((long long int) var_3)) - (412624330926489205LL))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1 - 2] = (((+(((arr_2 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_11))))))) >> (((((arr_2 [i_0] [i_1 + 3]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))))) - (8597336906654519LL))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned int) (((~(((/* implicit */int) (signed char)-1)))) >= (((/* implicit */int) ((short) 229229572154164597ULL)))));
                    arr_7 [7LL] [i_1 + 1] [(_Bool)1] [i_2] |= ((/* implicit */signed char) arr_3 [i_0 + 1] [i_1 + 1]);
                }
            }
        } 
    } 
}
