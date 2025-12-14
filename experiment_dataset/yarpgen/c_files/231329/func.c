/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231329
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
    var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) 520093696)) : (-2056203244545153838LL)))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_11 [i_4] [i_3 + 1] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 67108863U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_4] [i_3] [i_2] [i_1] [i_0]))))) ? (((/* implicit */int) max(((unsigned char)113), (((/* implicit */unsigned char) arr_1 [i_0]))))) : (((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_9 [i_4] [(unsigned char)21] [i_2] [(unsigned char)21] [i_0]))))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
                                arr_12 [i_0 - 3] [i_1] [(signed char)8] [i_3 - 3] [i_4] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (~(var_4)))), (67108863U)))));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */int) var_9);
                    arr_14 [i_2] [i_1 - 1] [i_0 + 1] = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (var_4))), ((~(((/* implicit */int) var_1))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                arr_21 [i_6] [i_5] [i_2] [i_5] [i_5] [i_0] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) max((arr_2 [i_0 - 2] [i_6]), (((/* implicit */short) var_8)))))));
                                arr_22 [i_5] [i_5] [i_6] = ((/* implicit */int) 14754390553678050920ULL);
                            }
                        } 
                    } 
                    arr_23 [i_0 - 1] [i_0 - 3] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (max((67108863U), (67108863U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_1 - 2] [i_0 - 2] [i_0 - 3]), (((/* implicit */short) var_10))))))));
                }
            } 
        } 
    } 
}
