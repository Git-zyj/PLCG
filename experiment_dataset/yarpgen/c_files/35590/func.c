/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35590
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
    var_12 = ((/* implicit */long long int) (((~((-(6287145706843222956ULL))))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
    var_13 = ((/* implicit */unsigned long long int) ((unsigned short) (+(max((((/* implicit */unsigned long long int) var_3)), (1525181899815188962ULL))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        var_14 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 4]))));
        arr_3 [i_0] [i_0 - 4] = ((/* implicit */unsigned short) 3);
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_0 - 4] [i_0 - 4])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 3]))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */short) arr_5 [i_1]);
        arr_9 [i_1] = ((/* implicit */unsigned char) 2268757481U);
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */int) max((var_16), ((+(((int) (-(((/* implicit */int) (unsigned short)64335)))))))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
            {
                {
                    var_17 += ((/* implicit */_Bool) ((unsigned long long int) var_11));
                    var_18 = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
    }
}
