/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52030
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-2147483647 - 1));
                    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0] [i_0])) <= (-2147483637))) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)11])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [7] [7] [7])) ? (var_12) : (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_7 [(signed char)0] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0]))))))));
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(-1176707661562361169LL))))))) : ((+(((((/* implicit */int) (short)20975)) + (((/* implicit */int) var_9))))))));
    var_15 = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
}
