/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243121
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */short) arr_3 [i_1] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (max(((~(((/* implicit */int) arr_4 [i_0])))), (((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_2] [i_3] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3 + 2]))))))));
                                var_20 |= ((int) min((arr_0 [(short)9]), (((/* implicit */int) (_Bool)0))));
                                var_21 = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_2] [i_3]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(1023))))));
                        var_22 = ((/* implicit */_Bool) arr_8 [(_Bool)1] [i_1] [i_2] [(unsigned short)3]);
                    }
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) arr_14 [i_0 + 1] [i_1 + 1] [i_2] [i_0 + 1]);
                        var_24 |= ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((int) (signed char)-93));
}
