/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199042
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
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_13)))));
    var_16 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (~(9223354444668731392ULL)))) && (((/* implicit */_Bool) ((signed char) var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)27430)), (14568626812472489212ULL)));
                var_18 = ((/* implicit */int) arr_4 [i_0 + 3] [i_1] [(short)4]);
                var_19 |= ((/* implicit */unsigned char) min((arr_0 [i_1]), (((/* implicit */unsigned short) (!(((_Bool) -1489229420)))))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 2332285574682137331LL)), (3082226995989695548ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
            }
        } 
    } 
}
