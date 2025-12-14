/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31612
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
    var_18 = ((/* implicit */unsigned char) (~(((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4546))) - (var_13))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (signed char)23))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (1781810313U)));
        arr_4 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_0])), (arr_0 [i_0]))))))), (max((((/* implicit */unsigned int) 1)), (var_17)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_0 [i_1])));
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (unsigned short)56257)))) <= (((/* implicit */int) ((_Bool) arr_1 [i_1])))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_3 + 1] [i_3]))) <= (arr_16 [i_4] [7ULL] [7ULL]));
                    arr_17 [i_4] [i_2] [i_3] [i_2] = ((/* implicit */int) var_11);
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (arr_13 [i_2] [i_2] [i_2])));
        arr_18 [i_2] = ((/* implicit */unsigned long long int) (short)-6476);
        var_22 = ((/* implicit */unsigned long long int) var_14);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_23 = (unsigned short)50804;
        arr_21 [22LL] &= ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (unsigned short)30053))))), ((+(4955111436084358738LL)))))));
    }
    var_24 = ((/* implicit */unsigned char) var_1);
}
