/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240829
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
    var_17 = ((/* implicit */short) min(((unsigned char)222), (((/* implicit */unsigned char) (signed char)-63))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) (((-(((arr_1 [(short)12]) - (((/* implicit */unsigned long long int) 4161536)))))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)252)))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */int) arr_8 [13ULL] [i_4 - 1] [13ULL] [i_4 - 1] [i_4 + 4])) >> (((((/* implicit */int) arr_8 [i_4 - 1] [i_4 - 1] [i_4] [16LL] [i_4 + 4])) - (163))))) & (((/* implicit */int) arr_8 [i_3] [i_4 - 1] [(short)15] [(signed char)4] [i_4 + 4]))));
                                arr_12 [i_0] [i_1] [(short)21] [i_3] [(unsigned short)7] [i_3] [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -4161532)))))) != (max((((/* implicit */unsigned long long int) (signed char)-63)), (288230376151711736ULL)))))), (((((((/* implicit */int) var_11)) | (((/* implicit */int) arr_6 [i_0] [i_3] [i_1] [i_0])))) * (((/* implicit */int) min(((unsigned short)37666), (((/* implicit */unsigned short) arr_5 [i_0] [i_0])))))))));
                                var_20 -= ((/* implicit */unsigned long long int) 4161533);
                                arr_13 [22] [i_0] [i_2] [i_3] [16ULL] = ((((((((/* implicit */_Bool) arr_4 [i_0] [(short)9])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_2] [14U] [11ULL] [i_2])))) & (((/* implicit */int) ((((/* implicit */int) (short)15872)) != (((/* implicit */int) (short)248))))))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16384)) && (((/* implicit */_Bool) 58720256))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) (~(arr_3 [i_0] [i_0])));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) -58720240);
}
