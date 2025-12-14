/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234577
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
    var_19 = ((/* implicit */unsigned short) (short)6144);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) var_6);
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) var_1)) ? (min((var_14), (((/* implicit */unsigned int) -2147483631)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)910))))), (arr_0 [i_2 - 3])));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (short i_5 = 1; i_5 < 18; i_5 += 3) 
            {
                {
                    arr_19 [i_3] [i_5] [i_4] [i_3] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) -26)) && (((/* implicit */_Bool) (short)-6116))))));
                    var_21 ^= ((/* implicit */unsigned short) (-(((((13783450446279883273ULL) & (((/* implicit */unsigned long long int) -1LL)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */int) var_7)))))))));
                    arr_20 [(signed char)6] [i_4] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((4) | (((/* implicit */int) (short)32752)))))) ? (((/* implicit */unsigned long long int) ((((1997279842U) ^ (4294967287U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_12 [(short)12]))))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-2151)), (var_17)))), ((~(10604759969095917008ULL)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) var_6);
    var_23 = ((/* implicit */_Bool) ((int) min((min((((/* implicit */unsigned long long int) var_8)), (var_3))), (((/* implicit */unsigned long long int) var_14)))));
}
