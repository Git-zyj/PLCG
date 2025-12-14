/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205719
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) max(((unsigned char)64), ((unsigned char)19)))) || (((((/* implicit */_Bool) arr_2 [i_0])) || (arr_1 [i_0 - 1])))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((var_9), (((/* implicit */int) (unsigned char)0))))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2157244824U)))))) * ((-(7204833016347187280ULL)))));
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        for (int i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), ((unsigned char)13)));
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        arr_16 [i_1] [i_2] [i_2] [i_4 + 2] [i_3 + 3] = ((/* implicit */signed char) (((((-(8LL))) + (9223372036854775807LL))) << (((max((arr_5 [i_4 + 4] [i_4]), (((/* implicit */unsigned long long int) arr_1 [i_3 - 1])))) - (3778192873488066416ULL)))));
                        var_17 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_11 [i_3] [i_2 - 2] [i_2 - 1] [i_2])) <= (((/* implicit */int) (unsigned char)242))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (-(((/* implicit */int) var_1)))))));
}
