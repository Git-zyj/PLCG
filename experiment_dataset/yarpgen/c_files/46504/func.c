/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46504
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 1864010554U)) : (-8539405297277338842LL)))) && (((((/* implicit */_Bool) 9223372036854775791LL)) || (((/* implicit */_Bool) (unsigned char)1)))))))));
                    arr_6 [i_1] [i_2] = ((/* implicit */signed char) min((arr_1 [i_2]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)203)) && (((/* implicit */_Bool) arr_3 [i_0])))))));
                    arr_7 [i_1] [i_0] [i_1] [i_2] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (signed char)-95))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)187)) / (((/* implicit */int) (signed char)32))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)1581))) / (arr_0 [i_0] [i_1])))) : ((+(arr_3 [i_2]))))));
                    var_21 += ((/* implicit */unsigned char) (~(2147483647)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((16512753226109555128ULL), (((/* implicit */unsigned long long int) (~(var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) < (var_4)))))))));
    var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((var_0) ? (var_8) : (((/* implicit */int) var_18))))))) && (((((/* implicit */_Bool) (short)7080)) || (((/* implicit */_Bool) ((signed char) var_16)))))));
    var_24 = ((/* implicit */long long int) var_15);
}
