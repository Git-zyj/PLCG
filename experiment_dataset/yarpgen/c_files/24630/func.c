/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24630
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
    var_15 += ((/* implicit */unsigned char) ((_Bool) var_6));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) + (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3025)))))));
    }
    var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (_Bool)1)))))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) var_11);
                    arr_10 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_1] [i_2] [i_3]))))), (((unsigned long long int) arr_9 [i_1] [i_2] [i_3]))));
                    arr_11 [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) arr_5 [i_1] [i_2])))));
                    arr_12 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((((arr_4 [(short)17]) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))))) + (min((((/* implicit */long long int) arr_2 [i_1] [i_2])), (var_7))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */short) arr_1 [i_2] [i_3]);
                                arr_18 [i_1] [i_2] [i_3] [i_1] &= min((var_5), (((/* implicit */short) var_9)));
                                arr_19 [i_1] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((long long int) var_13))))) | (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1] [i_2]))))), (((unsigned long long int) arr_0 [i_2]))))));
                                arr_20 [i_3] [i_3] [i_3] [i_2] [16ULL] [i_2] = var_6;
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((var_11), (((/* implicit */unsigned long long int) ((arr_14 [i_1]) ? (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_16 [i_1] [i_1] [i_3] [i_4] [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9)))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)240))))) << (((((/* implicit */int) var_0)) - (19)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-32)) <= (((/* implicit */int) var_14)))))) % (((((/* implicit */_Bool) 13080762543782555718ULL)) ? (9006924376834048ULL) : (((/* implicit */unsigned long long int) 456064231U)))))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65517))))) % (var_2)))));
}
