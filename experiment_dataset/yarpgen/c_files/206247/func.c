/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206247
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
    var_12 += ((/* implicit */unsigned char) min((max((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) var_1)), (-179724217742359218LL))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_8)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (((_Bool)1) ? (arr_0 [(short)14] [i_0]) : (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_0 [i_0] [i_0])) - (arr_1 [i_0])));
    }
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1]);
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (arr_3 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-528), ((short)-8))))) : (max((((/* implicit */unsigned int) arr_5 [i_1] [i_1])), (0U)))))) ? (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)534)))), (max((((/* implicit */int) arr_4 [i_1] [i_1])), (arr_5 [i_1] [i_1])))))) : (3098323182035044203LL)));
        var_14 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)32767)), (-436821052170954098LL)));
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_1])) != (max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_16 = ((((((/* implicit */_Bool) 3299414648U)) ? (min((-7205377623203553025LL), (((/* implicit */long long int) 3211249079U)))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)55660)) : (((/* implicit */int) (_Bool)1))))))) < (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9876)) ? (((/* implicit */int) (short)16)) : (((/* implicit */int) arr_4 [i_2] [i_2]))))) | (((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_1 [i_2]) : (arr_9 [i_2]))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            arr_13 [i_3] [i_3] [i_3] = -1934833868575080636LL;
            var_17 = ((/* implicit */_Bool) max(((((_Bool)1) ? (arr_3 [i_3] [i_3]) : (arr_5 [i_3] [i_3 - 1]))), (min((arr_3 [i_3] [i_3]), (arr_5 [i_3] [i_3 + 2])))));
        }
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((arr_14 [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1831682685107517190LL)) ? (arr_15 [i_4]) : (((/* implicit */int) (short)0))))))))));
        arr_16 [i_4] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) -1462871949)) : ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << ((((((((-2147483647 - 1)) - (-2147483585))) + (105))) - (42)))))));
    }
    var_19 ^= ((/* implicit */short) max((((/* implicit */long long int) var_1)), (var_10)));
}
