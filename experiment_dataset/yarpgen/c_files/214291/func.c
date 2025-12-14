/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214291
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (+(var_5))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [8])) ? (arr_6 [(unsigned char)2] [(unsigned char)2] [(unsigned char)6] [i_2]) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)204)), (arr_5 [i_1] [8]))))))))))));
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_2 [i_0] [i_0 + 2]))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(arr_1 [(short)18])))) / (var_5)))) ? (((((/* implicit */int) (signed char)25)) + (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_2] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_0] [i_0]))))))));
                    var_15 = ((/* implicit */unsigned short) ((int) ((var_8) / (((/* implicit */long long int) arr_6 [i_0 + 2] [(unsigned char)15] [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_1))))) : (var_10))) + (((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) (signed char)59)))))));
    /* LoopSeq 1 */
    for (signed char i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        var_17 ^= ((/* implicit */signed char) max((((/* implicit */int) ((signed char) var_1))), ((+(((/* implicit */int) (signed char)-1))))));
        arr_10 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) (unsigned short)4563)))))) ? (((/* implicit */long long int) (+(arr_8 [i_3])))) : (((((/* implicit */_Bool) arr_7 [(signed char)12] [(signed char)12])) ? (var_8) : (((/* implicit */long long int) ((-1047298545) - (((/* implicit */int) arr_5 [12LL] [(unsigned char)6])))))))));
    }
}
