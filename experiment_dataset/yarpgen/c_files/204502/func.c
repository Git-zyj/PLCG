/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204502
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) arr_4 [i_1] [i_2]);
                    var_17 = ((/* implicit */signed char) max((arr_6 [i_0] [i_1] [i_1] [i_2]), ((+(((/* implicit */int) (unsigned char)197))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_10 [i_0] [i_0] = (!(((/* implicit */_Bool) arr_7 [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (long long int i_4 = 3; i_4 < 24; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)58))))), (arr_13 [i_3]))));
                                arr_24 [i_7] [i_6] [i_5] [i_4] [i_3] = ((/* implicit */short) ((_Bool) min(((-(arr_19 [i_3] [i_5] [i_6]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_12 [i_7])), (-1731075994776070833LL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 1; i_8 < 24; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                        {
                            var_20 = arr_20 [i_9] [i_8] [i_5] [i_4] [i_3] [i_3];
                            arr_30 [i_3] [i_4] [i_5] [i_8] = ((/* implicit */signed char) arr_18 [i_3] [i_4] [i_5] [i_9] [i_9]);
                        }
                        for (short i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */signed char) arr_12 [i_3]);
                            var_22 |= ((/* implicit */short) arr_20 [i_10] [i_10] [i_8] [i_5] [i_4] [i_3]);
                            arr_34 [i_3] [i_4] [i_4] [i_5] [i_5] [i_8] [i_10] = ((/* implicit */short) (~(((((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_25 [i_8])) : (((/* implicit */int) arr_28 [i_3] [i_4] [i_5] [i_8] [i_10])))) - (((/* implicit */int) arr_32 [i_4 - 2] [i_5] [i_8 + 1] [i_8] [i_10]))))));
                        }
                        var_23 -= ((/* implicit */_Bool) ((signed char) min((3664042481962647742ULL), (((/* implicit */unsigned long long int) (signed char)-108)))));
                    }
                }
            } 
        } 
    } 
}
