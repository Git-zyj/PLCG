/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217741
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [8LL] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) var_11))))))) : (((arr_2 [i_0] [i_0]) >> (((((/* implicit */int) arr_0 [i_0])) - (1685)))))))) ? (min(((-(16871947707021243771ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) (signed char)127)), (var_6))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) var_11);
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)1)))) - ((-(((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3))))) : (((var_4) + (((/* implicit */unsigned long long int) var_8))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) ^ (min((5968198799344136258ULL), (var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (((((var_1) + (9223372036854775807LL))) >> (((/* implicit */int) var_9)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)0)), (2249634364U)))) ? (min((12478545274365415357ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) var_8))))));
    var_15 = ((/* implicit */unsigned int) var_1);
}
