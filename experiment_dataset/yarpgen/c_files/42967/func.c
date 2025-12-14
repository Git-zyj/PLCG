/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42967
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 718528480U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (_Bool)0))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_11 *= ((/* implicit */unsigned char) (unsigned short)6251);
        arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [(signed char)0])) : (((/* implicit */int) (_Bool)1)))))));
        var_12 = ((/* implicit */short) ((long long int) ((unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_3 [(unsigned short)5]))))));
        arr_5 [i_0] [16U] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)240))))) ? (((/* implicit */int) var_0)) : (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))), (((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_3 [(short)11])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)240)))))))));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_2 [i_0] [i_0])) + ((-(((/* implicit */int) arr_0 [(signed char)10])))))), (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) var_4)), (1968925839U)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_11 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_9 [i_1])))))))));
        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))) | (min((arr_10 [i_1]), (((/* implicit */long long int) var_8)))))))));
        arr_12 [i_1] [i_1] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_8 [i_1])))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    {
                        var_14 = (!(((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [i_5 + 1])));
                        var_15 = ((/* implicit */signed char) ((unsigned int) arr_8 [i_2]));
                        arr_22 [i_5 + 1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_2]);
                        arr_23 [i_2] = ((/* implicit */unsigned int) ((arr_21 [i_5 + 1] [i_5 + 1] [i_4]) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5 - 1] [i_5 + 1])))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned short) ((arr_13 [i_2]) >= (arr_13 [i_2])));
        arr_24 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_2] [i_2])) ? (arr_14 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_2])))));
        var_17 &= ((/* implicit */unsigned int) ((((unsigned long long int) arr_19 [i_2] [(_Bool)1] [i_2] [i_2])) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2])))));
    }
}
