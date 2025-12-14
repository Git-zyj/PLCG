/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230700
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_19 ^= (!(((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_4 - 2])) && (((/* implicit */_Bool) arr_12 [i_0 + 2] [i_4 + 2] [i_4 - 2] [i_4 - 1] [i_4 - 3])))));
                                var_20 += ((/* implicit */unsigned int) (short)6);
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_17))));
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4 - 2] = ((/* implicit */unsigned long long int) ((arr_6 [(unsigned char)4] [i_0] [i_4 - 2]) > ((-(((/* implicit */int) arr_1 [i_3] [i_1]))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2921596101U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [(unsigned char)1] [i_0]))))), (arr_2 [i_0] [i_1] [i_2]))));
                }
                for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    var_23 += ((/* implicit */signed char) arr_6 [i_0] [i_5] [i_5]);
                    arr_17 [13ULL] [13ULL] [i_0] [i_5] = ((/* implicit */short) min((min((((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_5 [i_0 + 2] [i_0] [i_5]))))), ((((_Bool)1) ? (((/* implicit */int) arr_13 [i_1] [i_1])) : (((/* implicit */int) var_5)))))), (((((/* implicit */int) arr_10 [i_0 + 2] [i_5])) & (((/* implicit */int) arr_10 [i_0 + 3] [i_5]))))));
                }
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(2977184098U))))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_9);
}
