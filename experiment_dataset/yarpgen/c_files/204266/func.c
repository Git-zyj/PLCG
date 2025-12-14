/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204266
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_14 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)0)), (12180877971201555048ULL)));
                            arr_12 [i_3] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1])))) ? (arr_4 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_0] [i_2] [i_0]), (14U))))));
                            var_15 += ((/* implicit */_Bool) max((20U), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2477945953U)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3])))))) ? (400844978U) : (arr_0 [i_0] [i_0])))));
                            var_16 += ((/* implicit */short) ((max((400844978U), (14U))) ^ (max((((/* implicit */unsigned int) (unsigned short)61157)), (2477945953U)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((400844978U), (((((/* implicit */_Bool) var_13)) ? (3659029656U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))) ? (1795551768) : (((/* implicit */int) (unsigned short)24229))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_0);
    var_19 = ((/* implicit */signed char) (unsigned short)4372);
}
