/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41121
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
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (signed char)111))))) < ((+(131072)))))), (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (131072))), (((/* implicit */int) var_2)))))))));
        arr_2 [i_0 - 2] = ((/* implicit */short) (-((+((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)72)) >> (((8520097493584957715LL) - (8520097493584957692LL)))))) ? (((/* implicit */int) var_11)) : ((-(((((/* implicit */_Bool) (unsigned short)18899)) ? (((/* implicit */int) (unsigned short)18899)) : (((/* implicit */int) (short)-32754))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((signed char) var_9))), ((unsigned short)46637)));
        arr_7 [i_1] [i_1] = ((/* implicit */short) var_9);
        arr_8 [i_1] = arr_4 [i_1 + 1] [i_1];
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 24; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] [i_2] |= ((/* implicit */_Bool) (~((~(var_3)))));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_20 = arr_10 [i_2];
                        arr_20 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (~(((var_11) ? (((/* implicit */int) (unsigned short)46635)) : (var_15)))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_6 = 0; i_6 < 25; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6]))) : ((-9223372036854775807LL - 1LL)))));
        arr_25 [i_6] |= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_2))))) != (((/* implicit */int) (unsigned char)175))));
        arr_26 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) arr_10 [i_6])) : (((/* implicit */int) var_0))))) : (((unsigned int) -1LL))));
    }
    var_21 = ((/* implicit */_Bool) var_1);
}
