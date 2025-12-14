/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4999
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
    var_10 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) (_Bool)0)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) max((var_4), (var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) var_2);
                var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0])), (max((((/* implicit */unsigned long long int) var_9)), (var_6))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65535)), (arr_2 [i_2])))) ? (-524288) : (((((/* implicit */int) var_2)) & (((/* implicit */int) arr_8 [i_0] [i_2 + 1] [(unsigned char)7] [i_3 - 2] [i_3]))))));
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)18316))))), (((max((((/* implicit */unsigned long long int) (unsigned char)126)), (5134999740685220622ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_1)))))));
                        arr_14 [i_0] [i_0] [4ULL] = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_1 [i_4])))));
                        arr_15 [i_0] [i_0] [i_0] [i_2] [i_4] = ((unsigned char) arr_12 [(short)5] [i_0] [i_2 - 1]);
                    }
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_7 [i_0] [i_1] [i_2] [i_2 - 2] [i_1] [i_2 - 1])))) : (((((/* implicit */int) arr_11 [i_2 - 2] [i_2 + 1])) ^ (((/* implicit */int) var_2))))));
                    arr_16 [i_0] [i_0] [i_2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-10555)) ? (((/* implicit */int) max((var_7), (((/* implicit */short) (unsigned char)62))))) : (((/* implicit */int) ((585770358) <= (((/* implicit */int) var_8))))))));
                    arr_17 [i_0] [i_1] [i_2] = max((((((/* implicit */int) var_7)) * (((0) * (var_3))))), (((((/* implicit */_Bool) ((short) arr_4 [i_0]))) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_5)))) : (-868812735))));
                }
                arr_18 [i_0] = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [(short)10] [i_0]))) : (0ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_9);
}
