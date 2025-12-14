/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38794
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            var_10 = ((((arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 2]) ^ (((/* implicit */long long int) var_4)))) % (((/* implicit */long long int) (-(var_9)))));
            arr_5 [i_0] = ((/* implicit */short) var_7);
        }
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_11 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned int) 1958357899)), (16711680U)))));
            /* LoopSeq 2 */
            for (short i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_3 + 4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42849))) % (arr_4 [i_0] [i_0] [i_0])))) : (min((((/* implicit */unsigned long long int) (unsigned short)27528)), (10626313294399903227ULL)))))) || (((/* implicit */_Bool) ((3131529921U) / (arr_6 [i_3 + 1] [i_3 - 1] [6LL]))))));
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0]))));
            }
            for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                var_14 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0]);
                arr_13 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */long long int) var_5);
                arr_14 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_6 [i_0] [i_0] [i_0]) != (arr_6 [i_0] [i_0] [i_0])))) <= (((/* implicit */int) ((arr_6 [i_0] [i_2] [i_4]) < (arr_6 [i_0] [i_2] [i_4]))))));
            }
            var_15 = ((/* implicit */unsigned int) (signed char)-25);
        }
        var_16 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483392U)))))) != (var_5)))), ((~(min((((/* implicit */long long int) var_4)), (-8385741521367228882LL)))))));
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) var_8);
        var_17 = ((/* implicit */unsigned int) (unsigned char)38);
    }
    for (long long int i_5 = 1; i_5 < 15; i_5 += 1) /* same iter space */
    {
        var_18 = (-(((((arr_8 [i_5 - 1] [i_5 - 1]) + (9223372036854775807LL))) >> (((16147854601031707862ULL) - (16147854601031707845ULL))))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_7))));
            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)23)))))))));
            var_21 = ((/* implicit */unsigned int) arr_2 [i_5] [i_6]);
        }
    }
    for (long long int i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) 
        {
            arr_29 [i_8] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) 261646388U))))));
            arr_30 [i_8] = ((/* implicit */int) (~(max((arr_12 [i_8] [i_8] [i_8 + 1] [i_8]), (arr_12 [i_8] [i_8] [i_8 - 1] [i_8])))));
        }
        var_22 &= ((/* implicit */short) max(((~(2147483392U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435455U)) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) 4095477441U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5032318572311078028LL)))))) ? (min((var_4), ((~(var_4))))) : (((/* implicit */unsigned int) (((((-(((/* implicit */int) (unsigned short)20399)))) + (2147483647))) >> (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (-8385741521367228882LL))))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 697489670)) ^ (max((((/* implicit */unsigned int) (unsigned short)42853)), (arr_0 [i_7])))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1] [i_7 - 1]))) : (-1844586414320995698LL))) : ((((!(((/* implicit */_Bool) var_9)))) ? ((~(var_7))) : ((+(-9004896272802328128LL)))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_10 = 1; i_10 < 18; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                {
                    arr_38 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_36 [i_10 + 2] [i_10 + 3] [i_10 + 2] [i_10 - 1]), (((/* implicit */unsigned int) (unsigned short)22668))))) ? (((((/* implicit */_Bool) arr_35 [i_10 + 1] [i_10 - 1] [i_10 + 2])) ? (arr_32 [i_10 - 1] [i_10 - 1]) : (((/* implicit */long long int) arr_36 [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10 - 1])))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))));
                    arr_39 [i_9] [i_11] = ((/* implicit */unsigned int) -6682886247305069246LL);
                }
            } 
        } 
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -5884407634072993485LL)) ? (var_6) : (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2418374601527185438LL)) ? (3350879113U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) (-(var_4)))) : (arr_32 [i_9] [i_9])))));
        arr_40 [i_9] = min((((/* implicit */unsigned long long int) ((140600049401856LL) >> (((((/* implicit */int) (short)-708)) + (743)))))), (((((/* implicit */_Bool) (unsigned short)15497)) ? (((/* implicit */unsigned long long int) arr_37 [i_9] [i_9])) : (8796093022206ULL))));
        arr_41 [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((((/* implicit */unsigned long long int) 6646555992490374393LL)) < (arr_31 [i_9] [i_9]))))))));
        arr_42 [i_9] [i_9] = (-(max((var_4), (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))))));
    }
}
