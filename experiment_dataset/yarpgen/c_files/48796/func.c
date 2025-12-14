/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48796
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_5) < (((/* implicit */long long int) var_7)))) ? (((/* implicit */unsigned int) ((int) var_2))) : (max((var_7), (((/* implicit */unsigned int) (_Bool)0))))))) || (((/* implicit */_Bool) 2452009348086647151LL)))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)25310)) * (((/* implicit */int) arr_4 [i_0]))))), (((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-94)))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (short)-17595))))) : (var_9)))) : (max((max((arr_5 [i_0] [i_1]), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0] [(unsigned char)16])), ((unsigned short)25336))))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min(((~(((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_6))))))), ((~(((((/* implicit */_Bool) var_8)) ? (1073740800) : (-755970989)))))));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_0 - 3] [i_0] [i_0] [i_0])) < (((/* implicit */int) var_8)))) ? (((/* implicit */int) arr_6 [i_0 - 3] [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0] [i_0] [i_0 - 1])))))));
                    var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_7)) : (var_4)))) ? (((/* implicit */long long int) ((unsigned int) arr_7 [i_0] [i_0] [i_0]))) : (((long long int) (unsigned short)40200))))));
                }
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    var_14 += ((/* implicit */_Bool) (((_Bool)0) ? (3287881642U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)69)))));
                    var_15 ^= ((/* implicit */unsigned int) max((max((min((((/* implicit */long long int) arr_6 [i_0 - 2] [i_1] [i_3] [i_3])), (-5613732120475738418LL))), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-35))))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 + 1])))))));
                    var_16 += ((/* implicit */short) var_8);
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */int) var_4);
                }
                var_17 ^= ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25303)))))))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((var_6) && (((/* implicit */_Bool) var_9))))) == (((/* implicit */int) min((var_8), (arr_8 [i_1])))))))));
            }
        } 
    } 
}
