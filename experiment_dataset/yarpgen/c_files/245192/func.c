/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245192
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_15)), ((short)14336))))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) -492183429)) : (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_20 &= ((/* implicit */unsigned short) var_17);
    var_21 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) min((var_12), (-492183429)))), (var_17)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)116)), (var_13))))));
                var_22 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-100))))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_1] [i_1])), (var_14)))) : (max((((/* implicit */int) var_14)), (846787091)))))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1006436617)))))));
                var_24 ^= max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) arr_1 [i_1])))))))), (var_10));
                var_25 |= ((((((/* implicit */int) (signed char)-117)) + (2147483647))) << (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)91)), (arr_1 [i_0])))) ? (((/* implicit */int) min((var_2), (((/* implicit */signed char) arr_3 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (arr_1 [i_1]) : (((/* implicit */int) (signed char)31)))))));
            }
        } 
    } 
    var_26 = var_14;
}
