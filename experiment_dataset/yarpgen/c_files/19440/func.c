/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19440
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
    var_20 = ((/* implicit */unsigned char) 0ULL);
    var_21 &= ((/* implicit */int) var_13);
    var_22 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_1]))))) <= (2097151))))));
                var_24 = ((/* implicit */int) 0ULL);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)4] [i_3]))));
                                var_26 = ((/* implicit */_Bool) min((min((max((0ULL), (((/* implicit */unsigned long long int) -2097151)))), (((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_4 + 3])) * (((/* implicit */int) arr_5 [i_4 + 3])))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) arr_11 [i_0 - 1] [i_0 - 2]);
                    var_28 = ((/* implicit */unsigned char) min((arr_11 [i_1] [2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) (unsigned char)117)) : ((+(2097151))))))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) arr_8 [i_5] [i_1] [i_1] [i_1] [i_0 - 2]);
                    arr_16 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 + 1])) + (((((/* implicit */int) (signed char)-64)) + (((/* implicit */int) (unsigned char)105))))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) var_6))));
}
