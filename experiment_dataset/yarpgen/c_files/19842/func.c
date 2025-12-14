/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19842
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) var_13);
                var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_3 [i_1] [i_0] [i_0])) / (var_6))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) (signed char)-19)))))))));
                var_17 = ((int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-13)) - (((/* implicit */int) (unsigned char)0))))) ? (max((var_12), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) >= (((/* implicit */int) (signed char)106))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) max((var_9), (max((min(((unsigned short)14415), (((/* implicit */unsigned short) (short)19409)))), (arr_11 [0] [(unsigned char)19] [i_1] [i_1])))));
                                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [4ULL] [i_1 + 1] [i_2 + 1])) & (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_2 - 1]))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_3] [i_2] [i_0])) != (((/* implicit */int) var_3))))), ((-(var_13)))))));
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) (unsigned char)87))), (arr_4 [i_1 - 1] [i_1 + 1] [i_2 - 1])))), ((-(((/* implicit */int) (_Bool)1))))));
                                var_19 -= ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (signed char)106)))), (((/* implicit */int) arr_8 [i_0] [(signed char)14] [i_3] [i_4]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((short) var_6));
    var_21 = var_2;
}
