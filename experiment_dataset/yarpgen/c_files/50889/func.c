/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50889
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
    var_10 = ((/* implicit */long long int) ((((int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (var_4)))) == (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : ((-2147483647 - 1)))) == (((/* implicit */int) ((var_2) > (var_0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_2])), (arr_7 [i_0] [i_1] [i_2] [i_2])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_2])) ? (((/* implicit */unsigned int) var_0)) : (117440512U)))))) ? (((unsigned int) 2147483632)) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0] [i_1])), (813401250))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_11 = ((arr_1 [i_1]) / (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 1844309836)) ? (1844309846) : (((/* implicit */int) (signed char)-64)))))));
                                var_12 = ((/* implicit */unsigned char) min(((-(arr_4 [i_4 - 2]))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1]))));
                                var_13 = min((((arr_1 [i_3 - 1]) ^ (6916101605115168696ULL))), ((~(((var_4) >> (((((/* implicit */int) (signed char)83)) - (31))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 490137290U))))) < ((+(((/* implicit */int) var_3))))))) * (((/* implicit */int) var_3))));
}
