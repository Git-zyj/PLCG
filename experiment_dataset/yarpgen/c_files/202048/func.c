/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202048
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_12 [i_0] [(short)9] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_0] [8ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_2] [9ULL]))) : (7176103961736229059ULL)))));
                        arr_13 [(signed char)2] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) var_11))));
                        arr_14 [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_10 [i_0] [i_1 - 4] [i_2])) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1 - 4] [i_1 + 1]))));
                        arr_15 [i_3] [i_2] [i_2] [i_1] [i_1] [0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_10 [i_0] [i_1] [i_3])) - (2514))))) ^ (((/* implicit */int) var_7))));
                    }
                    arr_16 [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_1] [(short)7]);
                    arr_17 [i_0] [(_Bool)1] [8ULL] [i_2] = ((/* implicit */short) (((-((~(17179869183LL))))) != (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_2] [i_1] [i_0] [i_0])))))));
                    arr_18 [i_2] [2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max(((signed char)111), (((/* implicit */signed char) var_10))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)26736)) ? (var_14) : (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) arr_6 [1ULL] [(_Bool)1] [i_2])))))));
                    arr_19 [i_0] [i_1] [8ULL] [6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [(unsigned char)0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */int) var_9))))))) ? ((+(arr_5 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2])))));
                }
                arr_20 [i_0] [5U] [i_0] = ((/* implicit */_Bool) var_1);
                arr_21 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (arr_7 [i_0])));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((var_2) / (((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)3558)) : (((/* implicit */int) var_0))))))) ? (var_2) : ((-(((/* implicit */int) ((_Bool) var_12)))))));
    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11696)) ? (var_1) : (var_15)))) ? (((unsigned long long int) 1376520023U)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))))), (var_4)));
}
