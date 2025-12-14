/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224025
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (0LL)))), (min((13821911034161764810ULL), (((/* implicit */unsigned long long int) -27LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5LL)) ? (var_13) : (max((((/* implicit */unsigned int) (unsigned char)179)), (var_13))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) min((4LL), (max((0LL), (((/* implicit */long long int) ((signed char) var_4)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((var_15), (max((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)11197)) : (((/* implicit */int) (unsigned char)1)))), (981525206))), ((~(((/* implicit */int) var_2))))))));
    var_16 &= ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (unsigned char)121))));
                var_18 *= ((/* implicit */signed char) ((((unsigned int) -1LL)) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                arr_15 [i_3] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 0U)) % (6035113507137514705ULL)));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (signed char)-95))));
                arr_16 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)9))));
            }
        } 
    } 
}
