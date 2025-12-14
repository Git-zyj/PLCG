/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197842
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
    var_15 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16234))) % (max((((/* implicit */unsigned int) (unsigned char)53)), (1035310625U))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_3 [i_1]))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) 18000236048329788900ULL);
            }
        } 
    } 
}
