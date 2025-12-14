/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238143
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16232))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 4294967280U)) / (var_13)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16241)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (signed char)16))))))))) : (max(((+(3387203559097147771ULL))), (var_14)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_2 - 2])) ? (((/* implicit */int) var_1)) : (-1995743208))) + (2147483647))) << (((((/* implicit */int) arr_3 [5U] [i_0 + 1] [i_0])) - (101))))))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_14)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) arr_0 [i_2 - 1] [i_0 + 2])))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (arr_2 [i_1 - 4]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) (signed char)-33)) ? ((~(var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))))));
}
