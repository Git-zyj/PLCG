/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193097
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
    var_13 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) (unsigned char)22)))) : (((/* implicit */int) ((var_11) == (var_11)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = (+(((/* implicit */int) var_2)));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((var_6) - (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_6 [i_1] = (+((+(min((((/* implicit */unsigned long long int) (unsigned char)21)), (5358439439722795832ULL))))));
        var_15 = ((/* implicit */long long int) (~(((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) << (((((/* implicit */int) var_1)) - (13)))))));
    }
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        var_16 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) var_5)), (var_11)))) >= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_12)))))), (min((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) var_5)))), (max((var_11), (var_11)))))));
        var_17 = ((/* implicit */long long int) min((((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (~((-((+(((/* implicit */int) var_4))))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */int) var_8)))))))));
                    arr_16 [i_2] [i_3] [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) ? (((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))));
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_4)))), ((-(((/* implicit */int) var_10))))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
    }
}
