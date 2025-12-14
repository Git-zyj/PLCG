/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220498
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
    var_20 = ((/* implicit */_Bool) 1804337023231410793LL);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))) ? ((~(var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) var_7)) / (1804337023231410793LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */signed char) var_4)))))) < (((((/* implicit */_Bool) (unsigned char)253)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))))) : ((-(arr_5 [i_0 - 4])))));
            var_23 |= ((/* implicit */unsigned char) var_0);
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)2)))), (min((((/* implicit */unsigned long long int) var_11)), (4005488438233151755ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))));
        }
        for (unsigned char i_2 = 3; i_2 < 19; i_2 += 2) 
        {
            arr_8 [i_2] [i_2] = ((/* implicit */_Bool) 1804337023231410793LL);
            var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_12)) : (((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0 + 1])) - (36)))))));
        }
    }
    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_16) > (((/* implicit */long long int) arr_7 [2ULL]))))) >> (((((/* implicit */int) var_3)) + (110)))));
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_3])), (1804337023231410776LL)))) ? (max((arr_7 [(signed char)6]), (((/* implicit */int) arr_1 [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3])))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 8; i_4 += 2) 
    {
        for (long long int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            {
                arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) (-(((unsigned long long int) arr_9 [i_4 + 3]))));
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_6)) && (var_4))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (459265709U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((0U) - (var_17))), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) var_19))));
}
