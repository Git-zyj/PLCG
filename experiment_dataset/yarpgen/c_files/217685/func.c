/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217685
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
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -339541028)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(signed char)4] [i_1]))) : (((((/* implicit */_Bool) (unsigned short)58578)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) 18446744073709551612ULL);
                            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (unsigned char)235)) - (229))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (unsigned char)235);
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)20))));
}
