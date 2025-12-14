/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198380
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_3))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = min((arr_2 [i_0]), (((/* implicit */short) arr_3 [i_0])));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (arr_8 [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_8 [i_0] [i_1] [i_2] [i_3] [9]))) : (arr_8 [i_0] [(_Bool)1] [i_2] [i_3] [i_2])));
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_8 [i_0] [i_1] [i_2] [i_2] [i_3])))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)56))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_8 [i_0] [i_1] [i_2] [i_3 + 1] [i_3]))))) : (((/* implicit */unsigned long long int) ((long long int) arr_8 [i_3 + 1] [i_1] [i_0] [i_3] [i_0])))));
                    }
                    for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (short)18952)))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_2 [i_1])))) : ((-(((/* implicit */int) arr_2 [i_0]))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_25 = ((/* implicit */int) min((((/* implicit */short) (signed char)49)), ((short)18946)));
            var_26 = ((unsigned char) (signed char)-102);
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        arr_18 [(_Bool)1] = ((/* implicit */_Bool) var_8);
        arr_19 [i_6] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_10)) ? (arr_8 [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_8 [i_6] [i_6] [i_6] [i_6] [i_6])))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))) - (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_9))) & (((/* implicit */int) var_6)))))));
}
