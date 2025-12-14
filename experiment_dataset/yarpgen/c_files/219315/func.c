/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219315
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)65511);
        var_12 *= ((/* implicit */unsigned int) max(((((+(((/* implicit */int) arr_0 [i_0])))) * (((/* implicit */int) arr_0 [i_0 - 4])))), (((((/* implicit */_Bool) ((16777200) | (((/* implicit */int) (short)23229))))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 4]))))));
        var_13 = ((((_Bool) ((((/* implicit */_Bool) (short)-7380)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 2]))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_0 [i_0 - 2]))))) : ((((((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) var_1))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((_Bool) arr_1 [i_0 - 4]))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_3 = 3; i_3 < 19; i_3 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */short) (~((-9223372036854775807LL - 1LL))));
                    arr_13 [i_2 + 2] [i_2 + 2] = ((/* implicit */int) max((((/* implicit */long long int) ((signed char) (_Bool)0))), (var_11)));
                }
                /* vectorizable */
                for (signed char i_4 = 3; i_4 < 19; i_4 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_1] [i_2 + 1] [i_2 + 1] [i_4 - 2])) ? (((/* implicit */int) arr_11 [i_1] [i_2 + 1] [i_2 + 1] [i_4 - 2])) : (((/* implicit */int) arr_17 [i_1] [i_4 - 2] [i_2 + 1] [i_4 - 2]))));
                    var_16 = 9223372036854775807LL;
                }
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_6 = 3; i_6 < 19; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_17 += ((/* implicit */signed char) (((_Bool)0) || (((/* implicit */_Bool) 5124057678406541943LL))));
                            var_18 = ((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_7]);
                            arr_25 [8LL] [8LL] [8LL] [i_6 - 2] [i_6] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (2553508135U))), (((/* implicit */unsigned int) arr_14 [i_1]))));
                        }
                        arr_26 [i_1] [i_1] [i_1] [i_6 - 1] [i_2 + 2] [i_1] = ((/* implicit */unsigned int) (unsigned short)58020);
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_2 - 1] [i_2 - 1] [i_5] [i_1] [6LL]))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((var_3) <= (((/* implicit */int) arr_6 [i_1])))))));
                        arr_30 [i_8] [i_8] = ((/* implicit */signed char) var_3);
                    }
                    var_21 = ((/* implicit */_Bool) (+((+((~(9223372036854775807LL)))))));
                    var_22 = ((/* implicit */signed char) var_6);
                }
                /* LoopNest 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            {
                                var_23 = max((((/* implicit */long long int) (((((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) ((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned short)13772)) : (((var_9) >> (((((/* implicit */int) (short)-14167)) + (14196)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) 4294967284U)) : (arr_9 [i_9])))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_1]))) : (5850365264085256848LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_35 [i_1] [i_1] [i_1] [i_9]), (arr_17 [i_1] [i_2 + 1] [i_9] [i_10]))))))));
                                var_24 += ((/* implicit */unsigned short) ((((arr_32 [i_10] [i_11 + 1]) > ((+((-9223372036854775807LL - 1LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [6] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_31 [i_1])) ? (arr_15 [i_10] [i_10] [i_9] [i_10]) : (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) arr_20 [i_1] [i_2 + 2] [i_9] [i_2 - 1] [i_2 + 2])))))));
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_9])), (max((((/* implicit */unsigned int) arr_5 [i_1] [i_1])), (var_6)))))) ? (((/* implicit */int) min(((unsigned short)58024), ((unsigned short)20288)))) : (((/* implicit */int) ((signed char) (~(-9223372036854775795LL)))))));
                                var_26 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)127)), (var_4)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_1] [11U])), (arr_22 [i_1] [i_2 + 2] [i_9] [i_9] [i_11 + 1])))))))));
                                var_27 = ((/* implicit */_Bool) arr_38 [i_9]);
                            }
                        } 
                    } 
                } 
                var_28 *= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_2 + 2] [i_2 - 1]) ? (var_3) : (((/* implicit */int) arr_3 [i_2 + 2] [i_2 - 1]))))) ? (((/* implicit */long long int) ((arr_3 [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-1))))) : (((((/* implicit */_Bool) (unsigned short)18182)) ? (var_11) : (var_11)))));
                var_29 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))) : (arr_18 [i_1] [i_1])))))));
                arr_39 [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_15 [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */long long int) arr_20 [i_1] [i_2] [i_1] [i_1] [i_1])) : (var_4))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_37 [i_1])) : (var_3)))))))));
            }
        } 
    } 
}
