/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227382
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
    var_16 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (var_14))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [10LL] [(unsigned short)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (34359721984LL)))));
        arr_4 [(short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */int) arr_0 [(_Bool)1]))))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) (unsigned char)248))))) ? (((((/* implicit */_Bool) ((signed char) -34359721982LL))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_10) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
    }
    for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_1 + 2] [i_1])) : (var_5)))) ? (((long long int) (unsigned char)8)) : (((long long int) var_11))));
                    var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_1] [i_3 - 1] [i_3 - 1] [20]))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_1] [i_3])) : (((/* implicit */int) arr_11 [i_3] [i_3 - 1] [i_3] [i_3 - 1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_3] [(signed char)4] [(signed char)4])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((signed char) (unsigned char)183))) : (((/* implicit */int) var_9))))));
                    arr_13 [i_2] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (_Bool)1))))) ? (var_15) : (((/* implicit */int) (signed char)(-127 - 1))))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((short) ((long long int) 10087854131034658290ULL))))));
    }
    var_20 = ((/* implicit */unsigned char) var_5);
}
