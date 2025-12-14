/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37740
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) min((-385634289), (((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)154)))) * (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_3)))))) : (min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (var_11)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (var_0))) : (((/* implicit */int) ((unsigned short) (unsigned short)8191)))))), (min((max((((/* implicit */unsigned long long int) var_11)), (2609425332646580858ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)89)) / (((/* implicit */int) (_Bool)1)))))))));
}
