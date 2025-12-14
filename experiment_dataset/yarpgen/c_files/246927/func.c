/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246927
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
    for (signed char i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -3294360050397356642LL)) ? (max((((((/* implicit */_Bool) -2LL)) ? (2234207627640832ULL) : (((/* implicit */unsigned long long int) -99494595)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_2] [i_1] [i_4] [i_0] = ((/* implicit */unsigned int) arr_9 [i_2] [3U] [i_2] [i_3] [3U]);
                                var_13 = ((/* implicit */unsigned long long int) ((arr_2 [i_0 - 4] [i_2 + 1]) ? ((+(((((/* implicit */int) var_5)) - (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2])))))) : (((/* implicit */int) arr_8 [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_24 [i_1] = ((((/* implicit */_Bool) min((arr_20 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0]), (((/* implicit */unsigned long long int) ((arr_22 [i_0] [i_0] [i_5] [i_5] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)79))) : (arr_3 [i_6]))))))) ? (((/* implicit */unsigned long long int) ((min((var_11), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_6])))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3969634028U)) ? (((/* implicit */int) arr_21 [i_0] [(short)9] [i_5] [(short)9] [i_0] [i_0] [i_7])) : (var_9))))))) : (min((((/* implicit */unsigned long long int) ((var_9) | (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_5 [i_6] [i_6])) ? (18444509866081910783ULL) : (((/* implicit */unsigned long long int) -1340073394)))))));
                                arr_25 [i_1] [i_1] [i_6] [i_1] [i_1] [i_1] = ((((/* implicit */int) ((signed char) arr_12 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) & ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 + 1])))));
                            }
                        } 
                    } 
                } 
                var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [(_Bool)1]))) > (2U))))) : (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_0 - 4] [i_1] [i_1] [i_1] [i_1]))))), (var_7)))));
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 17; i_8 += 4) 
                {
                    for (short i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((min((((/* implicit */long long int) arr_22 [i_9 + 1] [i_0 + 2] [i_8] [i_8 - 3] [i_8])), (var_10))), (((/* implicit */long long int) (~((-(-1)))))))))));
                            var_16 = ((/* implicit */signed char) ((((((/* implicit */int) var_1)) | (((/* implicit */int) min((arr_2 [i_0] [i_1]), (var_2)))))) | (((((/* implicit */_Bool) 4088U)) ? (((int) var_0)) : (((/* implicit */int) arr_17 [i_8 + 2] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(var_10)))) ? (21U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_12)))))))));
    var_18 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) 2044727861)) : (var_6)))) ? (((((/* implicit */_Bool) var_10)) ? (var_10) : (-9223372036854775791LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5))))))), (((/* implicit */long long int) ((_Bool) var_5)))));
}
