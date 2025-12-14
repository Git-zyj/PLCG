/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40249
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
    var_20 = ((/* implicit */unsigned int) var_5);
    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 2155559899U)), (((unsigned long long int) 2139407397U))));
    var_22 = (unsigned char)32;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_1] [(unsigned char)12] [i_3] = (+(((/* implicit */int) (unsigned char)183)));
                        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) 912529162U))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_24 += ((/* implicit */int) (short)17896);
                        arr_12 [i_4] [i_2] [i_4] = (~(2155559887U));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (-3940477531047401684LL) : (((/* implicit */long long int) 4026531840U))))) ? (734232205) : (((/* implicit */int) (signed char)48)))))));
                        arr_17 [(signed char)17] [(unsigned short)13] [(unsigned short)13] [16ULL] = ((/* implicit */unsigned long long int) 485327100);
                    }
                    arr_18 [i_2] |= ((/* implicit */unsigned int) (-(((((((/* implicit */int) var_16)) + (2147483647))) << (((((var_13) + (77169360017096795LL))) - (12LL)))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)112))));
                    arr_21 [i_0] [i_1] [12LL] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (short)17896))));
                    var_27 = var_0;
                    arr_22 [i_0] [4LL] = ((/* implicit */short) (~(var_13)));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 3) 
                {
                    arr_27 [10ULL] = ((/* implicit */long long int) var_7);
                    arr_28 [i_0] [(unsigned char)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17916)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221))) : (0U)))) ? ((-(((/* implicit */int) (unsigned char)253)))) : (((((/* implicit */_Bool) (short)8659)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) var_6))))));
                    var_28 *= ((/* implicit */unsigned char) var_16);
                }
                for (long long int i_8 = 3; i_8 < 17; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) (short)-17896);
                                arr_35 [i_8] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((_Bool) (short)17896)) ? (((((/* implicit */_Bool) (unsigned char)3)) ? (10) : (((/* implicit */int) (unsigned char)255)))) : ((~(((/* implicit */int) (short)-17896)))))) : (((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)31)))));
                            }
                        } 
                    } 
                    arr_36 [i_0] [i_8] [(short)10] [6U] = ((/* implicit */long long int) (signed char)-119);
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_15)) - (((/* implicit */int) (signed char)-1)))), (((((/* implicit */_Bool) 1405382200)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)15))))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)35919)) >= (-734232205)))))));
                    arr_37 [i_0] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)28))))) << (((/* implicit */int) var_19))))) ? (((((/* implicit */_Bool) (unsigned short)29617)) ? (((/* implicit */int) var_18)) : (1405382195))) : ((+(((((/* implicit */_Bool) (unsigned short)23655)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) var_17))))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        for (short i_12 = 2; i_12 < 16; i_12 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */short) (-(4274744353U)));
                                arr_43 [i_0] [i_1] [i_1] [i_11] [i_8] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(var_11)))), (((var_4) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                            }
                        } 
                    } 
                }
                arr_44 [i_0] [i_1] [16U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)196))) + (-6522518046547486527LL)))));
            }
        } 
    } 
}
