/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224684
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
    var_15 += (unsigned short)48610;
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(18446744073709551612ULL)))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_0)), (var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((+(var_5)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || ((!(((/* implicit */_Bool) (unsigned char)251))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_8 [i_1])))) ? (arr_8 [i_1]) : (arr_8 [i_1])));
        arr_9 [i_1] = ((/* implicit */unsigned char) var_13);
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((arr_8 [i_1]) & (arr_8 [i_1])))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 19; i_4 += 2) 
            {
                {
                    arr_18 [i_2] [i_3] = arr_2 [16];
                    arr_19 [i_2] [i_2] [i_4] |= ((/* implicit */int) ((((((/* implicit */unsigned int) arr_11 [(short)10])) & (arr_15 [i_4 - 1]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_14 [i_4 - 2] [i_4 - 1] [i_4 + 2]))))));
                }
            } 
        } 
        arr_20 [i_2] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) arr_7 [i_2])), (992U)))));
        arr_21 [i_2] [i_2] |= ((/* implicit */unsigned char) min((max((max((((/* implicit */long long int) arr_15 [i_2])), (arr_8 [i_2]))), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)7])))))));
        /* LoopNest 3 */
        for (long long int i_5 = 2; i_5 < 19; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_23 [i_7]))));
                        arr_30 [(unsigned char)6] [16LL] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_5 + 1]))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (-(((((/* implicit */unsigned long long int) arr_8 [i_2])) & (max((arr_12 [(unsigned short)1]), (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2])))))))))));
                    }
                } 
            } 
        } 
    }
}
