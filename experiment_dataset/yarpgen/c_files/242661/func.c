/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242661
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
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) max(((short)-15173), (var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) >= ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1] [i_1])) ? (arr_2 [i_0 - 1] [i_0] [i_1]) : (arr_2 [i_0 + 2] [i_0] [i_0]))))));
            var_18 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 2]);
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0 + 3])) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)15172))))) : (((arr_3 [i_0] [i_1] [(short)11]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] [15] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (3907213185U)))) ? (arr_2 [i_0 - 1] [i_0 + 3] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((14890224587316692104ULL) >= (((/* implicit */unsigned long long int) arr_1 [i_2]))))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        arr_12 [i_0] [(short)13] [i_0] [(short)13] [i_2] [(short)7] = ((/* implicit */unsigned short) var_4);
                        var_20 = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_2] [i_0 + 3]))));
                    }
                } 
            } 
            var_21 = ((/* implicit */short) var_4);
            var_22 = (+(((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2]))))));
        }
        var_23 -= ((/* implicit */unsigned int) arr_2 [(short)0] [3LL] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 2; i_6 < 24; i_6 += 3) 
        {
            arr_18 [i_5] [i_6] [i_6] = ((/* implicit */short) (-(var_5)));
            var_24 = ((/* implicit */short) ((((((((/* implicit */int) var_15)) / (((/* implicit */int) arr_15 [i_5])))) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_5 + 3])) + (15053)))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_6 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [(unsigned short)0] [i_6] [i_5])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5])))))) : ((-(33554431LL)))));
            var_26 *= var_8;
        }
        arr_19 [11ULL] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_5 + 2] [(short)6] [(short)22] [i_5] [(short)22]))));
        arr_20 [i_5] = ((/* implicit */unsigned int) ((short) arr_16 [(short)16] [i_5 + 1]));
    }
    var_27 = (!(((/* implicit */_Bool) ((short) var_12))));
    var_28 = ((/* implicit */int) var_13);
}
