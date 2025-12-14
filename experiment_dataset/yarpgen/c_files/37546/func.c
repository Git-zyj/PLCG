/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37546
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) (short)32767))));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned int) arr_7 [i_0] [i_1] [i_0] [i_2]));
                    arr_9 [(unsigned char)10] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1]))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_0 [i_4] [i_0])) - (36)))))) ? (arr_11 [i_1] [i_1] [15U] [15U] [i_1]) : (((((/* implicit */int) var_2)) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32792)))))));
                                arr_15 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)4095)) < (((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                }
                arr_16 [i_1] = ((/* implicit */signed char) var_6);
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-4107)) ? (((/* implicit */int) ((unsigned short) var_7))) : (max((((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (unsigned short)62546)) : (((/* implicit */int) (unsigned short)32124)))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)32124))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) var_16)) != (var_6))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2476646349U)) ? (((/* implicit */int) ((393216) > (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)206)) : (0)))))) : (((var_8) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_1)) : (var_14))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15)))))))));
    var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((var_15) ? (4195776966U) : (var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)32766)) && (((/* implicit */_Bool) var_7))))) : (var_6)))));
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) arr_12 [i_7] [i_6] [i_7] [i_8] [i_6] [i_5]);
                                var_24 = ((/* implicit */short) max((arr_7 [i_8] [i_6] [i_7] [i_8]), (((((/* implicit */int) var_7)) < (((/* implicit */int) arr_7 [i_7] [i_7 + 2] [i_7 + 2] [i_9 + 1]))))));
                                arr_29 [i_6] [14LL] [i_7 - 1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (arr_26 [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_9 + 1] [i_6] [i_9 + 1] [i_6] [i_9 + 1]))) : (min((((/* implicit */unsigned int) arr_14 [i_5] [i_5] [i_5] [i_5] [i_8] [i_5])), (var_10))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32124)) >> (((((((/* implicit */int) arr_6 [i_5] [i_6] [i_9 + 1])) + (5))) - (108))))))));
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) var_3))));
                            }
                        } 
                    } 
                    arr_30 [i_5] [i_6] = ((unsigned short) (+(((/* implicit */int) (signed char)-89))));
                    var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_18 [(short)6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (var_15))))))));
                    var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-4095)) >= (((/* implicit */int) ((_Bool) (unsigned char)35)))));
                }
            } 
        } 
    } 
}
