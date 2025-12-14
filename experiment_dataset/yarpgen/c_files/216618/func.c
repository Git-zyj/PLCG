/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216618
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
    var_20 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) var_14);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_10 [(signed char)1] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0])) >= (max((((((/* implicit */int) arr_9 [i_0 - 3] [i_1] [i_1] [i_1])) << (((((((/* implicit */int) var_13)) + (94))) - (24))))), (var_12)))));
                    var_22 = ((/* implicit */unsigned int) var_18);
                    var_23 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0])), (arr_9 [i_0 - 3] [i_1] [i_1] [i_2]))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        arr_13 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3])) && (((/* implicit */_Bool) ((unsigned int) var_5)))));
        /* LoopSeq 4 */
        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            arr_16 [i_3] [i_3] [(signed char)0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 - 1] [i_4] [i_3]))) : (max((((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))))), (arr_15 [(signed char)14])))));
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */int) ((signed char) arr_15 [i_4]));
        }
        /* vectorizable */
        for (short i_5 = 2; i_5 < 19; i_5 += 3) 
        {
            arr_21 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_5] [i_5 + 1] [i_5 - 1])) || (((/* implicit */_Bool) (unsigned short)23744))));
            var_24 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 + 2]))) % (arr_12 [i_3])));
            arr_22 [i_5] = ((/* implicit */int) (signed char)78);
        }
        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)26610))))) ? ((-(1448460721739878685LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6 + 1]))))));
            var_26 = ((/* implicit */unsigned int) ((unsigned short) (-(var_7))));
            var_27 = ((/* implicit */long long int) min((var_27), (arr_15 [18U])));
        }
        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            var_28 = ((/* implicit */long long int) max((arr_26 [i_3] [i_7] [19U]), (4244428695U)));
            var_29 += (~(((unsigned int) arr_27 [i_7])));
            arr_28 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) ((signed char) var_2))), (((var_0) + (((/* implicit */unsigned int) var_3)))))), (((unsigned int) (+(arr_15 [(short)2]))))));
            var_30 = ((/* implicit */signed char) (unsigned short)26710);
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_0))));
        }
        arr_29 [i_3] [(signed char)10] = max((var_17), (((/* implicit */unsigned int) var_2)));
    }
    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        arr_32 [i_8] [i_8] = ((/* implicit */unsigned int) (signed char)-108);
        var_32 -= ((/* implicit */short) var_15);
        var_33 = ((/* implicit */short) min(((unsigned short)13379), (((/* implicit */unsigned short) (short)11493))));
        arr_33 [i_8] [i_8] = ((/* implicit */_Bool) (((+(arr_31 [i_8] [(short)4]))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107)))));
    }
    /* vectorizable */
    for (long long int i_9 = 2; i_9 < 12; i_9 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_10 = 4; i_10 < 12; i_10 += 4) 
        {
            var_34 = ((/* implicit */signed char) arr_39 [i_10 + 1] [i_10] [i_10 - 1]);
            var_35 -= ((/* implicit */signed char) var_1);
        }
        for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                var_36 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_42 [i_9] [i_9] [i_9 - 1])) : (((/* implicit */int) arr_42 [i_9 - 2] [i_11] [i_12]))));
                var_37 = ((/* implicit */short) arr_15 [i_12]);
            }
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_41 [i_9] [i_11]))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535)))))));
            var_39 = ((/* implicit */int) arr_38 [i_9]);
            var_40 = ((/* implicit */long long int) arr_23 [i_9 - 1]);
            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_9 - 1])) ? (((/* implicit */int) arr_23 [i_9 + 1])) : (((/* implicit */int) arr_23 [i_9 - 2]))));
        }
        var_42 ^= ((/* implicit */short) (!((_Bool)1)));
        var_43 = ((/* implicit */short) (-(arr_40 [i_9 + 1] [i_9 - 2])));
    }
}
