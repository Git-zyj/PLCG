/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249654
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
    var_11 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (+(((((/* implicit */int) ((unsigned char) var_8))) * (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0])))))))))));
        var_13 = ((/* implicit */short) ((signed char) var_3));
        var_14 = min((((/* implicit */int) arr_0 [(unsigned char)3])), ((((((_Bool)0) || (((/* implicit */_Bool) var_4)))) ? (min((((/* implicit */int) arr_0 [i_0])), (arr_1 [(short)15] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (int i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                for (signed char i_4 = 3; i_4 < 18; i_4 += 1) 
                {
                    {
                        arr_13 [i_1] [i_3] = ((/* implicit */unsigned int) arr_11 [i_4] [i_3] [(signed char)13]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 4; i_5 < 19; i_5 += 1) 
                        {
                            arr_16 [i_1] [i_5] [i_5] [i_1] = ((/* implicit */unsigned char) (-(arr_7 [i_3 + 2] [i_4] [i_4] [i_5 - 2])));
                            arr_17 [(short)12] [i_5] [i_3] [i_5] [i_5 - 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_3 + 2] [i_5 - 4] [i_4 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_3 + 2] [i_5 + 1] [i_4 + 2]))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((signed char) var_7)))));
                            var_16 = ((/* implicit */_Bool) arr_6 [i_6] [i_3 + 1] [16U]);
                        }
                        var_17 = ((/* implicit */_Bool) (short)-20761);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4 - 3] [i_3 + 1] [i_7 - 1])))))));
                            var_19 = ((/* implicit */short) (+(0ULL)));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_18 [i_1]))));
                        }
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_21 = (-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_2))))));
                            arr_26 [i_1] [i_1] [i_8] [i_3] [i_4] [i_8] = ((/* implicit */unsigned long long int) var_4);
                        }
                    }
                } 
            } 
        } 
        var_22 += ((_Bool) var_9);
    }
    /* LoopSeq 1 */
    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        var_23 &= ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_27 [i_9])) < (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_1 [i_9] [(_Bool)1]))))))));
        var_24 = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) var_9)) != (((unsigned int) (short)0)))));
    }
    var_25 = ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) ((var_9) / (((/* implicit */int) var_6))))));
}
