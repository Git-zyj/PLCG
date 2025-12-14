/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36899
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
    var_19 = ((/* implicit */long long int) var_9);
    var_20 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_5)) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_4 [i_1])))) ? (((/* implicit */long long int) min((4294967289U), (((/* implicit */unsigned int) var_10))))) : (((((/* implicit */_Bool) 1335690153U)) ? (arr_4 [i_1]) : (arr_4 [i_1])))))));
                var_21 = arr_1 [i_0 + 1];
                var_22 = ((/* implicit */unsigned char) var_15);
                var_23 = arr_0 [i_1] [6U];
                var_24 = ((/* implicit */unsigned char) (unsigned short)22615);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned char) 52244429U))), (((((/* implicit */_Bool) var_3)) ? (min((var_8), (-7936194482856651296LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_7))))))))));
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) << (((var_15) - (2204006258622052891LL)))));
}
