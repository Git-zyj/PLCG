/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209581
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
    var_17 += ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_13)))) < (min((var_13), (var_10)))))), (((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (signed char)-24))))) + (((/* implicit */int) (_Bool)1))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) min(((short)32767), ((short)8))))))) & (max((((long long int) var_13)), (((((/* implicit */long long int) ((/* implicit */int) var_14))) % (var_7)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2623348814U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) : (0)))) : (((((/* implicit */long long int) ((((/* implicit */int) var_15)) + (var_8)))) % (((((/* implicit */long long int) ((/* implicit */int) (signed char)23))) % (-2532897729296122546LL))))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_3 [i_2 - 1] [(unsigned short)10] [i_2 + 1]), (var_12)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])))))));
                    arr_6 [15U] [i_1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) arr_1 [i_0] [i_0])) - (-1LL)))))) ^ (max((((/* implicit */long long int) min(((signed char)-102), ((signed char)24)))), (2LL)))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_10 [i_3] = ((/* implicit */long long int) arr_3 [i_3] [i_3] [i_3]);
        var_21 += ((/* implicit */signed char) (+(min((arr_1 [i_3] [i_3]), (arr_1 [i_3] [i_3])))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) -331032766732066244LL)) && (((/* implicit */_Bool) 9223372036854775807LL)))) || (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (signed char)-24))))))) / (max(((((_Bool)0) ? (var_8) : (0))), (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (short)28370))))))))))));
        var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (arr_13 [i_4]) : (arr_13 [i_4]))), ((~(((/* implicit */int) arr_0 [i_4] [i_4]))))));
        var_24 = ((/* implicit */unsigned short) ((0LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (1270417190U)))) ? (215702993U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -802135464)))))))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_4] [i_4])))))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_4] [i_4])) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (arr_12 [i_4])))));
        var_26 -= ((/* implicit */unsigned short) ((int) (-(((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (2784594496414282114LL)))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) min((arr_14 [(_Bool)1]), (arr_14 [i_5])))))))));
        var_27 = ((/* implicit */long long int) ((((((/* implicit */int) var_14)) & (((/* implicit */int) arr_15 [i_5] [i_5])))) << (((((/* implicit */int) max((arr_15 [i_5] [i_5]), (arr_15 [i_5] [(_Bool)1])))) + (41)))));
    }
}
