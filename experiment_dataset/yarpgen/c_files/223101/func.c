/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223101
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
    var_12 = ((/* implicit */unsigned char) (-(var_8)));
    var_13 = ((/* implicit */int) var_3);
    var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((2606024578U), (((/* implicit */unsigned int) (short)22849))))) ? (max((var_7), (2173095826U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_10)))) ? (2173095816U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))))));
                var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) && ((!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min(((+(var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_0)))) ? ((-(((/* implicit */int) (short)10202)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_1))))))))))));
}
