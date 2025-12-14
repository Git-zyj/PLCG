/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21618
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_16))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (-(926619725678055811LL)));
    }
    for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    arr_15 [i_3] [i_2] [i_3] &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1]))))));
                    arr_16 [i_1] [i_2] = ((/* implicit */long long int) (~((+(2147483647)))));
                    arr_17 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
                }
            } 
        } 
        arr_18 [i_1] = (+(-4403816219766963240LL));
        arr_19 [(unsigned char)0] = ((/* implicit */int) (~((~((~(var_17)))))));
    }
    var_18 = var_6;
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        arr_23 [i_4] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_2))))));
        arr_24 [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            arr_28 [i_4] [i_5] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_1 [i_4]))))));
            arr_29 [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
            arr_30 [i_5] [i_4] |= ((/* implicit */int) (!(((/* implicit */_Bool) 4294967292U))));
        }
    }
}
