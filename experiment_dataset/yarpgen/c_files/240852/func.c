/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240852
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
    var_20 = ((/* implicit */unsigned int) (~(var_3)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) var_3);
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                            {
                                var_22 += ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0] [i_3]);
                                var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-3035290506419106285LL)));
                            }
                            var_24 = ((/* implicit */short) (~(((((/* implicit */_Bool) 7027662795317419942LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((var_0), (((/* implicit */long long int) var_8))))))));
                        }
                    } 
                } 
                arr_13 [i_0 + 1] [i_1] [i_1] = ((/* implicit */short) var_14);
                var_25 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11320))) > (var_11))))) / (11818114042424798465ULL))), (((((/* implicit */_Bool) arr_9 [5] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (var_12) : (var_16)))));
            }
        } 
    } 
}
