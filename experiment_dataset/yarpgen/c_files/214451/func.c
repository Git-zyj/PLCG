/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214451
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) arr_3 [8U] [8U] [i_1])), ((-((-(((/* implicit */int) var_3))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)25)) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)15))))) + (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (arr_2 [i_0])))) ? (1720318387965493071LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) -1720318387965493078LL))));
                            arr_15 [i_0] [i_0] [(signed char)13] [(signed char)13] [i_4] |= ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)16))))));
                            var_21 &= ((/* implicit */unsigned short) (unsigned char)37);
                        }
                    }
                    var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1720318387965493071LL)))))));
                    arr_16 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((long long int) arr_2 [i_0]));
                }
                for (unsigned short i_5 = 3; i_5 < 24; i_5 += 3) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned long long int) var_15)), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (arr_2 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)219)) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_5])))))) : (max((min((((/* implicit */unsigned long long int) var_7)), (arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [16]))), (((/* implicit */unsigned long long int) (unsigned char)22))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 23; i_7 += 1) 
                        {
                            {
                                arr_25 [i_6] = ((/* implicit */long long int) (unsigned char)219);
                                arr_26 [i_0] [i_1] [i_5] [24] [i_5] &= ((/* implicit */unsigned short) min((min((7855128617787987174LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26382)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967289U)))))), (((/* implicit */long long int) arr_24 [i_6]))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)1)))) - (((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_5]))))))) & (min((arr_11 [i_0] [i_0] [i_1] [i_1] [i_5] [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((var_14) - (8652429319431851692LL))))))))));
                    /* LoopSeq 3 */
                    for (short i_8 = 1; i_8 < 22; i_8 += 1) 
                    {
                        var_25 = var_2;
                        var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)27277)), (min((-1720318387965493073LL), (((/* implicit */long long int) (signed char)-87))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (unsigned char)221))));
                        arr_34 [i_0] [i_1] [i_5] [i_9] [i_9] = (+((-(((/* implicit */int) arr_32 [i_0] [(unsigned short)24] [i_5] [i_9])))));
                        arr_35 [i_0] [i_1] [i_5] [(signed char)16] [6ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_20 [i_0] [i_1] [i_5] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
                        arr_36 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_8 [i_0] [i_5 - 1] [i_5 + 1] [i_5 + 1]);
                        arr_37 [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) + (-1720318387965493080LL))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0] [i_0] [16U] [i_9])))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(((int) var_3))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)30668)) * (((/* implicit */int) var_17))))), (((unsigned int) arr_19 [i_10] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            arr_42 [i_0] [i_1] [i_0] [i_1] [22] = ((/* implicit */signed char) (-((-(var_6)))));
                        }
                        var_29 = ((/* implicit */int) ((unsigned int) (~(((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                }
                arr_43 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
            }
        } 
    } 
    var_30 = ((/* implicit */short) var_7);
    var_31 = ((/* implicit */long long int) var_18);
}
