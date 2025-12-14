/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4864
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)12288))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_4)) : (var_7))) : (max((9205723641894825820ULL), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) var_5)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((max((((/* implicit */unsigned int) arr_12 [i_0] [i_4] [i_4 + 2] [i_4 - 3] [i_4] [i_4 - 3] [i_4 + 3])), (arr_11 [i_4] [10ULL] [8ULL] [i_4 + 2] [i_4]))), (arr_11 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 1] [i_4]))))));
                                var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4 - 3] [i_1] [i_1] [10])) ? (((/* implicit */int) (unsigned short)12282)) : (((/* implicit */int) (unsigned short)17105))))) ? (((/* implicit */unsigned long long int) max((arr_5 [i_4 + 2] [i_4 + 2] [i_4 - 1]), (((/* implicit */long long int) var_5))))) : (min((arr_10 [i_3] [i_1] [8U] [(signed char)7]), (var_10))))) <= (9205723641894825820ULL)));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-79))))) : (arr_5 [i_0] [i_0] [i_4 + 3]))))))));
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((6659727168156819448ULL), (((/* implicit */unsigned long long int) (signed char)82)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (max(((~(var_10))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) arr_10 [i_2] [i_0] [i_1] [i_2]))), (min((((/* implicit */long long int) (unsigned short)65535)), (2677749852436590088LL))))))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) 0U))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned short)13)), (var_10))) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)6144)), (var_8)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))))));
    var_19 = var_5;
    var_20 = ((/* implicit */int) max((var_8), (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)0)) << (((var_3) + (77997270))))))))));
}
