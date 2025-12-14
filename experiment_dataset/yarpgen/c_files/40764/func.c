/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40764
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (+(890058024)));
        arr_3 [i_0] = ((/* implicit */_Bool) (((-(-2147483647))) | ((+(((/* implicit */int) var_6))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) var_7)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_10 = ((/* implicit */int) max((var_10), (min(((-((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [2])))))))));
            var_11 = ((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_8)), (arr_5 [i_1] [i_2]))) % (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)196)))))))) != (((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */unsigned long long int) arr_8 [i_1])) : ((+(arr_6 [i_1]))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (_Bool)1))));
            arr_16 [10] [10] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (unsigned char)223)) - (221)))))) ? ((-(var_4))) : (max((var_9), (-890058031))))), (((/* implicit */int) ((signed char) ((signed char) (unsigned char)6))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_13 ^= ((/* implicit */signed char) (-(((int) ((((/* implicit */unsigned int) 417362500)) - (arr_5 [(unsigned char)4] [(unsigned char)4]))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */int) var_2)) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)105)) - (((/* implicit */int) (short)-11865))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_17 [i_6 - 1]))) - (86U)))))));
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_0))));
                        arr_24 [i_1] = ((/* implicit */short) arr_23 [i_1] [i_4] [i_5] [i_6]);
                    }
                } 
            } 
        }
        arr_25 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) >> (((((/* implicit */int) (unsigned char)249)) - (232))))) * (((/* implicit */int) max(((!(((/* implicit */_Bool) (signed char)-35)))), (((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))))));
        arr_26 [i_1] = ((/* implicit */_Bool) ((unsigned char) ((int) ((((/* implicit */int) var_6)) <= (1308683681)))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 7; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned char i_9 = 4; i_9 < 8; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) (signed char)119)) << (((((/* implicit */int) arr_9 [i_10])) + (81))))))));
                        arr_40 [i_7] [i_8] [i_9] [(short)4] [i_8] [i_7] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                        var_17 |= ((/* implicit */_Bool) arr_17 [i_7]);
                        arr_41 [i_7] [i_8] [i_9] [i_10] = ((/* implicit */_Bool) ((short) (+(arr_31 [i_7] [i_7] [i_9]))));
                    }
                } 
            } 
        } 
        arr_42 [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7216)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)9245))))) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (unsigned char)112))));
        var_18 = ((/* implicit */unsigned long long int) var_9);
        arr_43 [i_7] [i_7] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
    }
    var_19 = var_6;
}
