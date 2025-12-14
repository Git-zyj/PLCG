/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2126
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
    var_19 = ((/* implicit */unsigned long long int) min((((((unsigned int) var_9)) / (((/* implicit */unsigned int) -1856383474)))), (((/* implicit */unsigned int) var_7))));
    var_20 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max((min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)6)))))), (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
        var_22 &= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_5))))))) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (35851)))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_5 [i_1]))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        arr_16 [16] [16] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (+(0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))) : (min((min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_2] [i_1])), (arr_3 [i_3]))), (arr_9 [i_1] [i_3] [i_3] [i_1])))));
                        arr_17 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) (-(0U)));
                        arr_18 [i_1] [i_1] [11ULL] [i_3] [11ULL] [i_1] = ((/* implicit */int) (+(max((arr_3 [i_1]), (arr_3 [i_4])))));
                        var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-13499))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_22 [i_1] [i_2] [i_3] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-20))));
                            arr_23 [i_1] [i_2] [i_1] [i_5] [i_2] [i_1] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_12 [i_5] [i_2] [i_3]))))));
                            arr_24 [i_1] = arr_9 [i_1] [(_Bool)1] [i_4] [i_5];
                            arr_25 [i_1] [i_1] &= ((int) arr_10 [i_1] [i_1] [i_5]);
                            arr_26 [i_1] [13ULL] [13ULL] [i_1] [13ULL] [i_1] [i_1] = ((/* implicit */unsigned int) arr_20 [i_1] [i_1] [(signed char)2] [i_4] [i_5]);
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
    {
        arr_29 [i_6] = (+(((((/* implicit */_Bool) 32736U)) ? (arr_27 [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_28 [i_6])))));
        arr_30 [i_6] = ((/* implicit */_Bool) (-(((-1) * (-177264358)))));
        var_25 *= ((/* implicit */long long int) (signed char)-1);
    }
    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
    {
        var_26 &= (-(min((arr_28 [i_7]), (arr_28 [i_7]))));
        var_27 = ((/* implicit */unsigned char) (-(-415903278)));
        arr_33 [i_7] [i_7] = ((/* implicit */unsigned int) (-((+(arr_32 [i_7])))));
    }
}
