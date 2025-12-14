/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193077
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
    var_15 = ((/* implicit */unsigned char) min((var_7), (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7))) : (((/* implicit */unsigned long long int) 2042218847))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_0]);
            var_16 |= ((((/* implicit */_Bool) ((unsigned long long int) (+(arr_4 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)8] [i_1] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32765)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0)))) ? (((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
        }
        for (long long int i_2 = 4; i_2 < 8; i_2 += 3) 
        {
            var_17 = arr_2 [i_2 - 3] [i_0] [i_0];
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? ((-(var_11))) : (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_2 - 4] [i_0])))))) ? ((~(((long long int) (short)28)))) : (((/* implicit */long long int) -709192901))));
        }
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) ((signed char) arr_0 [i_0])))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_11 [i_3] = ((/* implicit */short) (~((~(arr_4 [i_3])))));
        var_20 = (~(arr_7 [i_3]));
        var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((3793722237U), (((/* implicit */unsigned int) arr_10 [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1177979006)) ? (arr_7 [i_3]) : (arr_7 [i_3])))) : (((((/* implicit */_Bool) arr_7 [i_3])) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) arr_2 [i_3] [i_3] [i_3])) : (arr_1 [i_3]))) : (((/* implicit */unsigned long long int) ((long long int) var_7)))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (short)26806))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 501245051U)) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(short)3])) ? (((/* implicit */long long int) arr_12 [i_4])) : (arr_13 [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (arr_13 [i_4])))));
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) arr_12 [6ULL]))))) ? (((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) 8562280355346450437LL))))) : ((+(arr_12 [11])))))) > (((((/* implicit */_Bool) min(((unsigned short)20872), (((/* implicit */unsigned short) var_3))))) ? (arr_13 [i_4]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)90)) + (arr_12 [i_4]))))))));
    }
    var_24 += ((((/* implicit */_Bool) var_0)) ? (((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
    var_25 = ((/* implicit */unsigned int) var_8);
}
