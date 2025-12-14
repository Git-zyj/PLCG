/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191063
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_15 = var_12;
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */int) ((_Bool) 1627736777))) : (((/* implicit */int) (_Bool)1))))) ? (arr_1 [(signed char)1]) : (((int) (!(((/* implicit */_Bool) 582945980U)))))));
        var_16 = ((/* implicit */int) var_12);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 3712021334U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1050552606U)))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1130)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) : (3712021308U)));
            var_19 = ((/* implicit */int) var_1);
            var_20 *= ((/* implicit */unsigned short) var_0);
            var_21 = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (signed char)21)));
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                {
                    var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_12 [i_1] [i_3] [i_4])) : (((/* implicit */int) arr_5 [i_3]))));
                    var_23 -= ((/* implicit */signed char) var_4);
                }
                for (short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_5]))))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_2] [i_1]))) : (arr_8 [i_2])));
                    var_26 = ((/* implicit */long long int) (signed char)60);
                    var_27 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (4135519236U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                }
                var_28 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_17 [(_Bool)1] [i_1] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_1]))));
            }
            for (int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                var_29 *= ((/* implicit */signed char) arr_8 [i_6]);
                var_30 &= ((/* implicit */unsigned int) var_1);
                var_31 = ((/* implicit */unsigned int) (~(((var_13) ? (((/* implicit */long long int) var_7)) : (var_8)))));
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13084)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2] [(short)15]))) : (4294967295U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 268304384)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))) : (arr_10 [i_6] [i_6] [i_2] [i_1])));
                var_33 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [15])) ^ (((/* implicit */int) var_3))))));
            }
            for (signed char i_7 = 1; i_7 < 16; i_7 += 4) 
            {
                var_34 = ((/* implicit */_Bool) var_2);
                /* LoopSeq 1 */
                for (unsigned short i_8 = 1; i_8 < 15; i_8 += 3) 
                {
                    var_35 |= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_7] [(_Bool)1])))) ? (((((/* implicit */_Bool) -4791376922897874849LL)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_7] [(short)4])) : (((/* implicit */int) (signed char)42)))) : (((/* implicit */int) ((_Bool) var_9)))));
                    var_36 += ((/* implicit */int) (signed char)-36);
                }
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        var_37 = ((/* implicit */unsigned short) ((long long int) var_2));
        var_38 = ((/* implicit */int) var_8);
        var_39 = ((/* implicit */signed char) (+(582945955U)));
    }
    var_40 -= ((/* implicit */_Bool) ((max((var_12), (((/* implicit */long long int) (signed char)116)))) << (((((/* implicit */int) ((unsigned short) 2093395616))) - (44671)))));
}
