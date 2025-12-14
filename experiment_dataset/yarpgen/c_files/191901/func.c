/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191901
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
    var_13 = ((/* implicit */int) (unsigned char)245);
    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1509417950U)) ? (((/* implicit */unsigned long long int) 4294967275U)) : (9679292225402875260ULL)));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [(_Bool)1] [i_0 + 2] = ((/* implicit */unsigned short) 0ULL);
                    arr_7 [i_0 - 3] [i_1] [i_0 - 3] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])), ((((~(((/* implicit */int) arr_3 [(unsigned short)16])))) + (((int) var_3))))));
                    var_15 = ((/* implicit */unsigned char) 2785549346U);
                }
            } 
        } 
    } 
}
