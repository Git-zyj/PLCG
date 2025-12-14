/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54632
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
    var_10 = ((/* implicit */unsigned short) (-((+(((int) (signed char)89))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) min(((((-(-5081272288774062235LL))) / (((/* implicit */long long int) min((2147483647), (2147483647)))))), (((/* implicit */long long int) ((unsigned char) min(((unsigned short)43616), (var_1)))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((arr_0 [i_0 + 2]) | (((/* implicit */int) arr_3 [i_0 + 1])))) <= ((~(((/* implicit */int) min(((unsigned short)13370), ((unsigned short)21922))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) var_4);
            }
        } 
    } 
    var_11 = ((/* implicit */int) var_6);
    var_12 = ((/* implicit */signed char) var_5);
    var_13 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_4))))) ? (max((((/* implicit */int) (unsigned short)50820)), (-1132745762))) : ((-(((/* implicit */int) (unsigned short)43620))))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) var_0)))));
}
