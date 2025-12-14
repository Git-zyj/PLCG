/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231699
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0 - 1] [i_0 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0])))) : (((long long int) (~(((/* implicit */int) var_10)))))));
        var_12 *= ((/* implicit */unsigned int) arr_1 [18]);
        arr_3 [i_0] = ((/* implicit */short) arr_2 [(signed char)21] [3U]);
        var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)16]))) : (((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [24U]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
    }
    for (int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        var_14 &= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_1 + 2])) ? (arr_7 [i_1 - 1]) : (arr_7 [i_1 + 3]))));
        arr_9 [i_1] = ((/* implicit */signed char) (+(11U)));
    }
    var_15 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    arr_18 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) ? (max((var_2), (((/* implicit */long long int) 2070631414)))) : (((/* implicit */long long int) 4294967295U))))) ? (((/* implicit */int) (unsigned short)28643)) : (((((/* implicit */_Bool) (unsigned short)36893)) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) var_10))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 772172348U)) ? (((/* implicit */int) (unsigned short)56212)) : (((/* implicit */int) arr_2 [i_2] [i_2])))) : (((/* implicit */int) ((signed char) arr_1 [i_2])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3)));
                }
            } 
        } 
    } 
}
