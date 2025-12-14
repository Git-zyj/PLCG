/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234511
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(var_4))), (((/* implicit */unsigned int) min((((/* implicit */short) arr_1 [i_0] [i_0])), (arr_0 [i_0] [i_0]))))))) && (((/* implicit */_Bool) var_4))));
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) var_18))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))));
        arr_6 [i_1] |= ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) (unsigned short)58414)))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_6)))) ? (((unsigned long long int) arr_8 [i_2] [i_2])) : ((-(((unsigned long long int) var_18)))))))));
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_18)), (arr_1 [i_2] [(unsigned short)2])))), ((~(((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_7 [i_2])))))));
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_2]))))));
        var_24 *= ((/* implicit */unsigned char) arr_0 [(short)4] [(short)4]);
    }
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            {
                arr_17 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_5), (arr_8 [i_3] [i_3])))) ? (((/* implicit */int) (unsigned short)7111)) : ((~((-(((/* implicit */int) var_12))))))));
                var_25 = ((/* implicit */short) max((max(((-(((/* implicit */int) arr_11 [i_4])))), (((/* implicit */int) arr_16 [i_4] [i_3] [i_3])))), (min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) arr_11 [i_3]))))));
                arr_18 [i_3] = ((/* implicit */signed char) min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) arr_0 [i_3] [i_4])) ? (((/* implicit */int) arr_0 [6ULL] [i_3])) : (((/* implicit */int) arr_0 [i_3] [i_4]))))));
                arr_19 [4ULL] &= ((((/* implicit */_Bool) (unsigned char)223)) ? (131071ULL) : (((/* implicit */unsigned long long int) 255U)));
            }
        } 
    } 
}
