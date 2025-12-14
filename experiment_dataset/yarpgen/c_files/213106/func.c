/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213106
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((313662379) <= (((/* implicit */int) (signed char)127))));
            /* LoopSeq 2 */
            for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                var_13 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2 - 1] [i_0 + 1])) << (((/* implicit */int) var_11))));
                var_14 = (~(arr_0 [i_0 + 1]));
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((var_2) || ((_Bool)0)))) : (((/* implicit */int) (unsigned short)26728))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_2 - 1])) / (((/* implicit */int) arr_9 [i_1] [i_3]))));
                    arr_13 [i_0] [i_0] [8LL] [6LL] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_12 [i_0] [i_1] [i_2 - 1] [(_Bool)1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                }
                /* LoopSeq 1 */
                for (signed char i_4 = 2; i_4 < 12; i_4 += 1) 
                {
                    arr_17 [i_2 + 1] [i_2 + 2] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) var_1))));
                    var_17 = (((_Bool)0) || (((((/* implicit */int) var_1)) <= (var_5))));
                    var_18 -= ((/* implicit */unsigned short) var_9);
                }
                arr_18 [i_1] [i_1] [(_Bool)1] [i_0] |= arr_11 [i_2 + 2] [(_Bool)1] [i_2] [i_0 + 1] [i_0] [i_1];
            }
            for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((arr_6 [i_0 + 1] [i_5] [i_0 + 1]) - (arr_6 [i_0 + 1] [i_0 + 1] [i_1]))))));
                /* LoopSeq 3 */
                for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_28 [i_0 + 1] [i_1] [i_5] [i_7] = ((((/* implicit */int) (unsigned short)38807)) > (((/* implicit */int) ((((/* implicit */int) arr_24 [i_0])) >= (((/* implicit */int) (unsigned short)26729))))));
                        arr_29 [i_1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [6LL] [i_0 + 1] [i_0 + 1] [i_0 + 1])) << (((/* implicit */int) arr_10 [(signed char)4] [i_0 + 1] [i_0 + 1] [i_0]))));
                    }
                    var_20 ^= ((/* implicit */_Bool) (+(2819138809855061025LL)));
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_21 -= ((/* implicit */long long int) arr_15 [i_0] [i_1] [i_5] [i_6] [i_8]);
                        arr_33 [i_0] [i_1] [i_1] [i_1] [i_6] [4LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-2819138809855061017LL)));
                        var_22 = ((/* implicit */_Bool) var_1);
                        var_23 += ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                    }
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) % (arr_26 [i_0 + 1] [i_0] [i_5] [i_0 + 1])));
                        var_25 = (unsigned short)38808;
                        arr_36 [i_9] [i_1] [i_1] [10] = (unsigned short)65519;
                    }
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_26 *= ((/* implicit */signed char) arr_31 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]);
                    arr_39 [i_5] [0] [i_5] [i_5] [i_1] [i_5] &= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_5] [i_1] [i_5] [i_10] [i_0] [(_Bool)1] [i_1]))))) ? (((var_10) - (-1329457078558826182LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0 + 1] [i_5]))));
                }
                for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    arr_43 [i_0] [i_1] [(_Bool)1] [11] [i_11] [i_1] = ((/* implicit */long long int) var_6);
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned short) arr_12 [i_12] [i_11] [i_5] [i_0] [i_0]);
                        var_28 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_12))));
                        var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) var_0))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)3)) ? (arr_32 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    }
                }
                var_31 = (((_Bool)0) || (((/* implicit */_Bool) arr_14 [i_0 + 1] [i_1])));
            }
            arr_46 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
            var_32 += ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (arr_27 [i_0] [i_0] [i_0]));
        }
        for (int i_13 = 3; i_13 < 10; i_13 += 2) 
        {
            arr_50 [i_13] [i_13] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_37 [i_0 + 1] [i_0] [i_13 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [(_Bool)1] [i_13] [i_13 - 2] [i_13])))))))));
            var_33 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((int) min((var_7), (((/* implicit */unsigned short) arr_5 [i_0] [i_13])))))) : (7704245767342266754LL)));
        }
        var_34 = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [(_Bool)1] [i_0 + 1] [i_0] [(_Bool)1] [(_Bool)1]))))), (((((/* implicit */_Bool) arr_35 [i_0 + 1] [(unsigned short)10] [i_0 + 1] [i_0] [(_Bool)1])) ? (((/* implicit */int) var_8)) : (var_5))));
        /* LoopSeq 1 */
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            arr_53 [i_0] [i_14 - 1] [i_14] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_26 [i_0] [i_14] [(unsigned short)0] [i_0 + 1])) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) (unsigned short)7936)))))), (min((((((/* implicit */int) var_12)) - (((/* implicit */int) var_0)))), ((-(((/* implicit */int) arr_27 [i_0] [i_0 + 1] [i_0]))))))));
            arr_54 [i_0] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)-50), (((/* implicit */signed char) (_Bool)1))))) ? (min((((/* implicit */int) var_0)), (((((/* implicit */int) var_6)) % (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))))), (var_4))))));
            var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)0) ? (arr_47 [12]) : (-3180541234275433725LL))))));
            var_36 = ((/* implicit */_Bool) (unsigned short)52595);
            arr_55 [i_14 - 1] [i_0] [i_14 - 1] = ((/* implicit */signed char) (_Bool)1);
        }
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_59 [i_15] = ((/* implicit */_Bool) min((max((((((/* implicit */int) (unsigned short)38788)) * (((/* implicit */int) (signed char)50)))), (((/* implicit */int) (signed char)49)))), (((/* implicit */int) (_Bool)0))));
        arr_60 [i_15] = (+(arr_58 [i_15]));
    }
    for (long long int i_16 = 1; i_16 < 11; i_16 += 1) 
    {
        var_37 = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52600))) / (arr_2 [i_16]))), (((/* implicit */long long int) (((~(((/* implicit */int) arr_51 [i_16] [i_16] [i_16 + 1])))) ^ ((+(((/* implicit */int) var_3)))))))));
        var_38 = ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) var_12)), (var_4)))) <= (((((/* implicit */int) ((((/* implicit */long long int) var_5)) > (281474976710652LL)))) << (((/* implicit */int) (_Bool)1))))));
        var_39 = ((/* implicit */signed char) ((((/* implicit */int) min((var_3), (arr_14 [i_16] [i_16 - 1])))) > (((/* implicit */int) var_4))));
    }
    var_40 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (_Bool)1))))));
    var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */long long int) var_5)) & (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) -2072111242)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))))));
}
