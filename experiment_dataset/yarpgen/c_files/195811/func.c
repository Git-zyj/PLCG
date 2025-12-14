/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195811
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
    var_17 += var_16;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) (short)32767))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) arr_3 [i_1]);
            arr_6 [i_1] = ((/* implicit */int) ((2LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (0) : (((/* implicit */int) (short)-32759)))))));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                var_19 += ((/* implicit */short) (~((-(((/* implicit */int) arr_3 [(short)0]))))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_13 [i_1] [6LL] [i_1] [i_3] [(short)7] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32759)) ? (-8589522322407596368LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)54)))));
                    arr_14 [6LL] [i_1] [i_2] [6LL] [i_2] |= ((/* implicit */short) ((var_4) > (((((/* implicit */_Bool) var_6)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        var_20 |= ((/* implicit */short) max((137438953471LL), (((/* implicit */long long int) (!(arr_7 [i_0]))))));
                        arr_19 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_3] [i_4])) ? (arr_10 [i_0] [i_0] [i_2] [i_0] [i_4]) : (((/* implicit */int) (unsigned char)124)))), (min((arr_10 [i_0] [i_1] [i_2] [i_1] [i_4]), (((/* implicit */int) (unsigned char)4))))));
                    }
                }
                var_21 = ((/* implicit */_Bool) ((((_Bool) arr_9 [i_0] [i_1] [i_2])) ? (max((((/* implicit */int) var_12)), (var_3))) : (((/* implicit */int) min(((_Bool)0), (arr_9 [i_1] [i_1] [i_2]))))));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                arr_22 [(short)7] [i_1] [i_1] [(short)7] = ((/* implicit */short) ((((/* implicit */_Bool) 576456354256912384LL)) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_4 [(_Bool)1] [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_5] [i_1] [i_5]))) / (var_2)))));
                var_22 = ((/* implicit */int) max((var_22), ((~(-2147483642)))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        {
                            arr_29 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 524287U)) ? (((/* implicit */int) ((short) arr_21 [i_0] [i_5]))) : (-1912483957)));
                            arr_30 [i_0] [i_1] [(short)1] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32512))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_6] [i_0]))) : (((long long int) 1912483956))));
                            var_23 &= ((/* implicit */short) ((long long int) (_Bool)1));
                        }
                    } 
                } 
            }
            for (short i_8 = 4; i_8 < 10; i_8 += 2) 
            {
                var_24 = ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) -1912483949)), (13U)))))) ? (((/* implicit */long long int) ((int) (unsigned char)124))) : (max((((/* implicit */long long int) 1912483956)), (7363496141262845930LL))));
                arr_33 [i_0] [i_1] [i_8] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)0))))));
                arr_34 [i_0] [i_1] [i_8] [i_8] |= ((/* implicit */long long int) max((arr_16 [i_0] [i_0] [6LL] [i_8] [i_8 + 1]), (((/* implicit */short) ((((/* implicit */_Bool) (-(var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2112711705)) ? (var_5) : (((/* implicit */long long int) 4294967289U))))))))));
            }
        }
        var_25 = max(((short)-1), (((/* implicit */short) ((_Bool) arr_15 [i_0]))));
    }
    for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_11 = 1; i_11 < 13; i_11 += 1) 
            {
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) max(((short)32758), (((/* implicit */short) arr_35 [0LL]))))) ? (((((/* implicit */_Bool) arr_42 [i_9] [(_Bool)0] [i_11])) ? (-137438953472LL) : (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) 524287U))))))));
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8200815097536008991LL)) ? ((+(arr_39 [i_10] [i_10]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_9] [i_10])) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) var_1)))))))) ? (((/* implicit */int) ((-576456354256912384LL) != (arr_38 [i_11 - 1] [i_10 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_9])))))))))))));
            }
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                var_28 = ((/* implicit */int) -9223372036854775778LL);
                var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (short)(-32767 - 1))), (arr_41 [i_10 - 1] [i_10 - 1] [i_10 - 1])))) ? (max((((/* implicit */long long int) max((arr_43 [i_10] [12] [i_12] [i_10]), (((/* implicit */short) (unsigned char)202))))), ((((_Bool)0) ? (-5359859587186448137LL) : (((/* implicit */long long int) -181137092)))))) : (var_4)));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_3))));
                /* LoopNest 2 */
                for (long long int i_14 = 2; i_14 < 15; i_14 += 2) 
                {
                    for (long long int i_15 = 3; i_15 < 14; i_15 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */int) min((var_31), ((~(((/* implicit */int) arr_52 [(_Bool)1] [(_Bool)1] [i_15 - 1] [i_10 - 1] [i_14 - 1] [(_Bool)1]))))));
                            var_32 = ((/* implicit */short) 2889761078U);
                            var_33 = (!(((/* implicit */_Bool) arr_46 [i_9] [i_14 - 1] [i_9])));
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) arr_38 [i_10 - 1] [i_10 - 1]))));
                        }
                    } 
                } 
            }
            var_35 = ((/* implicit */short) (_Bool)1);
            var_36 = max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)6956))) > (var_2)))), ((-(var_0))));
        }
        for (long long int i_16 = 3; i_16 < 15; i_16 += 3) 
        {
            var_37 = ((_Bool) max(((~(var_7))), (((/* implicit */long long int) ((unsigned char) (short)32767)))));
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_4) + (9223372036854775807LL))) << (((181137091) - (181137091)))))) ? (((long long int) var_14)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (1874389620015205863LL)))))) ? (((/* implicit */int) ((_Bool) var_7))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-3116357) : (-181137065)))) ? (((/* implicit */int) (short)-32759)) : ((-(((/* implicit */int) (_Bool)1))))))));
            var_39 = max((((((/* implicit */_Bool) -181137065)) ? (((/* implicit */int) arr_54 [i_9] [i_9])) : (((/* implicit */int) arr_43 [i_9] [i_16 - 1] [i_16 + 1] [i_16 + 1])))), (((/* implicit */int) arr_45 [i_9] [i_16 - 3] [i_9])));
            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) arr_44 [i_9] [i_16 + 1]))));
            var_41 = ((/* implicit */long long int) (unsigned char)255);
        }
        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_42 [i_9] [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)16384))) : (-7876162048851276805LL))))))));
        var_43 = var_2;
        arr_57 [i_9] = ((/* implicit */long long int) var_8);
        var_44 = ((/* implicit */unsigned char) min((max((var_7), (-5359859587186448127LL))), (((/* implicit */long long int) (short)8191))));
    }
}
