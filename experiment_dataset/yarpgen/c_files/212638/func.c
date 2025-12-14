/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212638
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
    var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32738)) ? (-1LL) : (-1LL)))) || (((((/* implicit */_Bool) var_2)) || ((_Bool)1))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (short)2048)), (4838977322985312671LL))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((0), (((/* implicit */int) (short)-10653)))), (((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) 3U)) : (0LL)));
    var_14 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((int) (-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_11) : (var_7))))));
        var_15 -= ((/* implicit */unsigned long long int) (short)32767);
        arr_3 [i_0 - 3] |= ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)30350)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)32755))))))), (((arr_0 [i_0 - 4] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 4]))) : ((~(var_6)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
        var_17 = ((/* implicit */long long int) min((var_17), (arr_4 [i_1])));
        arr_6 [i_1] [4ULL] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((unsigned short) (short)-30350))), ((-(4294967295U))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */long long int) arr_10 [i_2]);
        arr_12 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3U))));
        arr_13 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_2] [i_2])) << (((/* implicit */int) (_Bool)0))));
        arr_14 [i_2] [i_2] = ((/* implicit */int) ((arr_9 [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (unsigned short i_5 = 4; i_5 < 24; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 23; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 4) 
                        {
                            {
                                arr_28 [i_3] [i_3] [i_5] [i_6] = ((/* implicit */int) ((unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)20)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_29 [i_7] [i_7] [i_7] [i_3] [i_7] [i_7] = ((/* implicit */int) (+(min((((((/* implicit */_Bool) -1LL)) ? (var_1) : (var_5))), (((/* implicit */long long int) 4095))))));
                                arr_30 [i_3] [i_3] [i_3] = ((/* implicit */int) (short)-4096);
                            }
                        } 
                    } 
                    arr_31 [i_3] [i_4] [6ULL] |= ((/* implicit */int) ((((/* implicit */_Bool) 0)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (((((/* implicit */_Bool) 4584940106163588487ULL)) ? (165861560065802675LL) : (-9223372036854775797LL))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_19 [i_4 - 1] [i_4 - 1] [8LL])))))));
                    arr_32 [i_3] [i_3] [i_4] [i_3] = ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (max((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) var_4)) ? (arr_26 [18U] [i_4] [i_3] [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3]))))))) : (min((((/* implicit */long long int) 1073741824)), (arr_24 [i_4 - 1] [i_5 - 1] [i_3] [i_5]))));
                }
            } 
        } 
        var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */int) (unsigned short)35870)) < (((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 63LL)) ? (((/* implicit */long long int) 0U)) : (((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_27 [(signed char)16])))))) * (((0LL) << (((/* implicit */int) (_Bool)1)))))))))));
    }
}
