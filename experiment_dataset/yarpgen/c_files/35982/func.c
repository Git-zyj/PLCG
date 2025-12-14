/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35982
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)255)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (2635318277U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (2635318247U)))))))) : (min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) (unsigned short)32736)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2635318277U)))))));
    var_12 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32800)) ? (1659649004U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) 1659649018U)) ? (((/* implicit */int) (unsigned short)32716)) : (((/* implicit */int) (_Bool)0)))));
                arr_6 [i_1] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) (signed char)109))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)205)) && (((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) 7734717908021266712ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))) << (((((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1 - 2])) ? (((/* implicit */int) (unsigned short)35657)) : (((/* implicit */int) var_9)))) - (35614)))));
                var_15 *= ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)59))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)61230)), (arr_5 [i_0 + 3] [i_1 - 1] [i_1 - 1]))) : (((/* implicit */unsigned long long int) max((arr_0 [i_1]), (((/* implicit */int) (signed char)64))))))) >> (((((((((/* implicit */_Bool) var_1)) ? (((long long int) (-9223372036854775807LL - 1LL))) : (((/* implicit */long long int) (~(arr_0 [i_0])))))) - (-9223372036854775757LL))) + (83LL)))));
                arr_7 [i_0] = ((/* implicit */unsigned char) (-(min((10712026165688284901ULL), (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0 - 1] [i_0]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((393216U), (((/* implicit */unsigned int) var_7)))))));
}
