/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4384
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) arr_0 [i_1] [i_0]);
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((short) 18446744073709551615ULL));
                arr_6 [(signed char)15] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(18446744073709551597ULL))))));
            }
        } 
    } 
    var_11 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) 7ULL))));
    var_12 = (-(var_5));
    var_13 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 35ULL))))));
    /* LoopSeq 3 */
    for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        var_14 = ((/* implicit */signed char) ((_Bool) (~((~(((/* implicit */int) (short)31)))))));
        arr_10 [i_2 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2])))))));
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(min((10ULL), (((/* implicit */unsigned long long int) 0U)))))))));
        var_15 = ((/* implicit */_Bool) arr_2 [i_3] [i_3]);
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (~((~(1ULL))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_2 [i_4] [i_4]))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-102))))))))));
        arr_18 [i_4] [i_4] = ((/* implicit */_Bool) arr_16 [i_4]);
    }
}
