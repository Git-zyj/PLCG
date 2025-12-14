/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243429
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
    var_19 = ((/* implicit */int) -18014398509481984LL);
    var_20 = ((/* implicit */_Bool) var_14);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [1LL] [i_1] [(unsigned char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_1] [i_2]), (arr_3 [i_0] [i_0] [i_0])))) ? ((-(11279468866348821555ULL))) : (((/* implicit */unsigned long long int) (+(var_4))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_1]))));
                                arr_15 [i_0] [i_0] [i_2] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [(short)6] [i_2] [i_0])) > (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3] [i_4])) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned short)65535))))));
                                arr_16 [i_0] [i_0] [(unsigned char)4] [i_1] [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) -1974462496)) | (max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (-744328143702014826LL)))), (max((((/* implicit */long long int) (unsigned char)226)), (-744328143702014826LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
