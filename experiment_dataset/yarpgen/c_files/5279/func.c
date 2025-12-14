/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5279
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
    var_15 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [9U] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_0] [i_1])), (483699292U)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) % (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) arr_2 [i_0] [i_1])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0]))) * (483699278U)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_12 [(unsigned short)8] [i_1] [i_2] [i_2] [i_2] |= ((/* implicit */int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65))) : (var_9)))) || (((/* implicit */_Bool) -1984609346))))));
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 7))) ? (((/* implicit */unsigned long long int) ((7) - (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3] [i_1])) ? (arr_10 [i_4] [i_1] [i_2 + 1] [i_1] [(unsigned char)6]) : (var_6)))))) && (((/* implicit */_Bool) 483699290U)))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1U)) && (((/* implicit */_Bool) var_13))))) : (29)))) % (((((/* implicit */_Bool) var_6)) ? (5485120774302270543LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_18 &= ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */unsigned int) -1197193060)) : (483699292U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-32755))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
