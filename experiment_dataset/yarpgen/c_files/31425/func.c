/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31425
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
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((unsigned long long int) (signed char)7)) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [5LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1284686065)) || (((/* implicit */_Bool) -505175124))));
        var_19 = ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((((/* implicit */_Bool) -2565494923431384913LL)) || (((/* implicit */_Bool) (signed char)69))))));
        var_20 = ((/* implicit */_Bool) -1284686067);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    {
                        var_21 ^= ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) var_9)))));
                        var_22 = ((/* implicit */long long int) ((((13238894946733182784ULL) & (((/* implicit */unsigned long long int) arr_5 [(unsigned char)6])))) ^ (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_14) : (((/* implicit */int) arr_0 [i_1] [i_1])))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) var_11);
    }
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7988378588937279372LL)) ? (4294967276U) : (19U)));
}
