/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230133
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) -3229099059969088710LL);
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (arr_2 [i_0] [i_1] [i_1])))) + (((/* implicit */int) arr_2 [3LL] [8ULL] [i_1]))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (((arr_0 [i_0]) << (((8117454174169887163ULL) - (8117454174169887140ULL))))))))));
                var_18 = ((/* implicit */_Bool) (+(max((((/* implicit */long long int) (signed char)101)), (5964550036734912LL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_8)))))))));
}
