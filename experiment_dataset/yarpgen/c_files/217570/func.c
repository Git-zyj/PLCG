/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217570
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
    var_19 = ((/* implicit */unsigned long long int) ((unsigned int) 3151514937U));
    var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 524288U)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_11)))) ? (((/* implicit */int) ((short) -836092117))) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned int) 836092129)) : (((unsigned int) var_0))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) var_2)))) : (((((/* implicit */int) var_6)) / (var_8)))))) ? (((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned int) (signed char)-15))))) : (min((var_15), (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) -571662806))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-7222))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_0] [i_2] [i_4]) <= (((/* implicit */unsigned int) -836092130)))))) : (max((var_9), (((/* implicit */unsigned int) arr_7 [i_1] [i_2]))))))) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_9 [i_0] [(_Bool)0])) ? (arr_5 [i_0] [i_0] [2ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7222)))))))));
                                var_23 *= ((/* implicit */long long int) var_2);
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(7011063807902606098ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (4294443013U) : (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_5)), ((short)7221)))))))) ? (arr_1 [8ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_0 - 3]))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((max((((/* implicit */long long int) var_3)), (arr_9 [i_0] [i_0]))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (836092129) : (1543160049))))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 9; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_25 = var_11;
                                arr_20 [i_0] [i_1] [i_2] [i_5] [i_0] = (+(-836092136));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_2) ? (((/* implicit */int) (signed char)-2)) : (var_8))) & (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned long long int) var_17)) : (((((/* implicit */_Bool) 3626219597U)) ? (((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-6)))))))));
}
