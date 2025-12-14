/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217885
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)21154)))))) : (((((/* implicit */int) min((var_0), (((/* implicit */unsigned char) (signed char)16))))) - (((/* implicit */int) var_3))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1419801812U)) ? (arr_14 [i_3] [i_3] [i_3 + 1] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                            var_14 = ((/* implicit */int) ((18197592264037037522ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_3])))));
                        }
                        for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 2) 
                        {
                            var_15 = ((((((/* implicit */_Bool) ((int) (unsigned short)44381))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8191)) / (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5])))) : (arr_17 [(unsigned char)10] [i_3 - 1] [(_Bool)1] [i_0 - 1] [i_0]))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))));
                            arr_19 [(unsigned char)6] [i_0] [i_0] [i_3 - 3] [(unsigned short)2] = (~(((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) (unsigned short)27766)) : (((/* implicit */int) var_6)))));
                        }
                        var_16 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_2])) <= (((/* implicit */int) arr_2 [i_2]))))) & (((/* implicit */int) max((arr_2 [i_3]), (arr_2 [i_3]))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) arr_16 [i_0 - 1] [i_0] [i_0 - 1]))), (max((-5353965202786756395LL), (((/* implicit */long long int) arr_15 [(short)1] [i_0] [i_0 + 1] [i_0] [i_0]))))));
    }
    for (int i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_20 [i_6 - 1])))) ? ((((((_Bool)1) || (((/* implicit */_Bool) arr_20 [i_6])))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)98)) > (((/* implicit */int) (unsigned short)57344))))) : (((/* implicit */int) arr_21 [i_6 + 1])))) : (((((/* implicit */int) ((((/* implicit */int) arr_21 [i_6])) > (((/* implicit */int) arr_21 [i_6]))))) * (((/* implicit */int) max((arr_21 [i_6 + 1]), ((unsigned short)37770))))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_21 [i_6 + 1])) >> (((arr_20 [i_6 - 1]) - (2078703881U))))) / (((((/* implicit */_Bool) 47290863240615604LL)) ? (((/* implicit */int) arr_21 [i_6 - 1])) : (((/* implicit */int) (signed char)-7)))))))));
        arr_22 [10U] = ((/* implicit */unsigned int) var_10);
        var_20 ^= ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) min((arr_21 [i_6 - 1]), (((/* implicit */unsigned short) (_Bool)1))))));
    }
    for (unsigned short i_7 = 2; i_7 < 21; i_7 += 4) 
    {
        var_21 = ((/* implicit */int) ((max((arr_23 [i_7 + 3]), (arr_23 [i_7 + 2]))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */int) ((((/* implicit */_Bool) 5705573306639584385LL)) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) max(((unsigned char)248), (((/* implicit */unsigned char) (signed char)-7))))))))));
        arr_27 [i_7 + 1] = (-(((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_26 [i_7]))))) - (((/* implicit */int) var_0)))));
        arr_28 [i_7] = ((/* implicit */int) (-(min((((/* implicit */unsigned int) ((unsigned short) (signed char)7))), (arr_23 [i_7 + 3])))));
    }
}
