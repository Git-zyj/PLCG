/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54270
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
    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (signed char)-1)))))) - (var_4)))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_16))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (((((/* implicit */int) (signed char)0)) | (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) (signed char)22)) : (var_2)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1]))) * (arr_3 [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0])) * (((/* implicit */int) (signed char)22))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (4586590568481847716ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15550525726115294122ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)6))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_7))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))))))));
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) 1781579778682236094LL))));
                            var_24 = ((/* implicit */_Bool) (+(254758671)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */short) var_11);
}
