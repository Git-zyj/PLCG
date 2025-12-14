/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28234
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
    var_16 = ((/* implicit */unsigned short) ((int) (~(2404439261U))));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) var_0);
                    var_18 ^= ((/* implicit */unsigned char) ((long long int) (~(1890528035U))));
                    arr_10 [i_0] = ((/* implicit */unsigned int) arr_8 [i_0] [i_1 + 2] [i_0] [i_0]);
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_1 + 3] [i_1 + 3] [i_0] = ((/* implicit */unsigned short) arr_7 [i_0]);
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5 + 1] [i_0] [i_0] [i_0] [i_0])) ? (arr_4 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_4 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : ((-(8669905249379911092LL)))));
                                arr_19 [i_0] [i_1 + 1] [i_0] [5LL] [i_1] = ((/* implicit */signed char) arr_5 [i_0]);
                                var_20 = ((/* implicit */unsigned char) arr_11 [(unsigned short)11] [i_4 + 2] [(unsigned short)11]);
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((signed char) arr_12 [i_1 + 2] [i_1 + 1]));
                }
                var_21 = ((unsigned char) min((arr_4 [i_1 - 1] [i_0]), (arr_4 [i_1 + 3] [14LL])));
                var_22 = arr_11 [i_0] [i_0] [i_0];
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_2))))))))))));
    var_24 = ((/* implicit */signed char) var_3);
}
