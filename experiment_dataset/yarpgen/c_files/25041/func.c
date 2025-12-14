/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25041
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
    for (signed char i_0 = 3; i_0 < 8; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */unsigned long long int) (short)-31009);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [2LL]);
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [2U]), (((/* implicit */unsigned long long int) 16106127360LL))))) ? (min((((/* implicit */unsigned long long int) (-(var_16)))), (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (short)24045)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)24051))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 8; i_1 += 3) /* same iter space */
    {
        var_19 = arr_4 [i_1 - 3] [9ULL];
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 + 2])) && (((/* implicit */_Bool) arr_5 [i_1 + 2]))));
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) 
        {
            for (short i_3 = 3; i_3 < 8; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2 + 1] [i_3] [i_1] [i_1])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))))) < (((unsigned long long int) -1297500527))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32766)) ? (-4094767138948044657LL) : (((/* implicit */long long int) ((int) (unsigned short)65531)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 16; i_5 += 2) 
    {
        var_22 = ((/* implicit */short) var_1);
        var_23 = ((/* implicit */unsigned char) ((int) var_0));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_6 = 2; i_6 < 12; i_6 += 3) 
    {
        arr_18 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)14058)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_6 + 1] [i_6 + 1]))));
        arr_19 [i_6] = ((/* implicit */long long int) ((int) arr_16 [i_6 - 1] [i_6 + 1]));
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 24; i_7 += 1) 
    {
        arr_22 [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_2)))));
        /* LoopSeq 3 */
        for (unsigned short i_8 = 1; i_8 < 21; i_8 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) var_4);
            var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 148559368)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (arr_24 [i_7])))) : (arr_23 [i_7 - 1] [i_8 - 1] [i_8 + 2])));
        }
        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_21 [i_7]) : (((/* implicit */unsigned long long int) 2543201035U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7168))) : (arr_26 [i_7] [i_7] [i_7])));
            arr_28 [i_7 + 1] [i_9] = ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) (unsigned short)14568)))));
            var_27 = ((/* implicit */int) min((var_27), ((+(((((/* implicit */int) var_8)) >> (((((/* implicit */int) (unsigned short)50944)) - (50923)))))))));
            var_28 = ((/* implicit */unsigned int) (unsigned short)50619);
        }
        for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 4094767138948044629LL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)32766)) == (((/* implicit */int) arr_32 [i_7 + 1] [i_7] [i_7]))))))));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_20 [i_10] [i_7])))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
        }
        arr_33 [i_7] [i_7] = ((/* implicit */int) arr_30 [i_7] [(unsigned short)6] [(unsigned short)6]);
    }
}
