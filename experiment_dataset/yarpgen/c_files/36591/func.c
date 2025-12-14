/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36591
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
    var_10 |= ((/* implicit */short) (((-(((1947003774991751890ULL) ^ (((/* implicit */unsigned long long int) 134217727)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_11 ^= ((/* implicit */unsigned char) 25013099);
    var_12 = ((/* implicit */unsigned int) (unsigned short)50441);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned char) (-(max((arr_5 [(_Bool)1] [i_0] [i_0 + 1] [i_4 - 3]), (((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100)))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_4] [(short)3] [i_3] = ((/* implicit */unsigned char) ((min((((((/* implicit */int) arr_11 [i_0] [i_4] [i_2] [i_4] [i_4] [i_2])) | (var_5))), (((/* implicit */int) var_1)))) <= (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))));
                                arr_14 [10ULL] [i_2] [i_2] [i_2] [i_3] [i_4] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_0 - 1] [i_4 - 3])) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_6) % (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -816821370)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_8 [i_0] [i_0] [(unsigned short)9] [(_Bool)1]))))))));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)1792)), (var_5))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (short)-14892))));
            }
        } 
    } 
}
