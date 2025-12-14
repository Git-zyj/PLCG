/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34154
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10)))));
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 7740722136871355146ULL))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned int) max((((max((var_2), (var_0))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_1 [i_0 + 2] [i_1]) : (((/* implicit */int) arr_4 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_0] [i_0 + 1])))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                var_13 = (unsigned short)27059;
                arr_7 [i_2] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0 - 2]))))) : (((long long int) arr_3 [i_0 - 1]))));
                arr_8 [i_0 + 1] [i_1] [9ULL] [9] = ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0 + 2] [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_5 [i_0 - 1] [i_1])))) ? (((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0 + 1])) : (max((((/* implicit */unsigned long long int) var_4)), (var_0)))))));
            }
            arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) (~((~(7740722136871355120ULL)))));
        }
        for (short i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)39733)) || (((/* implicit */_Bool) 4862528887024137452ULL))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_15 = ((int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_4] [i_4])) : (((/* implicit */int) arr_4 [i_0] [i_0 - 1]))));
                arr_14 [i_0] [i_3] [i_4] [i_4] = min(((+(((int) var_0)))), (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0] [i_0 + 2])))));
                arr_15 [3U] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_1))))) ? (var_8) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [i_0 + 2]))));
                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((-60630507) / (((/* implicit */int) var_4)))))))));
            }
            for (signed char i_5 = 2; i_5 < 9; i_5 += 2) 
            {
                arr_18 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 - 2] [i_0 - 2]))))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_0 [i_5 + 1] [(unsigned char)1])))) || (((/* implicit */_Bool) var_6))));
                var_18 = ((/* implicit */unsigned short) max(((~(arr_0 [i_0 - 1] [i_0 - 1]))), (((/* implicit */unsigned long long int) (-(-5687380312409545021LL))))));
            }
            var_19 = ((/* implicit */unsigned long long int) (~(-60630509)));
        }
        for (short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_0 [i_0 - 1] [i_0 + 2])))) ? (arr_0 [i_0] [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_6])) ? (((/* implicit */int) (signed char)-99)) : (-60630496)))) ? ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_6])))) : (((/* implicit */int) var_9)))))));
            var_21 = ((/* implicit */int) (-(arr_5 [i_0 - 1] [i_6])));
            arr_22 [i_0 + 2] = (-((+(((((/* implicit */int) var_5)) / (((/* implicit */int) var_5)))))));
            arr_23 [(unsigned char)4] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -1504645216)), (10706021936838196469ULL)));
            var_22 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (short)11633)))));
        }
    }
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_10))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                {
                    var_24 -= ((/* implicit */unsigned short) max((((unsigned int) (short)11651)), (((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned char) arr_25 [i_7])))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            {
                                arr_39 [i_7] [(signed char)2] [i_10] = ((/* implicit */int) min((((unsigned long long int) ((((/* implicit */int) arr_25 [1])) / (((/* implicit */int) var_9))))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))), ((-(var_6)))))));
                                arr_40 [i_7] [i_10] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (arr_24 [i_7]))) >> (((max((var_0), (arr_24 [i_7]))) - (14771775196779359236ULL)))));
                            }
                        } 
                    } 
                    var_25 += ((/* implicit */unsigned short) ((max((var_8), (((/* implicit */int) arr_31 [i_7] [i_9])))) >> (((var_2) - (17098172601401513979ULL)))));
                    arr_41 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_10))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned char) var_2);
    var_27 = ((/* implicit */signed char) var_3);
}
