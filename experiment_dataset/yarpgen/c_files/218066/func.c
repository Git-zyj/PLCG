/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218066
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
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (short)10746);
                var_17 = ((/* implicit */unsigned int) arr_2 [i_0]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)37066)) ? (((/* implicit */int) (short)1811)) : (-341319659))))));
                                arr_12 [i_3] [i_3] [i_0] [i_3] [5] [i_3] [(unsigned char)5] = ((/* implicit */unsigned char) min((3504140020U), (((/* implicit */unsigned int) (short)-7676))));
                                var_19 = arr_5 [i_1] [i_2] [i_3] [i_4];
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_1 - 3] [(_Bool)1]))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1831))) - (((((/* implicit */_Bool) arr_5 [(signed char)1] [i_0] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) var_6)) : (var_1))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100)))));
}
