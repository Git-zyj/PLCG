/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193539
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
    var_10 = (+(((/* implicit */int) var_5)));
    var_11 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 3] [i_1 + 3] [i_1])) ? (arr_6 [i_1] [i_1 - 1] [i_1 + 1] [(unsigned char)14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (var_8)));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = var_3;
                                arr_12 [(unsigned char)12] [i_1] [(unsigned char)0] [(unsigned char)12] [i_1] = (+(((/* implicit */int) (_Bool)0)));
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64053)) && (((/* implicit */_Bool) arr_5 [11ULL] [11ULL] [i_3] [i_4])))))))) ? (((((arr_5 [i_0] [i_0] [13U] [i_3]) <= (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_3)) : (1517460957425165937ULL))) : (((/* implicit */unsigned long long int) arr_0 [i_2])))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)32767)) + (((/* implicit */int) var_4)))) % (var_3)))))))));
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                                arr_14 [i_1] [i_1] = ((/* implicit */signed char) ((arr_4 [i_1] [i_1] [i_3]) - (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
