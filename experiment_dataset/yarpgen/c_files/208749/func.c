/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208749
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
    var_10 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_8) : (((/* implicit */int) var_4)))));
    var_11 = ((/* implicit */signed char) (~(var_3)));
    var_12 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_13 = ((_Bool) ((max((var_5), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)87)) >> (((/* implicit */int) var_4))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (12694574764984959472ULL)))));
                    var_14 = ((/* implicit */signed char) (+(min((3125864197236789703LL), ((-9223372036854775807LL - 1LL))))));
                }
                /* LoopSeq 1 */
                for (signed char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 5436400868262154655ULL))) ? (((((/* implicit */_Bool) (short)-10613)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1323269937U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))))))));
                    var_16 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) ((unsigned char) (_Bool)0))))));
                }
                var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))), (min((var_3), (((/* implicit */long long int) var_4))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) var_1);
                            arr_18 [i_5] [i_5] = ((signed char) var_4);
                            var_19 = ((_Bool) var_5);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_22 [i_5] [i_5] [i_1 + 1] [i_1 + 1] [i_5] [i_5] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (12694574764984959472ULL)));
                            var_20 = ((/* implicit */unsigned long long int) ((signed char) (_Bool)1));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                            arr_26 [(unsigned char)11] [3ULL] [3ULL] [i_5] [i_8] [3ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5752169308724592143ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_4 [i_1 - 1] [i_1 + 1])));
                            arr_27 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)46760)) % (((/* implicit */int) (signed char)-88))));
                            var_22 = ((/* implicit */short) ((long long int) var_0));
                            var_23 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                        }
                        arr_28 [i_0] [i_5] [0U] [i_0] = (((-(12694574764984959472ULL))) & (((/* implicit */unsigned long long int) ((32767LL) | (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    }
                    var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_1 + 2])) == (((/* implicit */int) var_5)))))) >= ((-((-(5752169308724592118ULL)))))));
                    var_25 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_7 [i_1] [i_1 - 2] [i_1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-(538799285518185251LL)))))));
                    var_26 = max((((/* implicit */long long int) ((((((/* implicit */int) var_2)) * (((/* implicit */int) arr_25 [(_Bool)1] [i_4])))) != (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), ((unsigned char)244))))))), ((-(((((/* implicit */_Bool) 12694574764984959482ULL)) ? (-5116469281821020942LL) : (((/* implicit */long long int) 628474297U)))))));
                }
                for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((-5116469281821020942LL) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-21521)))))))))));
                    var_28 = ((/* implicit */short) min((((/* implicit */long long int) var_0)), (((648435803180722094LL) - (((/* implicit */long long int) ((/* implicit */int) (short)0)))))));
                    var_29 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 15448143760423026919ULL))))), (-3992889953673099452LL))), (((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1))))))));
                }
            }
        } 
    } 
    var_30 &= ((/* implicit */unsigned long long int) min((((/* implicit */short) var_5)), (((short) max((((/* implicit */long long int) (signed char)0)), (var_3))))));
}
