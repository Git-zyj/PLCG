/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33933
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((short) var_9))) % (((/* implicit */int) ((short) var_7)))));
                var_15 = ((/* implicit */unsigned int) ((int) min((((/* implicit */long long int) arr_2 [(signed char)21] [6] [i_1])), (var_3))));
                var_16 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)23))) & (((long long int) arr_2 [i_1 - 3] [(_Bool)1] [i_1]))));
                var_17 -= ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_2 [18ULL] [i_1 - 3] [i_1 + 1])))), (((/* implicit */int) ((_Bool) arr_2 [i_1] [i_1 + 1] [i_1 + 2])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 2; i_2 < 21; i_2 += 2) 
    {
        for (signed char i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            {
                var_18 = var_5;
                var_19 = ((/* implicit */int) arr_7 [(signed char)20] [i_2]);
                var_20 += ((/* implicit */long long int) ((unsigned int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-25182)))) : (11ULL))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned short) min((((((((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) >= (var_0))) ? (((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) min((var_12), (((/* implicit */unsigned int) (signed char)-45))))))), (min((((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */long long int) var_6)) : (var_3))), (((/* implicit */long long int) ((int) var_12)))))));
}
