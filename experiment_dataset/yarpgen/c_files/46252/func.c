/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46252
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max(((unsigned char)51), (((/* implicit */unsigned char) var_8)))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) : (max((((/* implicit */long long int) 4104194420U)), (var_0)))))) ? (((((/* implicit */_Bool) 190772875U)) ? (0ULL) : (15649359875648441176ULL))) : (max((max((var_3), (((/* implicit */unsigned long long int) (short)8775)))), (max((var_3), (((/* implicit */unsigned long long int) var_1))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_21 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [i_1 + 4] [i_0 - 2])) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_0 - 2])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_0 + 1])))), (((/* implicit */int) max((arr_4 [i_1 - 1] [i_0 + 1]), (((/* implicit */short) (unsigned char)51)))))));
                    var_22 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [8LL] [i_2]))) : (4104194421U)))), (arr_0 [i_0]))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1 + 4] [(short)13]))) : (arr_5 [i_2]))) : (max((arr_1 [i_2]), (arr_0 [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_23 = arr_6 [(signed char)16] [i_2] [i_1 + 4];
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_7 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (max((arr_7 [i_0 - 2] [i_0 - 1]), (arr_7 [i_0 - 1] [i_0 - 1]))) : (((arr_7 [i_0 + 1] [i_0 + 1]) | (arr_7 [i_0 - 1] [i_0 + 1])))));
                            }
                        } 
                    } 
                    var_25 = ((((/* implicit */_Bool) arr_9 [i_0] [18ULL] [i_2] [i_1])) ? (((((/* implicit */_Bool) arr_14 [i_1 + 4] [17ULL] [i_1] [i_1] [i_1 + 4])) ? (max((3693427657841488989ULL), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 + 2] [i_2] [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13203851294011532071ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23601))) : (arr_14 [(short)11] [5ULL] [i_1] [i_1] [(short)11])))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208))) | (7128594635322009263ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [18U] [18U] [i_2])), (arr_13 [i_0 + 1] [i_0 + 1] [i_1 + 3] [i_2] [i_2])))) : (max((((/* implicit */unsigned long long int) arr_15 [i_0 + 1])), (arr_8 [i_0] [i_1 + 4] [i_0] [i_2]))))));
                }
            } 
        } 
    } 
    var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((max((((/* implicit */unsigned int) var_9)), (4104194421U))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10))) : (var_2)))))) : (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (var_18)))) >= (var_6))))));
    var_27 = ((/* implicit */short) ((max((((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)31083)) : (((/* implicit */int) var_8))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
}
