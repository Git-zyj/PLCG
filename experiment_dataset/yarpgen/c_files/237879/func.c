/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237879
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) min((arr_3 [i_1]), (((/* implicit */short) arr_2 [i_0] [i_1])))))), ((-(((/* implicit */int) arr_2 [10ULL] [i_1]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_14 ^= ((/* implicit */signed char) var_13);
                            arr_9 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(min((2147483647), (var_3)))))), (var_12)));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [14] [(unsigned char)14]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (min((var_2), (((/* implicit */unsigned int) (_Bool)0)))))), (((unsigned int) ((((/* implicit */_Bool) (unsigned short)5910)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    var_17 = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((20020342280928707ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))), (var_11));
}
