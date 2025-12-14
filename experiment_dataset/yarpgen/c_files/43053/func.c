/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43053
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 = (-(((((4920394413843400082LL) > (((/* implicit */long long int) 81364466)))) ? (((arr_1 [i_1 + 1] [(signed char)4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) arr_1 [8ULL] [13ULL])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-91))))))));
                var_20 = (~((-(arr_6 [i_0]))));
                arr_8 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned long long int) ((arr_5 [i_1 + 1]) != (((/* implicit */unsigned long long int) max((2696281930U), (((/* implicit */unsigned int) (signed char)-24)))))));
                var_21 |= ((/* implicit */signed char) 7625533887609322311ULL);
                var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_2 [i_1])) <= (arr_5 [i_0])))), (max(((signed char)14), ((signed char)99))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_16);
}
