/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203063
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) 1066992574829641581ULL);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_14 *= ((/* implicit */int) 599303565U);
                                var_15 += ((/* implicit */unsigned char) 5004819292394292378LL);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((long long int) var_10));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        for (long long int i_6 = 2; i_6 < 8; i_6 += 1) 
                        {
                            {
                                arr_20 [i_5 + 1] [i_5] [i_2] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17548)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : (-5004819292394292379LL)))) ? (((((/* implicit */_Bool) 5004819292394292378LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (5004819292394292378LL))) : (((/* implicit */long long int) ((int) var_6)))))) ? (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_5] [i_6]))) * (arr_16 [i_0] [i_0] [i_1] [i_0] [2] [i_6 - 2])))) : (((/* implicit */unsigned long long int) max((((arr_17 [i_6 + 3] [i_5] [i_5] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [3LL] [(unsigned char)10]))))), (((/* implicit */long long int) max(((unsigned short)1), (((/* implicit */unsigned short) arr_4 [i_0] [i_6]))))))))));
                                arr_21 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((arr_16 [i_1] [i_1] [(_Bool)1] [i_2] [i_1] [i_0]) / (((/* implicit */unsigned int) arr_1 [i_0] [i_1]))))) - (-5004819292394292379LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) ((unsigned char) max((3695663730U), (((/* implicit */unsigned int) var_1))))))));
    var_17 = ((/* implicit */unsigned short) ((signed char) var_4));
}
