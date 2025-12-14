/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226509
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
    var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)195))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (signed char)90))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (min((max((1229386617U), (((/* implicit */unsigned int) 593030311)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_2 [i_1] [i_1])))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_1])))) & (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
            }
        } 
    } 
}
