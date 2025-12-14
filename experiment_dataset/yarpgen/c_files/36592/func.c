/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36592
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_3))) && (((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))))))), (var_2)));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_0 [i_1] [(unsigned short)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106))))), ((+(var_4))))) > (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (short)32767))))), (((((/* implicit */_Bool) 3532179068U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1])))))))))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(short)0] [(short)0])))))))) : (4199973501U)));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 762788221U)) ? (((/* implicit */int) arr_8 [i_4 - 1] [i_3] [i_2] [i_1])) : (((/* implicit */int) arr_8 [i_2] [9ULL] [i_4 + 2] [i_3]))))), (var_11)));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_18 ^= ((/* implicit */unsigned int) ((arr_6 [i_3] [i_2] [0U]) != (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_5] [i_3])), ((-(1966387452U))))))));
                            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) var_3))))) ? (((arr_0 [i_1] [(_Bool)1]) | (8112193896554091306ULL))) : (((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_1])) ? (((/* implicit */int) var_8)) : (((((arr_10 [i_1] [i_2] [i_3] [i_4] [i_5] [i_1]) + (2147483647))) << (((((((/* implicit */int) arr_13 [i_2] [i_4] [(_Bool)1] [i_3] [i_2] [(_Bool)1] [i_2])) + (14362))) - (5))))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            var_20 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6] [i_4] [i_3] [i_2] [i_1] [i_1]))));
                            var_21 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-122))))) | (((((/* implicit */_Bool) var_12)) ? (arr_6 [i_4] [i_3] [i_2]) : (arr_6 [i_1] [i_3] [i_4 + 1])))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 3431028848U)) ? ((+(max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_3] [i_4] [i_6])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [(signed char)11] [i_2] [i_4 + 1]) <= (((/* implicit */unsigned long long int) var_7))))))));
                            var_23 = max((((/* implicit */long long int) 3431028871U)), ((-(arr_2 [i_1] [i_2]))));
                        }
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */int) var_10);
}
