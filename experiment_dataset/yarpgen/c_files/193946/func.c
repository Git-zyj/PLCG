/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193946
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
    var_15 = (-(var_10));
    var_16 -= ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (arr_2 [i_1]))) / (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (var_0) : (((/* implicit */int) var_13))))) : ((-(((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11530)))))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_0 [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))));
                            arr_11 [i_0] [i_0] [1LL] [i_3] [i_0] = ((/* implicit */unsigned int) (signed char)-100);
                            var_20 = ((/* implicit */int) max((var_5), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_0] [12] [i_3]))))) ? (((((/* implicit */int) arr_3 [i_0] [i_3] [i_3])) | (((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                            arr_12 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((long long int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-107)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) (~((~(min((((/* implicit */unsigned int) arr_6 [i_0])), (4024424838U)))))));
            }
        } 
    } 
    var_22 -= ((/* implicit */long long int) ((max((((var_7) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) var_6)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 10715548221068017209ULL))))))));
}
