/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49532
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 126100789566373888LL)) ? (((/* implicit */unsigned long long int) 43886608U)) : (arr_0 [i_0]))) % (((/* implicit */unsigned long long int) (~(arr_1 [i_0] [i_0]))))));
        var_10 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [14LL])), (arr_0 [10LL])))) ? (((/* implicit */int) (short)-11465)) : (var_4)))) ? (-762708719) : (((/* implicit */int) (short)11458))));
    }
    for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        var_11 = ((/* implicit */signed char) (-(((/* implicit */int) arr_5 [i_1 - 1]))));
        arr_6 [i_1] &= ((/* implicit */int) arr_5 [i_1]);
        arr_7 [i_1 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (35184372088831LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1])))))) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) (short)28774)));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28774)) ? (((/* implicit */int) (short)28774)) : (((/* implicit */int) (short)11464))));
        /* LoopSeq 1 */
        for (signed char i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            var_12 = ((/* implicit */signed char) 114676139);
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [i_3 - 1]) - (((/* implicit */int) ((unsigned short) (_Bool)1)))))) ? (((/* implicit */int) ((signed char) arr_12 [i_3 + 2] [i_3]))) : ((+(((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 2]))))));
            arr_14 [i_3 - 2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(arr_9 [i_3 + 2])))), (((unsigned long long int) arr_9 [i_3 - 1]))));
            arr_15 [i_3] = var_1;
            arr_16 [i_2] [i_3] = ((/* implicit */unsigned long long int) 2648196321U);
        }
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((arr_18 [i_4]) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) arr_18 [i_4]))));
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 2) 
            {
                {
                    var_14 ^= ((/* implicit */int) (short)-28775);
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [(short)16] [i_5] [14ULL]))) : (arr_23 [i_4])))) ? (((int) -1LL)) : (((((/* implicit */_Bool) 114676168)) ? (arr_21 [i_4] [i_4]) : (((/* implicit */int) (_Bool)0)))))))));
                }
            } 
        } 
        arr_27 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [(short)2])) ? (arr_13 [i_4] [(signed char)21] [1LL]) : (arr_13 [i_4] [i_4] [i_4])));
    }
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) -21LL)))))))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((var_3) - (13335411998825049366ULL)))))) ? (((long long int) (_Bool)0)) : (((long long int) (signed char)45))));
}
