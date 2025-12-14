/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30068
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)44164)) ? (112026660646760014ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [6LL] = ((/* implicit */_Bool) 70368744177664ULL);
        arr_3 [6U] = ((/* implicit */_Bool) var_1);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                {
                    arr_11 [i_2] [i_2] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3 + 1] [i_3])) ? (((/* implicit */unsigned long long int) 211106232532992LL)) : (arr_9 [i_3] [i_3 - 1] [3LL])))) ? (max((17873599106557975572ULL), (4196507168923420804ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_3]))));
                    var_13 = ((/* implicit */unsigned char) (~(((max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_3])), (18446744073709551603ULL))) * (((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20)))))))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 17170591935692108602ULL)))))) < (min((((/* implicit */unsigned int) (short)127)), (4202158728U))))))));
        arr_13 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))))), (var_8)))) ? (((/* implicit */unsigned long long int) ((2147483647U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) * ((-(arr_9 [i_1] [i_1] [i_1])))))));
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 573144967151576043ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)36979))));
        arr_18 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((279223176896970752LL) / (arr_16 [i_4])))))) ? (((unsigned int) (!(((/* implicit */_Bool) (short)-11320))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_17 [i_4] [i_4]))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 2) 
        {
            var_15 ^= ((/* implicit */unsigned short) ((17171480576ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3210)))));
            arr_24 [i_5] [i_5] [i_5] = ((/* implicit */signed char) 70368744177643ULL);
            arr_25 [i_6 - 3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 17873599106557975560ULL)) ? (3605177369U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247)))));
        }
        arr_26 [i_5] [9U] = ((/* implicit */_Bool) var_6);
        arr_27 [(short)7] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1))));
    }
}
