/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206541
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (var_4)))))) >> (((var_13) - (1610500400)))));
    var_15 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_13 [(unsigned char)9] [i_1] [2ULL] [9] [i_4] = ((/* implicit */short) var_5);
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_0 [i_4]))));
                                var_17 = (!(((/* implicit */_Bool) max((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_9))))));
                                var_18 *= ((/* implicit */unsigned long long int) (((!(((((/* implicit */int) (unsigned char)118)) <= (((/* implicit */int) (unsigned char)150)))))) ? (-7982169720977817463LL) : (((/* implicit */long long int) max((1592038222U), (((/* implicit */unsigned int) (unsigned char)138)))))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */short) arr_0 [i_0]);
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned char) var_12);
    var_21 = ((/* implicit */unsigned int) var_11);
}
