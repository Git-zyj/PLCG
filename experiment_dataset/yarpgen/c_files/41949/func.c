/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41949
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
    var_19 = ((/* implicit */int) var_5);
    var_20 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)12)) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)195))))))) && (((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned char)244), ((unsigned char)6)))), (((var_4) ^ (((/* implicit */int) var_12)))))))));
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), ((signed char)27))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_9)))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) min((((((/* implicit */int) (!(var_6)))) ^ (((/* implicit */int) min((((/* implicit */unsigned short) (short)6645)), (var_1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))));
                arr_5 [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
            }
        } 
    } 
}
