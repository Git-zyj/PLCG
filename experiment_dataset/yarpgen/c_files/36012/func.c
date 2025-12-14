/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36012
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
    var_11 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)27666)), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned int) (signed char)83)), (3U)))))));
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) 1865453307936942661LL)) ? ((~(((((/* implicit */_Bool) (signed char)111)) ? (-1865453307936942662LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((1865453307936942661LL), (((/* implicit */long long int) -192416827))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [(unsigned short)3] [i_0] [i_0] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_5)) ? (var_9) : (7289100152395807106LL))), (((/* implicit */long long int) (~(819449446U)))))), (((/* implicit */long long int) var_0))));
                    var_13 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)26623)) ? ((~(((/* implicit */int) ((signed char) arr_2 [i_1]))))) : (((/* implicit */int) (signed char)0))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-26624))));
}
