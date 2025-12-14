/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205283
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
    var_17 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)-95)))) + (((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) ((unsigned char) ((unsigned short) var_8))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [(signed char)18] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) var_12))) % (((((/* implicit */int) arr_2 [i_1])) << (((((/* implicit */int) (unsigned short)56583)) - (56581)))))))) ? (((((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26013))) : (9223372036854775807LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (unsigned char)91)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)30)))))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_16))))) & (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (unsigned char)127))) ^ (((/* implicit */int) ((unsigned short) (unsigned char)128)))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) (unsigned char)127))), (((unsigned char) (signed char)88)))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 3973271404U)))) & (max((var_2), (((/* implicit */unsigned int) var_14))))))));
    var_20 = ((/* implicit */unsigned int) ((short) (unsigned char)13));
    var_21 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)74))))), (((((/* implicit */_Bool) var_8)) ? (1431148972513201872ULL) : (0ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)127)) / (((/* implicit */int) (short)255))))), (((long long int) (unsigned char)41)))))));
}
