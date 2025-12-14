/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236669
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
    var_19 = ((/* implicit */long long int) (unsigned char)74);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_2] [i_3] &= ((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (-7143062482753245999LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)253)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : (((((/* implicit */int) arr_0 [(signed char)2])) | (((/* implicit */int) arr_5 [(_Bool)1]))))));
                        arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (var_17))))) | ((~(-7143062482753245994LL)))));
                    }
                } 
            } 
            arr_13 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) > (((/* implicit */int) arr_2 [i_0] [i_0])))))) - ((~(-1054674846667582583LL)))));
        }
        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0]))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((((7143062482753245999LL) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_15)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))));
}
