/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24818
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
    var_16 = max((719185011U), (((/* implicit */unsigned int) (short)-30968)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_5)) ^ (arr_6 [i_2]))));
                    var_17 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */signed char) ((short) max((((/* implicit */unsigned char) arr_8 [i_0] [i_2] [i_2])), ((unsigned char)141))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_3 - 2] [i_3] [i_3] [i_3]))));
                        arr_12 [i_0] [i_0] [i_0] [22ULL] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) : (0U)))));
                    }
                }
                for (unsigned char i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) -1576887774))) <= (min((((/* implicit */long long int) (signed char)-73)), (2360002880136014217LL)))));
                        arr_17 [i_1] |= arr_10 [i_4 + 1];
                        var_21 = ((/* implicit */short) var_6);
                        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)31))));
                    }
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) (+(1576887774)));
                        var_23 = ((/* implicit */_Bool) (unsigned char)128);
                        arr_21 [i_4] = ((/* implicit */unsigned char) (((+(arr_6 [i_4 - 1]))) - ((~(1946055411)))));
                        arr_22 [i_0] [i_4] [i_4 + 1] = ((/* implicit */short) var_2);
                    }
                    var_24 = ((/* implicit */int) var_11);
                    var_25 = ((long long int) ((var_2) / (min((1157249184), (-1576887774)))));
                }
                var_26 = ((/* implicit */signed char) 1470034315U);
            }
        } 
    } 
}
