/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45357
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = (-((~((~(((/* implicit */int) (unsigned short)11139)))))));
        var_17 = (_Bool)1;
        var_18 = ((/* implicit */_Bool) (unsigned short)12883);
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)124)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))))) >> (((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))) - (39784)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 4; i_2 < 18; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_5 [i_2 - 1] [i_1]))) ? (((((/* implicit */_Bool) arr_5 [(signed char)19] [i_2 + 2])) ? (var_13) : (((/* implicit */unsigned int) arr_3 [(unsigned short)12] [21ULL])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_2]))))));
            arr_10 [i_2 + 3] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2 - 4]))));
        }
        arr_11 [i_1] = ((/* implicit */long long int) arr_3 [i_1] [i_1]);
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((arr_13 [i_3]) ^ (var_13))))));
        var_21 = ((/* implicit */unsigned int) (signed char)-113);
        arr_14 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_3]))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                {
                    arr_19 [i_3] = ((/* implicit */_Bool) (-(arr_15 [i_4])));
                    var_22 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)52653))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (max((arr_21 [i_6]), (arr_22 [i_6] [i_6]))) : (min((((/* implicit */unsigned long long int) -987026787)), (arr_21 [i_6])))));
        var_25 *= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) / (var_2)))) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52653))) | (arr_20 [i_6])))))));
        /* LoopNest 3 */
        for (short i_7 = 1; i_7 < 22; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    {
                        var_26 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_25 [i_7 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1950846054) & (((/* implicit */int) var_11))))) ? ((+(arr_30 [(unsigned char)14] [i_9] [i_7] [i_8] [i_9] [i_9]))) : (((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_9))))))));
                        var_27 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-(arr_22 [10U] [i_7])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)124)) * (((/* implicit */int) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_9] [i_6])) ? (((/* implicit */unsigned int) var_12)) : (arr_27 [i_9])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_28 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_15)) ^ (((unsigned int) 2301339409586323456ULL))));
                            var_29 = ((/* implicit */unsigned int) (unsigned short)12883);
                        }
                    }
                } 
            } 
        } 
        arr_35 [i_6] = arr_22 [i_6] [i_6];
    }
    var_30 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_5)) >= ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_12)) : (6875505199252783113LL)))))));
    var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)0)) : (var_5)))) ? (((((/* implicit */int) var_4)) * (((/* implicit */int) var_6)))) : (((/* implicit */int) var_4)))))))));
    var_32 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48140)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)5432))))) ? (min((var_16), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_12))))));
    var_33 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)45824)) ? (((/* implicit */unsigned long long int) var_15)) : (var_16))))), (var_9)));
}
