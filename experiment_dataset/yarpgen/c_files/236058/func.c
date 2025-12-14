/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236058
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((max((4319112156271172707ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) >> (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)249)), (arr_7 [i_0] [i_0] [i_2])))) - (20077))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39059))))))));
                    arr_9 [i_2] [i_1] [i_0] = arr_2 [i_0];
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((1679073070228353123ULL) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))))));
    var_17 = ((/* implicit */long long int) var_15);
    var_18 = ((min((((((/* implicit */_Bool) 16767671003481198491ULL)) ? (16767671003481198505ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)239))))), (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (var_11))))) <= (((unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
}
