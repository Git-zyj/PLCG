/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198763
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
    var_11 &= ((/* implicit */signed char) (+((((-(((/* implicit */int) var_6)))) | (((((/* implicit */int) var_2)) >> (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 3] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)129))))) : ((+(arr_0 [i_0] [i_0]))))));
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0 + 3]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_10))))) & (((((/* implicit */_Bool) arr_3 [(unsigned char)13])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_5))))))) : (((((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_0 [i_0] [(unsigned char)16]))) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                var_13 = ((/* implicit */unsigned char) min((var_13), (arr_5 [i_0] [i_1])));
            }
        } 
    } 
    var_14 += ((/* implicit */_Bool) ((((((((/* implicit */int) var_1)) == (((/* implicit */int) var_3)))) ? (((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_3))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (-(-1588813640744139976LL)))))))));
}
