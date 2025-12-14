/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212181
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_5)))) : (((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (var_12)))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : ((+(((/* implicit */int) var_4))))))));
    var_17 = ((/* implicit */unsigned long long int) max((max((min((var_7), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) max((var_11), (var_4)))))), (((/* implicit */long long int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */int) var_4);
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned char) (short)0));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */int) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) 24LL)) : (arr_8 [(signed char)10])))));
                    arr_10 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2055291657)) ? (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) arr_0 [i_0 - 4] [i_0 - 4]))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 6251903638967126572ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24215))) : (36028797018963967ULL)))));
                    arr_12 [2LL] [2LL] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 702766980129856058LL)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])) : (8668730249457709985ULL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_1] [i_1]))));
                }
            } 
        } 
        arr_13 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) var_15);
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_18 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */unsigned long long int) arr_15 [(unsigned char)15] [i_3])) & (9778013824251841637ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(short)13]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) (((_Bool)1) ? (arr_15 [(unsigned char)13] [(unsigned char)13]) : (arr_15 [(short)4] [(short)4])))) : (arr_16 [i_3]))))));
        arr_19 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((702766980129856058LL), (((/* implicit */long long int) arr_14 [21LL]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3]))) : (arr_16 [i_3])))) ? (arr_15 [i_3] [i_3]) : ((+(max((((/* implicit */int) arr_17 [i_3])), (var_1))))));
    }
}
