/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52940
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_10);
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-63)) <= (((/* implicit */int) var_0)))))))) <= (5015817116826202733LL)));
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((11ULL) != (((/* implicit */unsigned long long int) 4294967279U)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_4 [i_1]))), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_5 [i_1])))))))));
        var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (short)2292))))) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) < (((((/* implicit */_Bool) arr_4 [i_1])) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))))));
        arr_7 [1U] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_1])))) != (max((max((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(short)12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (4294967269U))))))));
    }
    var_19 &= ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_13))))))), (((/* implicit */int) var_15))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_4 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) var_14)))))))));
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_13))));
        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((+(var_2))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)23063)) : (((/* implicit */int) (_Bool)1)))))));
    }
}
