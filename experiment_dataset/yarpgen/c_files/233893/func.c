/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233893
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16382)) ? ((~(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)16396)) != (((/* implicit */int) arr_6 [i_1 - 2])))))) : ((+(((((/* implicit */_Bool) var_3)) ? (-912559041420006280LL) : (arr_2 [i_1])))))));
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) arr_1 [i_0] [(signed char)19]))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((+(max((((/* implicit */unsigned int) var_2)), (var_7)))))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16393))) * (((((arr_7 [i_3 + 2]) != (((/* implicit */int) arr_11 [i_2])))) ? (((/* implicit */unsigned int) arr_8 [i_3 - 1] [i_3 + 1])) : (769637578U)))));
                    var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (arr_12 [i_4] [i_4] [i_4])))))) ? (((/* implicit */unsigned long long int) min((((arr_6 [i_2]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) arr_12 [i_3] [i_3 + 2] [i_3 + 2]))))) : (min((arr_10 [i_3 - 1] [i_3 + 2] [i_3 - 1]), (min((((/* implicit */unsigned long long int) var_10)), (var_3)))))));
                }
            } 
        } 
    } 
}
