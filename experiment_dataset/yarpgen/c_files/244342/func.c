/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244342
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
    var_16 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_13))))), ((~(((/* implicit */int) var_13))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -8785100872634649772LL)) ? (arr_1 [i_0] [i_0]) : (((arr_1 [i_0 - 3] [i_0 - 3]) >> (((((/* implicit */int) arr_0 [i_0])) + (131)))))));
        arr_3 [i_0 + 3] [i_0] &= ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 3; i_1 < 24; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (193021468344973096ULL) : (10802994345316485752ULL)))) || (((/* implicit */_Bool) ((unsigned int) arr_5 [i_1])))))) > (arr_4 [(signed char)19]))))));
        var_18 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-67)) ? (arr_5 [i_1]) : (arr_4 [i_1])))))) + (max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) : (7643749728393065885ULL)))))));
        arr_8 [i_1] = arr_7 [i_1 - 2];
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_19 = ((/* implicit */int) arr_11 [i_1] [(signed char)1]);
            var_20 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_6 [i_1]))))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6524813697956333948LL))))) : (((/* implicit */int) ((((/* implicit */int) (short)28999)) != (((/* implicit */int) (short)18489)))))));
        }
    }
    var_22 = ((/* implicit */unsigned short) ((signed char) var_4));
    var_23 = ((/* implicit */long long int) max((var_23), (var_1)));
}
