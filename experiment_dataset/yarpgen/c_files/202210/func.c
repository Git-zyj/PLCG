/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202210
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
    var_16 = ((/* implicit */unsigned char) (((-(max((var_3), (((/* implicit */unsigned int) var_11)))))) >> (((((unsigned int) var_7)) - (92U)))));
    var_17 -= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-31806))))), ((+(31U))))), (((/* implicit */unsigned int) var_10))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40415)) ? (((/* implicit */long long int) ((arr_8 [i_0] [i_1]) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) arr_6 [i_1] [i_2 + 4]))))) : (((((/* implicit */_Bool) arr_4 [14LL] [14LL])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32764))) : (arr_2 [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (-426939002) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))) : (576459652791795712LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [6LL]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */short) arr_5 [(unsigned short)6])), (var_13)))))))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)40)) - (12)))));
                    arr_9 [i_2] [i_1] [i_1] [i_0 + 1] = ((/* implicit */long long int) arr_5 [i_1]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (var_8) : (var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)40023)) : (((/* implicit */int) var_13))))) ? (max((((/* implicit */long long int) (_Bool)1)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31806)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))), (((var_5) - (((/* implicit */unsigned long long int) 956689726U))))))));
}
