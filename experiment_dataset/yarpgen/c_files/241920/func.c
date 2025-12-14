/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241920
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
    var_20 = var_12;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3461203637749483472LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (-3754631806249481614LL)))))) ? (((/* implicit */int) ((((/* implicit */long long int) 3658446711U)) == (var_2)))) : (((/* implicit */int) ((((long long int) 8346578285720520397LL)) < (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [(unsigned short)8]))))))))));
                arr_7 [i_0] = ((((((/* implicit */_Bool) 8346578285720520397LL)) ? (arr_6 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))))) == (((/* implicit */unsigned int) ((int) arr_0 [i_0 + 1]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_12);
}
