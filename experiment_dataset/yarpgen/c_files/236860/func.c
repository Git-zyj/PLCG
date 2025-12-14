/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236860
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
    var_10 = var_6;
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_11 -= ((/* implicit */signed char) var_3);
                    arr_8 [i_2] [i_1] [i_0] [i_0] &= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_1 + 2] [i_2]))) * (arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2]))) / (((((/* implicit */_Bool) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) 4261106110U)) : (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (arr_7 [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_3] = arr_0 [i_2] [i_2];
                        var_12 = ((/* implicit */short) min((arr_3 [i_0] [i_0] [i_2]), (min((var_3), (((/* implicit */unsigned long long int) arr_2 [i_3 - 2] [i_3] [i_3]))))));
                        var_13 = ((/* implicit */short) (signed char)-120);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_1 + 1] [i_4])) ? (((/* implicit */int) arr_0 [i_0] [i_3])) : (((/* implicit */int) (signed char)106))));
                            var_14 = ((/* implicit */unsigned int) ((var_0) ? (arr_12 [i_1] [i_0] [i_1 - 1] [i_3] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3])))));
                            var_15 -= ((/* implicit */unsigned int) (-2147483647 - 1));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-9633))) * (arr_18 [i_0] [i_0] [i_2] [i_0] [i_3] [i_0])))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_0])))) * (8548226915463127606ULL)))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)28962)) : (((/* implicit */int) var_1))));
                        }
                    }
                    var_16 = ((/* implicit */unsigned int) (_Bool)1);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_8);
}
