/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214980
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((signed char) max((((/* implicit */long long int) (signed char)4)), ((-9223372036854775807LL - 1LL))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) arr_0 [i_0] [1U]))));
                            arr_12 [i_0] [i_1] [(signed char)7] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                var_13 += ((/* implicit */short) max((arr_10 [i_1] [i_3] [i_2] [i_1] [i_0]), (min((((/* implicit */int) ((arr_8 [i_2]) == (((/* implicit */int) var_6))))), ((-(((/* implicit */int) (unsigned short)14900))))))));
                                arr_16 [(signed char)5] [(signed char)5] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_4] [i_1]))));
                            }
                            /* vectorizable */
                            for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) 
                            {
                                var_14 = ((/* implicit */int) 3327901384U);
                                arr_19 [(unsigned short)0] [i_1] [i_1] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_3]))));
                            }
                            var_16 *= ((/* implicit */unsigned int) max(((+(((((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_0] [i_3 + 2])) + (2147483647))) << (((((/* implicit */int) var_10)) - (19186))))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_0] [i_0] [i_0])) && (arr_14 [i_0] [i_1] [i_0] [(_Bool)1]))))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 156971165)) == (arr_6 [i_0] [i_0])));
                        }
                    } 
                } 
                arr_20 [i_1] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(arr_7 [i_0] [i_0] [i_1] [i_1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) max((((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_10)))));
    var_19 = ((int) (!(((/* implicit */_Bool) ((int) 782427899U)))));
}
