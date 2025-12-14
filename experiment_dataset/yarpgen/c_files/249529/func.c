/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249529
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
    var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)16307)) && ((_Bool)1))), (((((/* implicit */unsigned long long int) var_12)) < (((((/* implicit */_Bool) var_12)) ? (48ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 2])) / (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2]))))) ? (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */unsigned long long int) var_12)) + (48ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) : (((((((/* implicit */_Bool) (signed char)61)) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) 828370065U)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6))))))))));
                arr_4 [i_0] [i_1] = max(((signed char)47), (((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        for (short i_3 = 2; i_3 < 23; i_3 += 1) 
        {
            {
                var_17 -= ((/* implicit */short) (((+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9))))))) != (max((((/* implicit */int) max((var_10), (((/* implicit */short) (signed char)-12))))), ((+(((/* implicit */int) (unsigned short)33868))))))));
                arr_9 [i_3] = ((/* implicit */signed char) max(((+(((((/* implicit */int) arr_8 [i_3] [i_3] [i_3])) | (((/* implicit */int) (short)1023)))))), ((~(((/* implicit */int) arr_5 [i_3 - 2]))))));
                var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)12)))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)33861))))))) ? (((/* implicit */int) var_5)) : (min(((~(((/* implicit */int) (signed char)-87)))), (((/* implicit */int) ((((/* implicit */_Bool) 2054357469U)) || (((/* implicit */_Bool) var_12)))))))));
}
