/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31071
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
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) max((var_6), (((/* implicit */int) var_4))))), (arr_5 [i_0 - 2] [i_0 - 2]))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    arr_9 [i_1] = ((/* implicit */signed char) max(((+(arr_5 [i_0] [i_2 - 1]))), (min((arr_5 [i_0 - 1] [i_0 + 2]), (arr_5 [i_0] [i_0 - 2])))));
                    var_11 = ((/* implicit */unsigned long long int) var_5);
                }
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_1]) : (arr_3 [i_0])))) ? (min((var_8), (arr_5 [i_1] [i_0 + 1]))) : (arr_3 [i_0])));
                var_13 = ((/* implicit */int) arr_5 [i_0 - 2] [i_1]);
                /* LoopNest 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((short) max((arr_16 [i_0 + 1] [i_3] [i_0 + 2] [i_3] [i_5]), (((/* implicit */short) ((signed char) arr_16 [i_0] [i_3] [i_4] [i_3] [i_0]))))));
                                var_14 += ((/* implicit */signed char) max(((short)26406), (((/* implicit */short) (signed char)-39))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (signed char)-75);
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_1), (((/* implicit */signed char) (!(var_0))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))));
    var_17 = var_4;
}
