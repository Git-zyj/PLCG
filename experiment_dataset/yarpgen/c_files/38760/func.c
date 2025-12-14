/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38760
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_3] [15] [i_4] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), (max((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)38511)))));
                                arr_17 [i_0] [i_3] [i_2] [i_0] [i_4] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
                                var_11 = ((/* implicit */unsigned int) var_6);
                                arr_18 [i_1] [i_2 + 2] [i_3] = (signed char)107;
                                arr_19 [i_3] [i_1] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) max((var_6), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-23))))) && (((/* implicit */_Bool) var_0)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_25 [i_0] [i_1] [7ULL] [i_5 - 1] [(unsigned char)5] [i_6] [i_2 + 1] = ((/* implicit */short) (-(((((/* implicit */int) arr_8 [i_0])) >> (((/* implicit */int) arr_8 [i_2 + 2]))))));
                                arr_26 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0]))) ^ (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) max(((signed char)-121), (((/* implicit */signed char) var_2)))))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (-((~(var_9))))))));
}
