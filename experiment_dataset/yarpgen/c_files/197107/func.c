/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197107
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
    var_11 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) (unsigned char)174)), (var_3))))))) || (((/* implicit */_Bool) var_9))));
    var_12 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_0))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (268369920) : (((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (unsigned char)86))));
                var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)-1)), (0ULL)));
                var_15 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (signed char)-27)))) ? (((((/* implicit */_Bool) 11287088273366218082ULL)) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1 + 1]))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) != (((/* implicit */int) (signed char)7)))))));
                var_16 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) var_10)) <= (arr_3 [i_1 + 1])))), (arr_3 [i_1 - 1])));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_7), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-4)), (var_1)))) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)147)) <= (-1089939118)))))))));
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_5))));
}
