/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202024
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
    var_17 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_13)) : (var_11)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(var_8)));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (var_3) : (((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) max((min((max((var_10), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (var_4)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) var_3))))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(var_4)))), ((-(var_12)))))) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_15)), (var_16))), (((var_16) % (var_16)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_2)))))) % (var_10)))));
        arr_7 [(unsigned char)20] = ((/* implicit */int) (+((+(var_3)))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            {
                var_20 = (-(max((min((var_13), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) ((unsigned int) var_14))))));
                var_21 += ((/* implicit */unsigned short) max(((-(max((((/* implicit */long long int) var_4)), (var_3))))), (min((var_3), (((/* implicit */long long int) var_2))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) min((var_22), (max(((((-(((/* implicit */int) var_6)))) % ((~(((/* implicit */int) var_6)))))), ((+(((/* implicit */int) ((signed char) var_1)))))))));
}
