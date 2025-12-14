/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229582
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
    var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_14))))));
    var_18 += ((/* implicit */int) ((((/* implicit */_Bool) (~(max((var_6), (((/* implicit */unsigned int) var_16))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)37994))))) != (var_15))))) : (var_3)));
    var_19 = ((/* implicit */long long int) ((6932242079368883051LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5661)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 6; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [(_Bool)1] [(unsigned short)9] = ((/* implicit */int) (unsigned char)100);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        arr_12 [i_3] [i_2] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */int) arr_0 [i_0]);
                        arr_13 [i_0 - 1] [i_3] = ((/* implicit */unsigned short) (~((~(var_6)))));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_3 - 2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -6932242079368883051LL)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] = ((/* implicit */long long int) min((var_9), ((_Bool)1)));
                                var_20 = (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned short)2496)), (arr_9 [i_2] [i_4]))) | (((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_9 [i_2] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) var_13)))))), (min((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)42394)) : (((/* implicit */int) var_7)))))))));
}
