/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224036
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
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)252)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_13))));
                                var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_4])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [0ULL] [i_0] [(signed char)21]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_10 [2LL] [i_2] [17ULL] [(unsigned char)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                }
                arr_14 [(unsigned char)6] [i_1] [i_0] &= ((/* implicit */unsigned long long int) ((int) -2314581239761937317LL));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) 18446744073709551615ULL))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (((((/* implicit */_Bool) 2419365197887187771ULL)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12352)))));
    var_20 = ((/* implicit */short) max((min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2202048459U)) ? (var_3) : (((/* implicit */int) (unsigned short)65525))))))), ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_3)) : (var_1)))))));
    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) | (((/* implicit */int) (unsigned char)127))));
}
