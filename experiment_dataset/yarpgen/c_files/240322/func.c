/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240322
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (signed char)-84))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((((/* implicit */_Bool) (short)25750)) && (((/* implicit */_Bool) 16727051331529474127ULL)))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 268435328)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)32764))))));
                            arr_14 [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_1 - 4] [i_1 - 4] [i_2] [i_4] [i_0] [i_2]))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (short)-6020))));
                        }
                        for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_18 [i_3] [i_0] = ((/* implicit */signed char) (+(142337360U)));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-121)) + (((/* implicit */int) arr_9 [i_5] [i_3 - 1] [i_1 + 2] [i_1 + 1] [i_0]))));
                            var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)13))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1719692742180077488ULL))));
                            arr_22 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-32763))));
                            arr_23 [i_1] [i_2] [i_6] = ((/* implicit */unsigned int) ((1251301133U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127)))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32764)) == (((/* implicit */int) (signed char)-49))));
                            var_23 -= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-69))));
                            var_24 = ((/* implicit */unsigned int) (~(arr_16 [i_1 + 3] [i_3] [i_7])));
                            var_25 = ((/* implicit */int) var_6);
                            var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [i_0] [i_7])) ? (((/* implicit */int) (unsigned short)107)) : (((/* implicit */int) (signed char)-98))));
                        }
                        var_27 -= ((/* implicit */long long int) (short)-1283);
                        arr_27 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1 - 4] [i_2] [i_1]))));
                    }
                } 
            } 
        } 
        arr_28 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) var_5)) >= (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        var_28 = ((/* implicit */_Bool) (short)-6020);
        var_29 = ((/* implicit */unsigned short) -2078440577);
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max((max((((/* implicit */long long int) ((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)6005)))))), (((long long int) (short)-1303)))), (((/* implicit */long long int) var_0)))))));
    }
    for (int i_9 = 3; i_9 < 19; i_9 += 1) 
    {
        var_31 = ((/* implicit */short) min((((8ULL) <= (((/* implicit */unsigned long long int) 2147483647)))), (((((/* implicit */_Bool) (signed char)-114)) && (((/* implicit */_Bool) arr_12 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [i_9]))))));
        var_32 = ((/* implicit */unsigned int) ((((1985917539U) << (((/* implicit */int) (_Bool)1)))) > (max((((/* implicit */unsigned int) ((unsigned short) (signed char)53))), ((-(arr_15 [i_9] [i_9] [i_9])))))));
        /* LoopSeq 1 */
        for (short i_10 = 1; i_10 < 18; i_10 += 3) 
        {
            var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (signed char)-60)) : (min((1484507529), (((/* implicit */int) (_Bool)1))))));
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-47)) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 3117112125U))))) << (((((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (short)-31031)) : (((/* implicit */int) var_0)))) + (31053))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_9] [i_10] [i_10] [i_9] [i_10]))))) ? (2147483647) : (((/* implicit */int) (short)1131))))));
        }
        var_35 = arr_4 [i_9] [i_9] [i_9];
    }
    for (int i_11 = 2; i_11 < 15; i_11 += 3) 
    {
        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_34 [i_11])), (min((max((arr_31 [i_11]), (((/* implicit */unsigned long long int) -4346413362092438996LL)))), (((/* implicit */unsigned long long int) (signed char)32)))))))));
        var_37 = ((/* implicit */int) 7407252612636872193LL);
    }
}
