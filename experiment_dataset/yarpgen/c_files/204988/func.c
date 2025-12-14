/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204988
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    var_20 ^= ((/* implicit */short) arr_0 [i_0] [i_2 + 1]);
                    arr_9 [i_0] [i_1] [i_0] = ((((/* implicit */int) (short)32753)) <= (((((((/* implicit */_Bool) arr_7 [i_2] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))) ^ (((/* implicit */int) arr_5 [i_1] [9] [i_2 + 1])))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)40);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))) : (arr_2 [i_0] [i_1] [i_3]))))))));
                    var_21 = (((!(((/* implicit */_Bool) (signed char)112)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_1] [i_0]))) >= (arr_2 [i_0] [i_0] [i_0]))))))) : (34634616274944ULL));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        var_22 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_16 [i_4 + 1] [i_4 + 1] [i_4] [i_1] [i_1])))));
                        arr_18 [i_0] [i_0] [i_1] [i_0] [i_3] = arr_11 [i_4 + 2] [i_3];
                    }
                }
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1]))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17188687116812839517ULL)) ? ((~(var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
}
