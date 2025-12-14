/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220701
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
    var_15 += ((/* implicit */long long int) max(((-(((((/* implicit */_Bool) var_7)) ? (var_14) : (var_5))))), (var_12)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) var_5);
        var_17 = ((/* implicit */unsigned long long int) var_9);
        var_18 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    var_19 = max((((((unsigned long long int) var_5)) % (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))), (((/* implicit */unsigned long long int) (_Bool)1)));
                    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)35))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_13)))) : (var_12)));
                }
            } 
        } 
        var_21 += ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) var_12)))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_2 [i_4]))))) ^ (((unsigned int) var_6))));
        arr_12 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)109)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115)))));
    }
    var_23 = ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) var_9)) ? (9355277796260477576ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) var_11))))));
}
