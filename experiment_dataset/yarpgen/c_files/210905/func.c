/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210905
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
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_0))))))), (var_9)));
    var_19 = ((/* implicit */unsigned int) (short)-32763);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1 + 1] = ((/* implicit */unsigned short) (short)-32764);
                    arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0])) != (((/* implicit */int) (unsigned short)65516))));
                }
            } 
        } 
    } 
}
