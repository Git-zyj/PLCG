/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246487
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
    var_14 *= ((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_10))));
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((var_12) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (signed char)-116)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) min(((!((_Bool)1))), ((!(((/* implicit */_Bool) -2287105069064964759LL))))))) * (((/* implicit */int) ((((/* implicit */int) arr_6 [(signed char)4] [i_1 - 1] [i_0 + 1])) < (((/* implicit */int) arr_6 [i_0 - 1] [(_Bool)1] [i_0 - 1])))))));
                                arr_12 [i_2] [i_3 - 1] [i_2] [i_0] [i_0] [i_2] = -324057678757357381LL;
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)))))), ((~((+(((/* implicit */int) var_3)))))))))));
                            }
                        } 
                    } 
                } 
                var_18 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [6LL] [(unsigned char)2] [i_1 - 1] [(signed char)0])) && (((/* implicit */_Bool) 324057678757357381LL))))))) != (324057678757357381LL)));
                arr_13 [i_1 + 1] |= ((/* implicit */unsigned char) arr_7 [(unsigned char)6] [i_1 + 1] [8LL]);
                var_19 = (signed char)-1;
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2342679826907148699LL)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) 324057678757357373LL);
}
