/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44308
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) && (((/* implicit */_Bool) arr_1 [i_0 - 1]))))), (((((unsigned long long int) (unsigned char)255)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244)))))));
                    var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (((arr_0 [i_1 - 3] [i_1 + 3]) - (arr_0 [i_1 - 3] [i_1 + 3])))));
                    var_15 = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_2 - 2] [i_0 + 1]));
                    var_16 = ((/* implicit */unsigned char) arr_3 [i_1 - 3] [i_0 - 2]);
                }
            } 
        } 
    } 
    var_17 = (!(((/* implicit */_Bool) 2535022925U)));
    var_18 = ((/* implicit */_Bool) ((long long int) var_8));
    var_19 |= ((/* implicit */long long int) ((171445731870996601LL) == (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned char)249)), (min((var_4), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_0)), (var_11))))))));
}
