/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232741
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
    for (long long int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_10 -= ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) (signed char)-51)));
                    var_11 *= ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_2] [i_1 + 2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        for (signed char i_4 = 3; i_4 < 14; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_10 [i_3])), (var_6))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_10 [i_4 - 3]))))));
                    arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((/* implicit */int) arr_14 [i_3] [i_3]))))) != (((unsigned int) arr_14 [i_3] [i_3]))));
                    arr_20 [i_4 - 3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)23742)) & (((/* implicit */int) (unsigned short)63910))));
                    var_13 += ((/* implicit */_Bool) min(((unsigned char)69), (((/* implicit */unsigned char) (signed char)51))));
                }
            } 
        } 
    } 
}
