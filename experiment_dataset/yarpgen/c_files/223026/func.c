/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223026
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [8U] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 3])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 3]))))) ? (((int) ((((/* implicit */_Bool) 9151614437509681876ULL)) ? (9151614437509681867ULL) : (9151614437509681882ULL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10))))))))));
                    var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 9151614437509681893ULL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 2] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (arr_3 [i_1 - 2] [i_1] [i_2]))))));
                    var_16 = ((/* implicit */int) min((var_16), ((+(((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1] [(short)6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) == (((/* implicit */int) var_3)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((min((var_5), (((/* implicit */unsigned long long int) var_14)))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (9151614437509681881ULL))))) << (((min(((-(9295129636199869729ULL))), (((/* implicit */unsigned long long int) var_1)))) - (514124803023790938ULL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            {
                var_18 *= ((/* implicit */unsigned int) min((((((/* implicit */int) arr_11 [i_3] [i_4] [i_4])) % (((/* implicit */int) var_9)))), (((/* implicit */int) max((arr_12 [i_3] [i_4]), (((/* implicit */short) var_9)))))));
                var_19 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_4])) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) var_0))))), (((9295129636199869755ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (min(((+(9151614437509681876ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_3] [i_4] [i_3])) == (var_4))))))));
            }
        } 
    } 
}
