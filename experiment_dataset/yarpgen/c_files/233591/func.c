/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233591
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
    var_11 = ((((unsigned long long int) ((1099511627775ULL) / (((/* implicit */unsigned long long int) var_9))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((1099511627775ULL) << (((((/* implicit */int) (unsigned char)203)) - (203)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((short) arr_1 [i_0 + 1]))), ((((~(19ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (unsigned char)255)) : (arr_0 [i_0 - 3]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_13 [21ULL] [21ULL] [i_2] [i_3] = ((/* implicit */unsigned char) var_0);
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1)))));
                            }
                        } 
                    } 
                    arr_14 [(unsigned short)4] [i_0] [i_0 + 1] = ((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) > (((/* implicit */int) (unsigned short)65532)))))));
                }
            } 
        } 
    } 
}
