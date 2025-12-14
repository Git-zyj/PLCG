/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232232
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_3 [12ULL] |= ((/* implicit */short) ((((/* implicit */int) ((short) arr_0 [i_0]))) + (min((22), (22)))));
        arr_4 [i_0] = var_8;
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_1] [10U] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [(_Bool)1]) ? (-23) : (((/* implicit */int) (short)-1))))) ? (arr_6 [10]) : (arr_6 [(signed char)2])));
            arr_9 [12LL] [(short)7] = ((/* implicit */short) (~(((/* implicit */int) (signed char)56))));
        }
    }
    var_13 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -49)) : (var_2))))) >> (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-25398))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (var_2)))));
    var_14 = ((/* implicit */long long int) ((short) (_Bool)1));
    var_15 = var_4;
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_16 -= ((/* implicit */unsigned long long int) var_12);
        arr_12 [i_2] = ((/* implicit */unsigned short) ((int) (-(((/* implicit */int) ((short) -29))))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)82)) && (((/* implicit */_Bool) 17))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_10 [i_3])))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) ^ (4294967295U)))));
        var_18 |= ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) >= (-15))) ? (411109023U) : (209975114U)));
    }
    for (long long int i_4 = 1; i_4 < 21; i_4 += 1) 
    {
        var_19 -= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 4030959492U)) : (var_2))));
        arr_18 [i_4 - 1] [(short)10] = ((/* implicit */short) var_1);
    }
}
