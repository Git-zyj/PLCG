/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39344
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
    var_17 = ((/* implicit */unsigned char) min((max((((/* implicit */short) ((_Bool) var_10))), (var_16))), (((/* implicit */short) (_Bool)0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
                arr_5 [i_0] = ((/* implicit */signed char) ((((688889021U) % (((/* implicit */unsigned int) 4194303)))) | (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_19 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)11791)) : (((/* implicit */int) arr_3 [i_0] [i_2]))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        arr_10 [i_1] [i_0] [i_3] = (~(arr_9 [i_1] [i_1 - 2]));
                        var_20 = ((/* implicit */unsigned int) var_1);
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((arr_0 [i_1]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36040))))))));
                        var_22 = ((/* implicit */int) arr_4 [i_0] [i_1]);
                    }
                    for (int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [(short)2] [i_1] [i_1] [(short)2] [i_1]))))) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) var_6))));
                        arr_14 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (-8342614043746985143LL) : (((/* implicit */long long int) var_12)))));
                    }
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] = (+(var_9));
                        var_24 = ((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_5] [i_5]);
                        var_25 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)11804)) : ((-2147483647 - 1))))));
                        arr_20 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                }
            }
        } 
    } 
    var_26 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
}
