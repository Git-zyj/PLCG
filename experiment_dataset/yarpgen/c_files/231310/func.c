/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231310
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
    var_12 += ((/* implicit */signed char) var_1);
    var_13 = ((/* implicit */long long int) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29758))) < (var_4))) ? (((((/* implicit */_Bool) -3555716223888536421LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) : (((int) var_6)))), (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned short) var_2)), (var_8)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_1] [(unsigned char)11] [(_Bool)1] [i_2 - 3] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((arr_9 [i_2]), (((/* implicit */long long int) arr_0 [17] [i_1 - 1])))), (((/* implicit */long long int) arr_12 [i_0] [(signed char)7] [i_1 + 1] [(signed char)1] [i_2 - 2] [i_1 - 1]))))) ? (max((((/* implicit */int) max(((unsigned short)29758), (((/* implicit */unsigned short) (unsigned char)130))))), (max((arr_4 [i_0] [8] [i_2 + 1] [11ULL]), (((/* implicit */int) var_6)))))) : (((/* implicit */int) var_5))));
                                arr_15 [i_1] [i_2 - 1] [i_2] [(_Bool)1] [2] = ((/* implicit */_Bool) ((short) ((((arr_10 [i_1]) < (((/* implicit */int) arr_0 [i_0] [i_3])))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)127)), (arr_4 [i_4] [i_3] [(short)4] [5])))))));
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((short) var_11)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) min((arr_2 [i_1 - 1] [i_2 + 2]), (((/* implicit */unsigned long long int) var_10))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) 3555716223888536420LL);
}
