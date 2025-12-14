/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204282
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
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((10772514876771545546ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 4897268247405680173LL)) ? (var_2) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))) == (arr_1 [i_0] [i_1])))) : (((/* implicit */int) ((signed char) (-(7674229196938006069ULL)))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_4 [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 4; i_2 < 11; i_2 += 2) 
    {
        for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            {
                arr_12 [i_2] |= ((/* implicit */_Bool) min((arr_4 [i_2]), (((/* implicit */unsigned short) min((((signed char) var_14)), (arr_5 [i_3 - 2] [i_3 + 1] [i_3]))))));
                var_18 -= ((/* implicit */unsigned short) arr_7 [i_3 - 2] [i_2]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_8);
    var_20 = ((/* implicit */int) var_13);
}
