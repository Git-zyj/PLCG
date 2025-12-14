/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248299
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((2061763220U), (((/* implicit */unsigned int) var_4)))), (max((2061763241U), (((/* implicit */unsigned int) var_4)))))))));
    var_12 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_9) <= (((/* implicit */long long int) 2429032081U)))))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((1647500259), (2147483630))) != (((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = ((unsigned short) arr_3 [i_1]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((long long int) (signed char)-86)), (((/* implicit */long long int) 2061763232U))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_1]))))) : ((+(min((arr_0 [i_1] [i_0]), (arr_0 [i_0] [i_1])))))));
                arr_6 [i_0] [i_0] [i_1] = min((((/* implicit */int) arr_2 [i_0] [i_1])), (((arr_2 [i_0] [i_1]) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_1])))));
                var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0] [i_1])))) || (arr_2 [i_0] [i_1]))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2233204069U)), (arr_3 [i_1])))), (arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
}
