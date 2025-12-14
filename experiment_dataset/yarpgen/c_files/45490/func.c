/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45490
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_6)))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) min(((_Bool)1), (arr_0 [i_0] [i_0])))), (arr_7 [10U] [10U] [10U] [i_2] [i_3] [i_2]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(signed char)4] [(unsigned char)1] [4] [i_0]))))))));
                                var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) 4294967295U))), (((((/* implicit */int) ((signed char) arr_7 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [13U] [8U]))) - (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_3 [i_1] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_0] = var_5;
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0] [9ULL]))));
            }
        } 
    } 
}
