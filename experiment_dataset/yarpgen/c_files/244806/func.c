/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244806
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((1958418508) >> (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_2), (((/* implicit */short) var_6)))))) : (min((4081930860U), (var_14))))) : (((((((/* implicit */int) (short)-2219)) > (((/* implicit */int) (short)2218)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (1901117956U))) : (min((((/* implicit */unsigned int) (_Bool)1)), (var_5)))))));
    var_16 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */unsigned long long int) ((unsigned int) (short)-2219));
        var_17 = ((short) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (arr_0 [i_0 - 2] [i_0]) : (arr_0 [i_0 + 1] [i_0])));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2219)) ? (((((/* implicit */_Bool) (short)-2219)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2224))) : (((((/* implicit */_Bool) (unsigned short)8541)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2219))) : (-7127046436245971544LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20200))) : (arr_9 [i_1] [i_2] [i_2]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) (signed char)50)))))));
            var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2] [i_1]))));
        }
        for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            arr_13 [i_1] [20U] [(signed char)16] = ((unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_1] [i_3])) < (((/* implicit */int) min(((unsigned short)57015), (((/* implicit */unsigned short) var_6)))))));
            var_22 = ((/* implicit */unsigned int) ((_Bool) var_7));
        }
        for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 1) 
        {
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)224))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20201))) : (var_4))))), (((/* implicit */long long int) (((~(var_4))) == (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))))))));
            var_24 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            arr_17 [i_4] = ((/* implicit */_Bool) arr_10 [i_1]);
            /* LoopSeq 3 */
            for (unsigned short i_5 = 3; i_5 < 18; i_5 += 3) 
            {
                arr_21 [i_5] [i_4] [i_4] [i_1] = ((((((/* implicit */_Bool) -7086558642988658801LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 - 2] [i_5 - 1]))) : (arr_0 [i_4 + 1] [i_4 + 3]))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_5 - 3])) ? (((/* implicit */int) arr_4 [i_4 + 1] [i_5 + 3])) : (((/* implicit */int) arr_4 [i_4 - 4] [i_5 + 3]))))));
                var_25 = ((/* implicit */_Bool) arr_5 [i_1]);
                arr_22 [i_5] [i_4] [i_1] = ((/* implicit */unsigned char) ((signed char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_14))), (min((((/* implicit */unsigned int) arr_11 [i_5] [i_1] [i_1])), (0U))))));
                var_26 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_4 - 4] [i_4 - 3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)8521))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_1])) ? (3168106017U) : (var_9))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))))))) : (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) < (arr_0 [i_4 - 1] [i_1]))))))));
            }
            for (int i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
            {
                arr_25 [i_4] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (var_2))))) <= (((var_5) >> (((/* implicit */int) arr_14 [i_1] [i_1] [(short)16])))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_9 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned char)31)))))))) ? (((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned char)11))))) : (((/* implicit */int) arr_10 [i_1]))));
                var_28 = ((signed char) ((arr_18 [i_4 - 2]) ? (((/* implicit */int) arr_18 [i_4 - 2])) : (1863250717)));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_1]))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) : (4294967295U)))))) ? (max((arr_19 [i_4]), (min((((/* implicit */unsigned int) arr_20 [i_6] [i_4 - 4] [i_1])), (arr_19 [i_4]))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_11 [i_1] [i_4 - 4] [i_6])) ? (((/* implicit */int) arr_14 [i_1] [(_Bool)1] [(unsigned char)10])) : (((/* implicit */int) (signed char)-113)))), (((/* implicit */int) min((((/* implicit */short) arr_24 [i_1] [i_1] [i_1])), (arr_8 [i_4] [i_1])))))))));
            }
            for (int i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
            {
                arr_28 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_8 [i_4 + 3] [i_4 - 2])) ? (arr_6 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned short)0))))))))));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (unsigned char)81))));
                var_31 = ((/* implicit */unsigned char) max((min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) (signed char)-113)))), (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned short)56994))))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) 291164968U))));
            arr_32 [i_8] [i_1] = ((/* implicit */short) ((_Bool) (short)7246));
            arr_33 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_1]))));
        }
        var_33 = ((/* implicit */unsigned int) (signed char)-60);
        var_34 = ((/* implicit */unsigned int) (((-((-(((/* implicit */int) (signed char)77)))))) >> (((((((arr_1 [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1]))))) ? (((/* implicit */int) (unsigned short)6448)) : (((/* implicit */int) (signed char)-36)))) + (66)))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
    {
        var_35 += ((/* implicit */unsigned int) ((var_6) ? (((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_35 [(_Bool)1])))) : (((/* implicit */int) ((((/* implicit */int) (short)-23647)) > (((/* implicit */int) arr_35 [i_9])))))));
        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (~(((var_6) ? (((/* implicit */int) arr_35 [i_9])) : (((/* implicit */int) arr_34 [20U])))))))));
        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)128)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2218))))))));
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_34 [2U]))))) / (((long long int) arr_34 [(_Bool)1]))));
    }
}
