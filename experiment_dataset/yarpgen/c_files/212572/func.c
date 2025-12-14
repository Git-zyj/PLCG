/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212572
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_1] = (~(((/* implicit */int) min((((/* implicit */short) arr_9 [i_1] [i_2 - 2] [i_3 + 3] [i_1 - 3])), (arr_8 [(_Bool)1] [i_0] [i_1 - 3] [i_2 - 2])))));
                        arr_13 [i_0] [4U] [5U] [i_1] = ((/* implicit */_Bool) ((long long int) arr_1 [i_0]));
                        arr_14 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [i_3 + 3])))) ? (((((/* implicit */_Bool) 1031796890)) ? (arr_0 [i_3 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : ((((_Bool)0) ? (0ULL) : (0ULL)))));
                    }
                    var_17 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (254)))) ? (((arr_2 [i_1] [i_2]) ? (((/* implicit */int) var_12)) : (arr_11 [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_1] [i_0]))) : (((var_14) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2])) : (arr_11 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0])))))) >= (arr_0 [i_1 + 1])));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (4294967282U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15))));
}
