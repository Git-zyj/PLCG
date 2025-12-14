/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244221
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 1] [i_1] [i_1 + 2] = min((893089576U), (3401877736U));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1757598151U))));
                var_12 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_10)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned short) var_2)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 3; i_2 < 20; i_2 += 2) 
    {
        arr_9 [i_2] &= var_7;
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_13 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-8192))));
            var_14 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) var_11)), (var_3)))));
            arr_12 [i_2 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */int) var_0)))))));
            arr_13 [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (var_7)));
        }
        for (unsigned char i_4 = 3; i_4 < 22; i_4 += 1) 
        {
            var_15 = ((/* implicit */long long int) ((((min((var_7), (((/* implicit */unsigned long long int) var_2)))) << (((((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (18276263856273743745ULL))))) >> (((((/* implicit */int) var_11)) + (10878)))));
            var_16 = ((/* implicit */unsigned long long int) var_6);
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) max((var_6), (var_6))))));
            var_18 = ((/* implicit */signed char) min(((short)8191), (((/* implicit */short) (unsigned char)240))));
        }
        var_19 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) & (var_1)))) ? (min((((/* implicit */unsigned long long int) 533021495)), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21539)) ? (-1186151731) : (((/* implicit */int) (short)-14533))))))) << (((((/* implicit */int) var_6)) - (10127))));
    }
    for (unsigned char i_5 = 3; i_5 < 14; i_5 += 3) 
    {
        var_20 = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) var_9))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_4)) : (var_7)))))));
        var_21 = ((/* implicit */int) min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21560)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (signed char)126)))))));
    }
    var_22 = var_8;
    var_23 = ((/* implicit */unsigned char) var_6);
}
