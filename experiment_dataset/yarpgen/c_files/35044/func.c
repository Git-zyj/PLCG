/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35044
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
    var_19 |= ((/* implicit */_Bool) max((var_8), (((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_20 = ((/* implicit */_Bool) var_16);
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [(signed char)9] [(_Bool)1]);
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((min((((/* implicit */int) (signed char)-80)), (-44036364))), (var_8))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_22 = ((/* implicit */int) arr_3 [i_1] [(unsigned short)6]);
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_7 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_1] [i_1])) >> (((((/* implicit */int) arr_5 [i_1] [i_2] [i_1])) - (74)))));
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (signed char)53))));
        }
        for (int i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            var_24 = ((/* implicit */signed char) ((arr_3 [i_1] [i_3 - 1]) ? (arr_9 [i_1] [i_1]) : (((/* implicit */int) arr_5 [i_3 + 1] [i_3 - 1] [i_3 - 2]))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                for (int i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    {
                        arr_17 [i_1] [i_1] [i_3] = ((/* implicit */short) arr_14 [i_3] [i_3] [i_4]);
                        var_25 = ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_10 [i_5] [i_3])) : (arr_13 [i_3 + 1] [i_5 + 1]));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            var_26 = ((/* implicit */_Bool) min((var_26), (((((/* implicit */_Bool) 7532683017991775417LL)) && (((/* implicit */_Bool) arr_10 [i_6] [i_1]))))));
            var_27 = arr_11 [i_1] [i_1] [i_6] [i_6];
            /* LoopNest 2 */
            for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_25 [i_8] [i_1] [i_8] = ((/* implicit */short) ((7886614537721449676LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_28 *= ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_1] [i_1] [i_7 + 1] [i_6])) / (((/* implicit */int) arr_4 [i_7 + 2]))));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [(signed char)0] [i_7] [i_7 + 2])) ? (((/* implicit */int) arr_5 [i_6] [i_6] [i_7 + 1])) : (((/* implicit */int) arr_5 [i_6] [i_6] [i_7 + 1]))));
                            var_30 = ((/* implicit */int) arr_8 [i_1] [i_6]);
                            var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(9223372036854775792LL))))));
                            arr_29 [i_1] [i_6] [i_7] [i_8] [i_8] [i_1] [(unsigned short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) -2147483628)) : (-9223372036854775801LL)));
                        }
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            var_32 = ((/* implicit */_Bool) ((arr_3 [i_7 + 2] [i_7 + 2]) ? (((/* implicit */int) arr_11 [i_1] [i_6] [i_7] [i_8])) : (((/* implicit */int) arr_19 [i_7 + 3]))));
                            var_33 = ((/* implicit */short) ((((/* implicit */long long int) -2147483635)) / (9223372036854775807LL)));
                            arr_33 [i_1] [i_6] [i_8] [i_8] [i_10] = arr_14 [i_8] [i_8] [i_8];
                            arr_34 [i_1] [(unsigned short)5] [i_8] [i_8] [i_10] = ((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                } 
            } 
        }
    }
    var_34 |= ((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) >= (((((/* implicit */int) var_3)) | (((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (var_8)))))));
    var_35 = (!(((/* implicit */_Bool) var_3)));
}
