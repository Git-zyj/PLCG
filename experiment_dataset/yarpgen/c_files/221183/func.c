/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221183
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
    var_10 = ((/* implicit */long long int) max((((short) ((((/* implicit */int) var_7)) <= (-921293534)))), (((/* implicit */short) (!(((((/* implicit */int) var_7)) <= (((/* implicit */int) (_Bool)1)))))))));
    var_11 = ((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)54)) : (var_4))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) >> (((((((var_2) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (var_2)))))) - (1402530226))));
    var_12 = (((-(((/* implicit */int) ((510519668692608684ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) > (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (var_1)))) ? (((int) var_1)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))));
    var_13 = ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)1)), (((((arr_2 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_6))))) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])))))));
                    var_15 = ((/* implicit */unsigned long long int) (unsigned short)22295);
                }
            } 
        } 
    } 
}
