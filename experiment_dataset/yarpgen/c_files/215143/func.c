/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215143
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))));
            var_20 = ((/* implicit */short) (unsigned short)28840);
            var_21 = ((/* implicit */unsigned char) arr_0 [i_1] [i_0]);
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 833853944)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)49)))))));
        }
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483637)) ? (8778138227588390933LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118)))));
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 14; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (-601665730))));
                        arr_13 [i_4] [i_3 + 1] [(short)13] [i_0] = ((/* implicit */unsigned char) (~(var_13)));
                    }
                } 
            } 
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 2147483620)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_2 - 1]))) : (arr_8 [i_0] [i_2]))))));
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [(short)5] [i_0])) & (((/* implicit */int) var_14))));
        }
        for (signed char i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) var_14))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5] [i_0]))) > (arr_8 [i_0] [i_5])));
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        }
        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
        {
            arr_21 [i_6] = ((/* implicit */signed char) ((arr_17 [i_0]) >> (((arr_17 [i_0]) - (3944139156U)))));
            var_29 -= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_2))))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 13; i_7 += 2) 
            {
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_7 + 2] [i_7] [(signed char)11] [i_7])) && (((/* implicit */_Bool) arr_23 [i_7 + 3] [i_7] [i_7 + 3] [i_7]))));
                var_31 = ((/* implicit */int) ((unsigned long long int) arr_23 [i_7 + 3] [i_7] [i_7 + 1] [6]));
            }
            var_32 = var_0;
        }
        var_33 += ((/* implicit */short) (+(((int) var_7))));
    }
    for (short i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5))))), (((-8778138227588390912LL) & (((/* implicit */long long int) -1047005854)))))))));
        arr_27 [i_8] = ((/* implicit */unsigned short) max((((arr_23 [i_8] [i_8] [i_8] [(short)14]) | (((/* implicit */int) (unsigned char)182)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31560)) * (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1569773473)) ? (((/* implicit */int) arr_5 [i_8])) : (((/* implicit */int) var_5))))))))));
        var_35 -= ((/* implicit */unsigned char) max((((arr_19 [i_8]) + (arr_19 [i_8]))), ((-(arr_19 [i_8])))));
    }
    for (short i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)118))))) || (((/* implicit */_Bool) var_17))));
        var_37 = ((/* implicit */short) (~(max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9] [i_9]))) | (arr_17 [i_9]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_15)))))))));
        arr_31 [11LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483608)) ? (((/* implicit */long long int) 2147483647)) : (-4224990522062176126LL))))));
    }
    var_38 = var_6;
    var_39 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) ((-365953128) + (((/* implicit */int) var_1)))))))), (((((/* implicit */_Bool) (unsigned short)7919)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((var_11) <= (((/* implicit */long long int) 134217726U))))))))));
    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)15)) || (((/* implicit */_Bool) (short)13244))));
    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) 1140238570U))));
}
