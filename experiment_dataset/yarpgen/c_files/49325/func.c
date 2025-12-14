/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49325
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
    var_10 = ((/* implicit */unsigned short) ((((((/* implicit */int) max((((/* implicit */unsigned char) var_5)), ((unsigned char)255)))) << (((((var_0) - (((/* implicit */int) var_4)))) + (226753121))))) == (((int) ((long long int) var_4)))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_5))))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))) != (var_9)))))));
    var_12 = ((/* implicit */unsigned int) var_1);
    var_13 &= ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (var_5)))) ? (((((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) >> (((var_1) - (7636107725438359855LL))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (min((((/* implicit */unsigned short) var_4)), (var_7))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((((/* implicit */long long int) max((arr_6 [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [(signed char)8] [14ULL] [(signed char)8])) && (((/* implicit */_Bool) var_0)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) var_0))))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) arr_0 [i_0] [i_1]))))))))))));
                arr_7 [i_0] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [15U] [i_1] [i_1]))) ^ (arr_2 [i_1]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))));
                var_15 ^= ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))) & (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_1)))))))));
            }
        } 
    } 
}
