/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223582
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -3491136484580802071LL))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) max((arr_3 [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) 3491136484580802095LL)))))));
                var_11 = max((((/* implicit */unsigned int) (+(((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_3 [i_0]))))))), ((-(((unsigned int) 3491136484580802070LL)))));
                arr_5 [i_0] [i_0] [i_0] = (-((~(arr_0 [i_0] [i_0]))));
                arr_6 [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) -3491136484580802071LL));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] = min((((min((((/* implicit */unsigned int) (unsigned short)16)), (arr_10 [i_3]))) >> (((59547235U) - (59547229U))))), (((/* implicit */unsigned int) arr_16 [i_2] [i_3] [(signed char)5])));
                        var_12 = ((/* implicit */signed char) arr_10 [i_2]);
                        arr_18 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((993101013), (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_13 = ((/* implicit */signed char) (~(arr_10 [i_2])));
                        var_14 = ((/* implicit */short) 8323072);
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        arr_21 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 59547209U)) ? (4503599626846208ULL) : (((/* implicit */unsigned long long int) arr_9 [i_2] [i_3]))));
                        arr_22 [i_2] [i_2] [i_2] [i_2] [17] [i_6] = ((/* implicit */short) ((arr_11 [i_4] [i_2]) * (4172586033U)));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (+(arr_15 [i_2] [i_3] [i_4] [i_6]))))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        var_16 = ((/* implicit */_Bool) arr_16 [i_7] [i_3] [6U]);
                        arr_25 [(unsigned short)6] [(unsigned short)6] [(unsigned short)11] [i_7] [7U] [7U] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_19 [i_2] [i_3] [i_2] [i_7]))))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_12 [i_2] [i_4] [i_3])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_2] [i_2] [i_4] [i_4] [i_7] [i_7])) >> (((((/* implicit */int) arr_24 [i_2] [i_3] [i_3] [i_3] [i_4] [i_7])) - (825)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 4; i_8 < 18; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */int) (~(arr_8 [i_3])));
                        var_20 = (~(511U));
                    }
                    var_21 = ((/* implicit */signed char) (+(3491136484580802079LL)));
                    /* LoopSeq 4 */
                    for (unsigned int i_9 = 2; i_9 < 17; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */int) (((-(188740932U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_9 [i_9 - 2] [i_9]))))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (arr_12 [i_2] [i_2] [i_4])));
                        arr_31 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2]))));
                    }
                    for (int i_10 = 4; i_10 < 18; i_10 += 3) 
                    {
                        arr_34 [i_10] [i_10] [i_10] = ((/* implicit */short) min(((((~(arr_12 [i_2] [i_2] [i_10]))) + (var_5))), (((unsigned int) ((signed char) -8751868511334340187LL)))));
                        var_24 = ((((/* implicit */_Bool) (signed char)-30)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_10 - 2] [i_10] [i_10 - 1] [i_10 - 2])))))));
                        arr_35 [i_10] [i_4] [3LL] [i_2] = ((/* implicit */unsigned int) arr_26 [(short)17] [i_3] [i_4] [i_4]);
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        arr_38 [i_2] [i_2] [i_2] |= arr_8 [i_11];
                        arr_39 [i_4] [i_4] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)5355)) && (((/* implicit */_Bool) 4294967292U))));
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            var_25 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -3491136484580802071LL))));
                            var_26 ^= ((/* implicit */signed char) (~(((((/* implicit */_Bool) -2010611495)) ? (2010611494) : (((/* implicit */int) (unsigned short)58893))))));
                        }
                        for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 1) 
                        {
                            arr_46 [i_11] [i_11] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2]))));
                            var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)30)) && (((/* implicit */_Bool) arr_43 [i_2] [i_2] [i_4] [i_11] [i_13] [i_13 - 1] [i_11]))));
                        }
                        for (signed char i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            arr_49 [i_2] = ((/* implicit */unsigned int) (~(arr_13 [i_3] [i_4] [i_3])));
                            var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-31))));
                        }
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_2] [i_3] [i_11])) || (((/* implicit */_Bool) 452766735U))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        arr_54 [i_2] [i_2] [i_4] [i_4] [4U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 2853124208U))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_2] [i_2])) ? (var_2) : (1610612736U)))) ? (((/* implicit */int) max(((signed char)-41), (((/* implicit */signed char) var_3))))) : (arr_7 [i_15]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -3491136484580802071LL)) == (9512292207062065821ULL))))));
                        arr_55 [i_2] [i_3] [15] [i_15] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -1301580023720240604LL)) ? (arr_28 [i_2] [i_3] [i_2] [i_4] [i_15]) : (2858058552U))), (arr_28 [i_2] [i_3] [i_3] [i_4] [i_15])))) ? ((+(0LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_8))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(31U)))))) ? (1774815422U) : ((+(452766735U)))));
                    }
                }
            } 
        } 
    } 
    var_31 *= (+((((!(var_8))) ? (4294967295U) : (var_1))));
}
