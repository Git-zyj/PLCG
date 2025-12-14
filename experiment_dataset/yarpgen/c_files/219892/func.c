/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219892
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
    var_10 = ((/* implicit */signed char) max((((var_4) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (var_3)))) : (((((/* implicit */_Bool) (unsigned char)199)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57))))))), (((/* implicit */unsigned long long int) 1986984058))));
    var_11 &= ((/* implicit */_Bool) (-(((int) (!(((/* implicit */_Bool) var_5)))))));
    var_12 -= ((/* implicit */_Bool) (unsigned char)61);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1986984058)))))) == (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_5))))) ? (((long long int) (unsigned short)43126)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))))));
                var_13 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_0)))), (max((438244546), (((/* implicit */int) arr_3 [i_0 + 2]))))));
            }
        } 
    } 
}
