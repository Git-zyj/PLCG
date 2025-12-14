/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243392
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) min((arr_0 [i_1 + 1]), (arr_0 [i_1 + 2]))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_10 = ((/* implicit */unsigned char) var_5);
                    arr_9 [i_2] [i_0] [i_2] = ((/* implicit */short) arr_3 [i_0]);
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [(unsigned short)18] [(unsigned short)18] [i_0])) ? (arr_8 [i_2] [(signed char)0] [i_0] [(signed char)0]) : (((/* implicit */int) (((+(((/* implicit */int) var_0)))) >= (arr_8 [(unsigned char)10] [i_1 + 2] [i_1] [i_2]))))));
                }
                var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_2 [11] [(_Bool)1] [i_0]), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8192))) : (min((var_9), (((/* implicit */unsigned int) arr_7 [i_1 + 2] [i_1 + 1] [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1] [(unsigned short)10] [i_0])) ? (arr_8 [i_0] [i_1 - 1] [i_1] [i_0]) : (arr_8 [(unsigned short)22] [i_1 + 2] [i_0] [i_0])))) : (arr_1 [i_0])))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((long long int) (unsigned char)140));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (((-(((/* implicit */int) var_0)))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)7750)) == (var_1)))))))))));
    var_15 = max((var_4), (((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_1))))))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_6))));
}
