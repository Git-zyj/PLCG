/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212677
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
    var_12 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_1] = ((/* implicit */unsigned short) var_8);
                                arr_13 [i_4] [i_1] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_6) - (var_6)))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (var_6))))));
                                arr_14 [i_4] [i_4 + 1] [i_3 + 2] [i_2 - 2] [i_1] [i_1] [i_4] = ((/* implicit */signed char) max((((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1)))))));
                                arr_15 [i_0] [i_1] [i_2 - 2] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [21ULL] = ((/* implicit */short) ((((/* implicit */_Bool) min((((var_3) / (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_8))))) ? ((((!(var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11))) : ((-(((var_0) / (var_11)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned short) min(((-(((var_7) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), ((+(((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
        arr_21 [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (var_3) : (((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */int) var_1))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) == (var_3)))))));
    }
    var_13 = ((/* implicit */signed char) var_11);
}
