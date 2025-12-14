/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221639
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_1))));
    var_12 = ((/* implicit */_Bool) ((var_6) ^ (((/* implicit */int) var_9))));
    var_13 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)-3910)) ? (261120U) : (4294706171U)))));
    var_14 = ((/* implicit */signed char) ((unsigned long long int) (+((-(var_7))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                var_16 |= ((/* implicit */short) ((((((/* implicit */unsigned long long int) (+(261108U)))) - (arr_2 [(unsigned char)8] [i_1 - 1]))) + (((((var_3) - (((/* implicit */unsigned long long int) 25871362U)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [2U] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)4980)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) /* same iter space */
                {
                    arr_6 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) max(((~(4294706181U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))) < (4409212575648785393ULL))))));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)127)), ((-(var_2))))))));
                                var_18 = ((/* implicit */unsigned long long int) var_10);
                                var_19 *= ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                }
                for (unsigned short i_5 = 2; i_5 < 17; i_5 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) arr_14 [3]);
                    var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 4294706178U)) > (min((1023LL), (((/* implicit */long long int) arr_11 [i_5] [i_5] [i_5] [i_1] [i_5])))))))) != (min((((/* implicit */unsigned long long int) var_0)), (max((var_3), (((/* implicit */unsigned long long int) arr_15 [i_0])))))));
                    var_22 = ((((((/* implicit */_Bool) arr_3 [i_0] [i_5])) ? (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0])))))))) - (((/* implicit */unsigned long long int) -1570026201)));
                    arr_17 [i_1] [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) arr_1 [i_5] [i_5]))))))))) & ((-(((((/* implicit */_Bool) 16150888996851205975ULL)) ? (((/* implicit */unsigned long long int) 1570026200)) : (arr_12 [i_0] [i_1] [i_5 + 2] [i_5]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 17; i_7 += 4) 
                        {
                            {
                                arr_22 [i_1] = ((/* implicit */unsigned long long int) arr_14 [i_0]);
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((var_6) < (((/* implicit */int) arr_1 [i_1] [i_6])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))))))) / (min((-1781610275701511794LL), (((/* implicit */long long int) arr_19 [i_1 - 1] [i_5] [i_6] [i_7 + 2]))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
