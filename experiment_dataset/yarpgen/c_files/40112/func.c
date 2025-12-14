/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40112
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
    var_15 ^= ((/* implicit */unsigned int) var_12);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */short) var_7);
                    var_16 = ((/* implicit */unsigned char) ((signed char) arr_1 [i_2] [i_2]));
                    var_17 -= ((/* implicit */_Bool) ((arr_2 [i_0]) % (arr_2 [i_0])));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_4 [5U]))))));
        arr_9 [i_0] |= ((/* implicit */long long int) ((var_11) - (((/* implicit */unsigned int) -198971659))));
        var_18 = (signed char)11;
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 20; i_3 += 4) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */unsigned int) var_5);
        arr_15 [i_3] = ((/* implicit */unsigned char) arr_6 [i_3] [i_3] [(_Bool)1] [i_3 + 1]);
        var_19 = ((/* implicit */signed char) (unsigned short)53394);
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2074981775U)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_3]))))) : (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_3])))))));
    }
    for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) arr_1 [i_4 + 2] [i_4]))), (arr_0 [i_4])));
        arr_18 [i_4] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(arr_16 [i_4 + 1] [i_4 + 1])))) - (((((/* implicit */_Bool) arr_3 [i_4 - 1])) ? (2074981775U) : (2219985521U)))));
        var_22 |= (!(((/* implicit */_Bool) max((arr_10 [i_4] [(signed char)20]), (arr_10 [i_4] [(signed char)2])))));
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        arr_21 [(_Bool)0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [4U])) >> (((((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (unsigned char)120)))) - (32)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (5812940832645176532LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))))))));
        arr_22 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)135)) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((var_11) << (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (3292090204U) : (128968754U))) != (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_5])))))))))));
        arr_23 [i_5] = ((/* implicit */unsigned long long int) 2074981762U);
        var_23 -= ((/* implicit */signed char) (unsigned char)120);
        arr_24 [i_5] [i_5] = ((_Bool) (+(((/* implicit */int) (signed char)-80))));
    }
    var_24 = max((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), (min((max((var_8), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) var_9)))));
    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) 2219985523U))));
}
