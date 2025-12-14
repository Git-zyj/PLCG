/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49243
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((2652496980U) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_1)))))))) == ((-(0LL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (short)-17474)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))), (max((((/* implicit */long long int) (-2147483647 - 1))), (0LL)))))))));
                    arr_8 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */short) ((((-2147483629) / (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0 - 1])))) * (((763045513) * (((/* implicit */int) (_Bool)0))))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) 2147483647)) != (arr_3 [i_0] [i_0])))), (arr_3 [i_0 - 1] [i_1]))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_3 [i_1] [i_2]))))))));
                    var_17 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */long long int) arr_2 [i_0 - 1] [i_1])) & (((4LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)17479))))))));
                }
            } 
        } 
    } 
}
