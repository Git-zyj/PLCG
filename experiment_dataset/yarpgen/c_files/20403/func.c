/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20403
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */unsigned long long int) (+(32768U)));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((_Bool) var_18)) ? (((/* implicit */unsigned long long int) (((-(-7194031741516900595LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 3] [i_1 + 3])))))) : (min((((((/* implicit */_Bool) var_13)) ? (0ULL) : (((/* implicit */unsigned long long int) var_8)))), (arr_0 [i_1 + 2] [i_1 + 3]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_15))));
    var_22 = ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) min((((/* implicit */long long int) var_12)), (var_18)))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_12 [i_2] [i_3] [i_3] [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12722))) ^ (3770768118U));
                    arr_13 [i_2] [4ULL] [i_3] [i_4] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) arr_2 [i_3] [8LL])), (var_7)))) & (((((/* implicit */_Bool) 941865090U)) ? (((/* implicit */int) (unsigned short)52813)) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_4]))))))) + (max((arr_7 [i_2]), (((/* implicit */unsigned long long int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6144)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 16; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_19 [i_5] [9LL] [(short)17] = ((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)11240)) || (((/* implicit */_Bool) var_6))))), ((unsigned char)0)))), (((((/* implicit */_Bool) arr_18 [i_5 + 2])) ? (((/* implicit */int) (short)5079)) : (((/* implicit */int) arr_18 [i_5 + 2]))))));
                var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_5 - 1])) ? (arr_16 [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) ^ (((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)-5079)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_11 [i_5 + 1])))))))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_17)), (274877906943LL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (4018478201U)))) : ((+(arr_5 [i_5 + 1])))));
            }
        } 
    } 
}
