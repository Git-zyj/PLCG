/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29661
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
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) % (min((((/* implicit */unsigned long long int) var_0)), (arr_2 [i_0 - 2])))));
        var_13 += ((/* implicit */unsigned int) ((signed char) var_1));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 &= ((/* implicit */long long int) (~(((/* implicit */int) ((((unsigned long long int) (short)-14666)) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))))))));
                    var_15 = min((((/* implicit */short) max((arr_7 [i_1] [i_2 - 1]), (arr_4 [i_1] [i_1])))), ((short)0));
                    var_16 = ((/* implicit */signed char) (short)0);
                    arr_11 [i_1] = ((/* implicit */short) (+(((/* implicit */int) min((arr_4 [i_1] [i_1]), (arr_9 [i_0 - 1] [i_1] [i_2 - 1] [i_2]))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))) : (min((((/* implicit */unsigned long long int) arr_9 [12U] [(_Bool)1] [(_Bool)1] [i_0 + 2])), (min((((/* implicit */unsigned long long int) var_9)), (arr_5 [i_0 - 2] [i_0 - 2] [i_0])))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                var_18 |= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_2)), (arr_5 [i_0] [i_0 - 1] [1LL]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) * (var_5)))))))));
                arr_17 [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */short) var_11)), (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1])))), ((-(arr_2 [i_0 + 1])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    var_19 = ((/* implicit */unsigned long long int) 2147483647);
                    var_20 = ((/* implicit */short) (signed char)-15);
                }
                arr_21 [i_4] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1315754166553000931ULL), (((/* implicit */unsigned long long int) arr_19 [(unsigned short)5] [i_4]))))) ? (((var_6) << (((/* implicit */int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_4] [(unsigned short)9])))))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-42))))), (((var_5) + (var_6))))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_8)), (var_9))) >> (((max((9223372036854775807LL), (((/* implicit */long long int) (short)0)))) - (9223372036854775787LL))))))));
            }
            arr_22 [(unsigned char)9] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [8U] [i_3] [8U])))))) >= (min((((/* implicit */unsigned long long int) var_0)), (var_6)))))), (arr_18 [(unsigned short)5] [(signed char)7] [1] [i_0])));
        }
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            arr_25 [i_0] [i_0] [i_6] = ((/* implicit */short) max((min((var_4), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (unsigned char)251)) + (((/* implicit */int) arr_4 [i_6] [i_6])))))))));
            arr_26 [i_6] = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
            var_21 = min((min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (arr_18 [6ULL] [6] [i_0] [6])))), (var_0))), (((/* implicit */long long int) (-((-(3017273452U)))))));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((arr_5 [i_7] [i_7] [1U]), (((/* implicit */unsigned long long int) 9U)))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_7])) ? ((+(((/* implicit */int) arr_13 [i_7] [i_7] [i_7])))) : ((-(((/* implicit */int) min((var_1), ((short)13586))))))));
        var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)127))))), (((arr_8 [i_7] [i_7] [i_7] [i_7]) + (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
        var_25 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
    {
        arr_32 [1U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
        var_26 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)245))));
        var_27 = ((/* implicit */unsigned int) (+(var_4)));
    }
    var_28 ^= ((/* implicit */unsigned char) var_8);
}
