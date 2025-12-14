/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24520
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_2;
        var_18 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((max((((/* implicit */int) (signed char)110)), (var_12))) >> (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)52386)) : (((/* implicit */int) var_3)))) - (52383)))))) | (var_13)));
        var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned int) 25836786U))) ? (var_0) : (((/* implicit */unsigned long long int) var_5)))), (arr_0 [i_0])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-111))) <= (((((/* implicit */_Bool) 2186137277U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58101)) ? (((/* implicit */int) (signed char)-88)) : (var_12)))) : (min((((/* implicit */long long int) (unsigned short)41138)), (arr_5 [(unsigned short)9] [i_1])))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)7437))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_10 [(_Bool)1] [i_2] = ((((((/* implicit */_Bool) (unsigned short)23899)) ? (((/* implicit */unsigned long long int) -9152324686985171552LL)) : (var_13))) >> (((((/* implicit */int) ((short) (short)-20335))) + (20340))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41138)) ? (((/* implicit */int) (short)16560)) : (((/* implicit */int) (short)-32493))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 13314894948356295521ULL)))) & (min((var_0), (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) -9223372036854775789LL))));
    }
    var_22 = ((/* implicit */long long int) var_15);
}
