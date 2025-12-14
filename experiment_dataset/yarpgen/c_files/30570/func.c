/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30570
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
    for (int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [0U] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_0 + 2]), (arr_2 [i_0 + 2])))) ? (((/* implicit */int) ((signed char) (-(arr_5 [i_0] [0ULL] [i_2]))))) : ((+((+(((/* implicit */int) arr_1 [i_2]))))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_14), (((/* implicit */short) (signed char)(-127 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_4)))))) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (var_16))))));
                }
            } 
        } 
    } 
    var_21 += ((/* implicit */short) var_16);
    var_22 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_17)))) ? (var_8) : (((/* implicit */long long int) -310404841)))) << (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)63)))) <= (((/* implicit */int) var_0)))))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) ((var_16) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-27743)))))))) : (((/* implicit */int) ((((((/* implicit */int) (signed char)-47)) - (((/* implicit */int) (signed char)-115)))) > ((+(((/* implicit */int) var_5)))))))));
}
