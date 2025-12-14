/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192463
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
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */int) arr_4 [i_0] [i_1]);
                var_10 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_8) + (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1])))))) : (((var_0) + (arr_2 [i_0]))))), (((/* implicit */unsigned long long int) max((arr_7 [i_1] [i_0 - 3] [i_0 - 3]), (arr_7 [i_0] [i_0 - 1] [i_0]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) var_7);
                                arr_17 [i_2] = ((/* implicit */_Bool) min((((((var_5) <= (((/* implicit */long long int) var_4)))) ? (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) arr_9 [i_1 + 1] [i_0 - 2] [i_4 + 2] [i_3])))), (((/* implicit */long long int) ((short) min((arr_10 [i_0] [i_1] [i_2]), (((/* implicit */long long int) var_9))))))));
                                arr_18 [i_2] [i_2] [i_2] [i_4] [i_3] [i_3] [i_3] = (!(((/* implicit */_Bool) var_1)));
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0 - 2] [i_4 + 2])))) + (max((arr_2 [i_0 - 1]), (((/* implicit */unsigned long long int) var_1))))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)188);
                arr_20 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_0 - 3]), (arr_2 [i_0 - 4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)188)), (arr_4 [i_0] [i_1])))))))) : (arr_16 [10ULL] [10ULL] [i_1] [10ULL] [i_1])));
            }
        } 
    } 
    var_13 += ((/* implicit */long long int) (unsigned char)21);
}
