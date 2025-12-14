/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30197
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_1 + 2] [i_1] = ((/* implicit */short) arr_5 [i_0 + 2] [i_1]);
                arr_7 [i_1] = ((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4647678087447735427LL))));
                var_11 = ((/* implicit */short) min((((((/* implicit */_Bool) var_9)) ? (var_4) : (arr_4 [i_1] [i_1 + 3]))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 4; i_2 < 14; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = (!((!(((/* implicit */_Bool) (signed char)110)))));
        arr_11 [i_2] [i_2 - 3] = var_6;
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        arr_16 [(_Bool)1] [i_3] = ((/* implicit */_Bool) max((((/* implicit */int) ((signed char) (_Bool)1))), ((~(((/* implicit */int) var_3))))));
        var_12 = ((/* implicit */_Bool) max((arr_8 [i_3 + 1]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_3 + 1])) > (((/* implicit */int) var_2)))))));
        arr_17 [i_3] = var_2;
        arr_18 [i_3] [i_3] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) (short)896)) : (((/* implicit */int) var_2))))) : (var_8)))));
        arr_19 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_3 + 1]))));
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 7; i_4 += 4) 
    {
        arr_24 [(unsigned short)0] = ((unsigned short) var_9);
        arr_25 [i_4 + 3] = ((/* implicit */_Bool) var_5);
    }
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 6306133987179668381LL))))))))));
    var_14 = ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((((/* implicit */long long int) (unsigned short)65535)), (var_9))))) ^ (min((((long long int) var_8)), (((/* implicit */long long int) var_1)))));
}
