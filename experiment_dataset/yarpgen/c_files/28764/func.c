/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28764
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
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) | (arr_6 [(signed char)8] [i_1] [i_1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : (8797638662846388324LL)))) ? (((/* implicit */int) arr_5 [(signed char)8] [i_1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_0 [8LL] [8LL]))))) : (arr_4 [i_0 + 2] [i_0 + 1])));
                    arr_8 [0LL] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) arr_0 [9LL] [(unsigned char)6]);
                    var_19 = ((/* implicit */unsigned char) arr_1 [3LL] [i_1]);
                    arr_9 [i_0 - 1] [i_2] [(signed char)7] = ((long long int) 8797638662846388302LL);
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) var_14)) ? (var_2) : (((((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_13))) & (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_12))))));
    var_21 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8));
    var_22 = ((unsigned char) (unsigned char)4);
}
