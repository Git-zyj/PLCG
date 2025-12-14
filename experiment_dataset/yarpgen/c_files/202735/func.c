/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202735
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) 15201197584110733979ULL))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) var_6);
                    var_20 = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) 2630705933010848547LL)), (max((15201197584110733969ULL), (var_16)))))));
                    var_21 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)14)), ((unsigned short)16383))))));
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned short) (unsigned char)10);
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) + (5938188677986430879ULL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (-1963364746111296736LL)))) : (((unsigned long long int) arr_5 [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */unsigned short) (-((~((~(var_10)))))));
    var_23 = ((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_17)))))) << (((var_9) - (10868807559738944284ULL))));
    var_24 = ((/* implicit */long long int) var_5);
}
