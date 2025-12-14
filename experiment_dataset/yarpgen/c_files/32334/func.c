/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32334
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
    var_13 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_7)), (((((/* implicit */int) (unsigned short)39943)) >> (((var_2) - (2793095275U)))))))));
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_15 += ((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (var_10) : (((/* implicit */unsigned long long int) var_0))));
        var_16 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
        var_17 = ((/* implicit */unsigned short) (~(((var_9) << (((arr_0 [8ULL] [i_0]) - (2713039476U)))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_18 = ((1937894716U) << (((((/* implicit */int) arr_11 [i_1] [i_1 - 2] [i_3] [i_3])) - (24537))));
                        var_19 -= ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1]))) + (var_2));
                        var_20 = ((/* implicit */unsigned long long int) var_2);
                        var_21 = ((/* implicit */unsigned int) ((_Bool) (~(arr_0 [i_0] [i_1 - 2]))));
                        var_22 = ((/* implicit */unsigned int) arr_10 [i_0] [13ULL] [i_2] [i_3]);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
    {
        var_23 += ((/* implicit */unsigned short) var_0);
        var_24 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)122))))));
    }
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_4))));
}
