/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205521
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
    var_16 = (+(var_14));
    var_17 -= ((/* implicit */long long int) (+(var_14)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1847827474)) ? (((/* implicit */int) arr_0 [i_0])) : (-1))), (((/* implicit */int) max((arr_3 [i_0] [i_1]), (var_2))))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) (+(arr_1 [i_0 + 4] [i_1])))) : (((((/* implicit */_Bool) 17799731196105651679ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40402))) : (var_11)))))));
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_0] [i_0 - 1])) <= (((/* implicit */int) arr_3 [i_0] [i_0 - 1])))) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0] [i_0 - 1]))));
                var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40423)) ? (4362862139015168ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) && (((/* implicit */_Bool) var_1)))))) : (4362862139015168ULL))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_5);
    var_21 = ((/* implicit */long long int) var_9);
}
