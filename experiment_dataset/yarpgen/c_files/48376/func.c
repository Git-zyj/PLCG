/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48376
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            var_13 |= ((/* implicit */unsigned short) var_7);
                            arr_11 [i_0] [i_0] [i_2] [(unsigned short)1] [i_3] [0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) <= (5517586863426806382ULL)));
                        }
                        for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_5]))));
                            arr_14 [i_5] [(short)9] [(_Bool)1] [(unsigned short)3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2147483645))));
                            arr_15 [(signed char)6] [(unsigned char)8] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) 18446744073709551615ULL);
                            arr_16 [i_5] [i_3] [i_2] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_3)) << (((arr_9 [i_0] [(unsigned short)0] [i_0] [i_0] [(unsigned short)4]) + (1116794820))))));
                        }
                        arr_17 [(unsigned short)4] [i_1] [(_Bool)1] [i_3 - 1] = (!(((/* implicit */_Bool) ((signed char) (_Bool)1))));
                        var_15 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (signed char)-64)) || (((/* implicit */_Bool) -1))))));
                        var_16 = ((/* implicit */unsigned long long int) var_8);
                    }
                    for (signed char i_6 = 2; i_6 < 9; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */int) var_11);
                        var_18 -= ((/* implicit */unsigned char) -611044242);
                    }
                    var_19 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */unsigned short) ((int) var_8));
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_1))));
}
