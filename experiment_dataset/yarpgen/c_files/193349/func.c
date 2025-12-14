/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193349
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) 1046029643456487940LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (982559246U))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((long long int) 536870911LL))));
                    arr_12 [i_0 - 1] [8LL] [i_2] [i_2] = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_15 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 982559243U))));
                        arr_16 [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0 + 3] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_0] [i_2] [i_2] [4ULL]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            var_16 = var_7;
                            var_17 -= ((unsigned long long int) var_13);
                        }
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            arr_22 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)168))));
                            var_18 = ((/* implicit */long long int) ((((unsigned long long int) (unsigned char)77)) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 982559266U)) / (2614591306005464307LL))))));
                        }
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3])) * (((/* implicit */int) arr_14 [i_0] [i_0 + 3] [i_1] [i_0 + 3] [i_2] [i_3])))))));
                    }
                }
            } 
        } 
    } 
}
