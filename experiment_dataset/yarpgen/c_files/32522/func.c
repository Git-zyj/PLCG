/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32522
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
    var_12 = ((/* implicit */signed char) (((!(var_3))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (max((((/* implicit */unsigned int) var_6)), (2031951994U))))) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */signed char) (-(((unsigned long long int) (!(((/* implicit */_Bool) -336836101)))))));
                        var_14 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((int) 2263015315U))) + (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)44055)), (4294967295U)))) ? (((((/* implicit */_Bool) 2263015302U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : ((-(3827226330U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)21481)) - (((/* implicit */int) (short)19879)))))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) ((336836094) | (((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) (~(((var_7) ^ (((/* implicit */int) (unsigned short)15287))))))) : (var_2))))));
    }
    var_16 = ((/* implicit */int) ((unsigned short) ((_Bool) ((unsigned int) var_11))));
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_17 &= ((/* implicit */_Bool) var_1);
        arr_14 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) max(((unsigned short)44055), (((/* implicit */unsigned short) (_Bool)1))))) : (((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 8; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) arr_8 [i_5 - 2] [i_5 + 3] [i_5 + 3]);
        /* LoopSeq 2 */
        for (long long int i_6 = 1; i_6 < 10; i_6 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((signed char) (short)29496));
            var_20 = ((/* implicit */unsigned short) ((unsigned int) var_10));
            var_21 = ((/* implicit */signed char) arr_7 [i_5 + 2] [i_5 + 2] [i_5 + 3] [i_5 + 1]);
        }
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5 + 1]))) ^ (1258633613U)));
            var_23 = ((int) arr_3 [i_7]);
        }
        arr_22 [i_5] = ((/* implicit */signed char) arr_20 [i_5] [i_5 + 1]);
        var_24 = ((/* implicit */unsigned int) (unsigned short)16384);
    }
}
