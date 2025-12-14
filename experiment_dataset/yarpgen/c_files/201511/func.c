/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201511
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 1; i_4 < 22; i_4 += 4) /* same iter space */
                            {
                                var_10 = ((/* implicit */unsigned short) arr_0 [i_0]);
                                var_11 = ((int) (-(((((/* implicit */_Bool) arr_12 [i_4 + 2] [i_0] [i_0] [i_1])) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_1]);
                            }
                            for (short i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
                            {
                                var_12 = ((/* implicit */long long int) arr_0 [i_1]);
                                arr_20 [i_0] [i_1] [i_0] = min(((unsigned char)247), ((unsigned char)244));
                                var_13 = ((/* implicit */signed char) min((arr_3 [i_0]), (((/* implicit */unsigned long long int) ((unsigned short) arr_9 [i_1 + 2] [i_5 + 2] [i_2 - 3])))));
                            }
                            var_14 = (~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_1))))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)244);
                var_15 -= ((/* implicit */_Bool) arr_11 [i_0]);
                arr_22 [i_0] [i_0] [i_1 - 2] = arr_0 [13];
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_5))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (min(((unsigned char)0), ((unsigned char)0)))));
}
