/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202461
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
    var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) ((var_10) % (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))), (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_4)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                arr_10 [i_0] [4LL] [i_0] = ((/* implicit */_Bool) (unsigned char)53);
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)18))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 3; i_4 < 14; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (unsigned char)203))));
                        arr_18 [i_0] [i_0] [i_1] [i_2 + 2] [i_3] [i_4] = ((/* implicit */unsigned int) -1810571504);
                    }
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        arr_21 [i_5] [i_3] [i_2 - 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
                        var_16 *= ((/* implicit */signed char) ((unsigned short) var_12));
                        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2 - 2])) && (((/* implicit */_Bool) arr_6 [i_2 + 2]))));
                        var_18 ^= ((/* implicit */unsigned long long int) ((arr_8 [i_2 + 2] [i_1 + 2] [i_1 + 1]) * (arr_8 [i_2 + 3] [i_1 + 2] [i_1 + 2])));
                    }
                    arr_22 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)68)) & (((/* implicit */int) (unsigned char)134)))) != (((/* implicit */int) (short)32767))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    var_19 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) var_5)));
                    arr_26 [14] [i_6] [i_0] [i_2 + 2] [(unsigned short)5] = ((/* implicit */signed char) var_5);
                    arr_27 [i_6] [(signed char)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (unsigned char)134))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14579620850952298821ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28037))))) : (((/* implicit */int) (short)2114))));
                }
            }
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                arr_30 [i_0] [i_1] [i_7] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_7])) ? (arr_12 [i_0] [i_0] [9LL] [i_1] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                var_21 = ((/* implicit */unsigned short) ((signed char) ((arr_20 [i_0] [i_7] [i_7]) * (12877568971885195836ULL))));
                arr_31 [i_7] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1] [i_0]))));
                var_22 = ((/* implicit */int) ((arr_13 [i_1 - 1] [i_1 + 3]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) arr_29 [i_7] [i_0])) : (((/* implicit */int) (signed char)-97)))))));
                var_23 -= ((/* implicit */unsigned char) var_3);
            }
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_9)) * (12877568971885195827ULL))) % (((/* implicit */unsigned long long int) var_9))));
            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_2)) ? (arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 1]) : (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]))))));
        }
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    {
                        var_24 = ((/* implicit */short) (+(min((((/* implicit */long long int) arr_1 [i_0])), ((~(9223372036854775807LL)))))));
                        arr_41 [i_8] |= ((/* implicit */unsigned char) min((((long long int) var_1)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (var_10))))));
                        var_25 = (!((!(((/* implicit */_Bool) -79235277)))));
                        var_26 -= ((/* implicit */int) max((((/* implicit */long long int) (+(((((/* implicit */int) var_2)) | (((/* implicit */int) var_2))))))), (min(((-(arr_0 [i_9]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17))) < (var_9))))))));
                        arr_42 [i_0] [9] [i_8] [i_9] [2] = ((/* implicit */unsigned long long int) var_1);
                    }
                } 
            } 
            var_27 = ((/* implicit */int) max((var_27), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_8 [i_0] [i_8] [(unsigned short)12])))))))))));
        }
        var_28 = ((((((/* implicit */int) (unsigned char)61)) / (((/* implicit */int) var_8)))) ^ (((((/* implicit */_Bool) 4913828202819181699ULL)) ? (((/* implicit */int) arr_35 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)122)))));
        arr_43 [i_0] = ((/* implicit */signed char) min(((+(arr_34 [i_0]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_37 [i_0])))))));
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    {
                        var_29 *= max((((/* implicit */unsigned long long int) -805693943510489307LL)), (13684251417587350487ULL));
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */int) var_5)) + (((/* implicit */int) ((signed char) var_10))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_14 = 0; i_14 < 17; i_14 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))))));
        arr_53 [i_14] [(unsigned short)16] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)125)))))));
    }
}
