/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3656
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
    var_12 = ((/* implicit */signed char) var_8);
    var_13 = ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)44))))), ((-9223372036854775807LL - 1LL))))) ? (var_2) : (((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (short)2426)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))) : (4294967283U))) : (((((/* implicit */_Bool) (short)2)) ? (((/* implicit */unsigned int) var_10)) : (var_0)))))));
    var_14 = ((((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (short)-27)))) && (((/* implicit */_Bool) (short)-27)))) ? (((((((/* implicit */_Bool) (signed char)-62)) && (((/* implicit */_Bool) 49868684)))) ? (((/* implicit */int) var_3)) : (-668285726))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((((/* implicit */_Bool) (short)10931)) || (((/* implicit */_Bool) (short)9))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) (short)-17)) ^ ((((((+(((/* implicit */int) var_11)))) + (2147483647))) >> (((((/* implicit */int) (signed char)-64)) / (var_7)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) var_3)), (10419572133344710787ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_4)) * (var_0))))));
                        arr_11 [i_0] [i_2] [i_0] = ((/* implicit */long long int) var_10);
                        var_16 = ((/* implicit */long long int) var_4);
                    }
                } 
            } 
        } 
        var_17 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) 668285726)) - (678371037U))))))), (max((max((((/* implicit */unsigned int) var_8)), (var_9))), (((/* implicit */unsigned int) (+(var_7))))))));
        var_18 = ((/* implicit */unsigned int) var_8);
    }
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-91)))))) * (var_0)));
}
