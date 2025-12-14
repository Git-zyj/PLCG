/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210810
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
    var_16 = ((/* implicit */unsigned char) ((8257536U) & (8257543U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_1 [i_0 - 1])) & (((/* implicit */int) arr_1 [i_0])))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_0 + 1] [i_0] [i_0] [i_2 - 1] = ((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0] [i_2] [i_2 - 3]);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) 805306368U);
                        var_18 = ((/* implicit */unsigned short) (((-(arr_10 [i_1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38311)))));
                        arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_0] = ((/* implicit */short) arr_2 [i_0]);
                        arr_13 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_15))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            arr_16 [i_0] [0U] [i_0] [i_0 + 1] [i_0] [i_0] [3U] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)64))));
                            var_19 = ((/* implicit */unsigned int) (~(var_1)));
                        }
                        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_13))));
                            arr_21 [4] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 4290772992LL)) ? (((/* implicit */int) (short)19695)) : (((/* implicit */int) var_3))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (((~(arr_17 [i_5] [4U] [(short)2] [i_3 - 1] [i_2 - 3] [4U] [(short)2]))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2123252889274464873LL)) && (((/* implicit */_Bool) var_9)))))))))));
                        }
                    }
                    var_22 ^= ((/* implicit */unsigned int) arr_4 [(signed char)2]);
                    var_23 = ((/* implicit */unsigned int) (-((+(var_9)))));
                    arr_22 [i_0] = ((/* implicit */unsigned int) var_0);
                }
            } 
        } 
        arr_23 [8LL] [i_0] = ((/* implicit */unsigned char) var_6);
        arr_24 [(_Bool)1] &= arr_2 [(short)10];
    }
    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (max((((/* implicit */unsigned long long int) -7043550699794544806LL)), (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), ((_Bool)1))))))) == (min((max((var_14), (((/* implicit */unsigned long long int) (short)2040)))), (((/* implicit */unsigned long long int) 208668491))))));
    var_25 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) != (var_11)))), (((unsigned long long int) ((((/* implicit */unsigned long long int) var_11)) & (var_8))))));
    var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(536870911)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)13136), (((/* implicit */short) var_0)))))) : (((564101106U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245)))))))) ? (((min((4108221647U), (((/* implicit */unsigned int) var_15)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29395)) ? (((/* implicit */int) (unsigned char)205)) : (536870914)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
}
