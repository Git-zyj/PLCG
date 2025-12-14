/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205537
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_1]);
                var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_1])) ? (((/* implicit */int) (!(var_3)))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (var_14)))))) ? (((/* implicit */int) arr_3 [(short)8] [i_0 + 1] [i_1])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) <= (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) != (((/* implicit */int) arr_1 [i_0 - 2]))))))))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0 - 2])), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (min((((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) - (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) 826190885)) ? (((/* implicit */int) (short)17805)) : (var_14)))))));
                var_19 ^= ((/* implicit */short) arr_0 [i_0] [i_0]);
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0))))))), (min((arr_2 [i_0] [i_0]), (arr_2 [(unsigned char)2] [i_0])))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_4)))));
}
