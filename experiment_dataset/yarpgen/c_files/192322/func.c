/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192322
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_10 ^= ((/* implicit */long long int) arr_0 [i_0]);
                        var_11 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) && (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_2] [(_Bool)1] [i_0]))) >= (var_0)))));
                        arr_12 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */short) arr_4 [i_2 - 1]);
                        var_12 = ((/* implicit */unsigned short) (signed char)-19);
                        var_13 = ((arr_9 [i_2 - 1] [i_1] [i_2 - 1] [i_1 - 2] [i_1]) ? (((/* implicit */int) ((short) arr_9 [i_0] [22] [i_1] [i_0] [i_0]))) : ((~(((/* implicit */int) arr_0 [i_1])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (arr_13 [i_2] [i_2 - 1] [i_2 - 3] [i_0] [i_0])));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            var_14 += ((((/* implicit */_Bool) arr_13 [i_5] [i_2 - 1] [i_1 - 1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_13 [i_2 - 3] [i_2 - 1] [i_1 - 1] [i_1] [i_0])));
                            var_15 = (~(arr_3 [i_0]));
                            arr_21 [i_0] [i_0] [(unsigned short)21] [(unsigned char)17] [i_0] [i_0] = ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_3 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 - 3]))));
                            var_16 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_0] [i_2] [i_2] [i_2 + 1])) >> (((((/* implicit */int) (signed char)-59)) + (66)))));
                        }
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                        var_17 = ((/* implicit */unsigned short) arr_10 [i_2 - 1] [(unsigned short)14] [i_1 + 1] [i_1 + 1]);
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_26 [i_0] [10] [1LL] [i_6] = arr_7 [i_0] [i_0] [i_2 + 1] [i_6];
                        var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)55)) >> (((((/* implicit */int) arr_0 [i_6 + 1])) + (152)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                arr_31 [i_8] [i_7] [i_2 + 1] [i_1] [i_8] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_29 [i_8] [i_1] [i_2 - 3] [i_7] [i_8])) * ((+(((/* implicit */int) (signed char)124)))))));
                                var_19 = ((3169786856U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2080760219038180867LL))))) : (((/* implicit */int) ((var_5) == (var_3))))))));
    var_21 = ((/* implicit */unsigned char) max((1125180440U), (((/* implicit */unsigned int) var_1))));
}
