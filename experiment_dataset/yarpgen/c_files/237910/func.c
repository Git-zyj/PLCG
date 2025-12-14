/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237910
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((4294967295U) >= (2889491815U))))));
        var_20 = ((/* implicit */unsigned short) arr_0 [i_0] [9LL]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((var_11) | (((((/* implicit */_Bool) (unsigned char)217)) ? (arr_2 [(unsigned char)0] [i_1 - 1]) : (532406208489854607LL)))));
        arr_6 [(unsigned short)5] = ((/* implicit */unsigned long long int) (-(min(((+(((/* implicit */int) arr_1 [i_1] [i_1])))), (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1]))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (var_4)))) ? (((((/* implicit */_Bool) ((unsigned int) 8860900322327682590LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)10)) || (((/* implicit */_Bool) (unsigned short)4426))))) : (((/* implicit */int) arr_3 [i_1] [i_1 - 1])))) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1]))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_23 = ((unsigned long long int) max((arr_10 [i_1 - 1] [i_2]), (arr_10 [i_1 - 1] [i_2])));
                    arr_14 [(unsigned short)8] [(unsigned char)10] [(signed char)6] [i_3] |= max((((/* implicit */unsigned long long int) (signed char)-1)), (34359738367ULL));
                    arr_15 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((274877904896ULL), (9636518720348384891ULL)))) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) arr_4 [i_1]))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_17))));
    var_25 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) 6788587422722311445LL)), (0ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_1))))) | (((var_6) + (((/* implicit */long long int) ((/* implicit */int) var_18)))))))) : (((unsigned long long int) min((-136604885812346841LL), (((/* implicit */long long int) 2389843566U))))));
    var_26 = ((/* implicit */unsigned short) var_9);
}
