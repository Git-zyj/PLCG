/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227871
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
    var_20 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = max((((/* implicit */unsigned long long int) (signed char)96)), (((((/* implicit */_Bool) max(((signed char)-97), ((signed char)(-127 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)96)) <= (((/* implicit */int) (signed char)102)))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((unsigned short) min((var_13), (((/* implicit */unsigned int) arr_2 [i_0])))));
                                arr_14 [i_1] [6LL] = ((/* implicit */_Bool) ((arr_10 [i_4] [i_3] [i_0] [i_0]) ? (((/* implicit */int) ((((/* implicit */int) ((5675469637378671808LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6562)))))) <= ((~(((/* implicit */int) var_4))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
                                var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_7 [(_Bool)1] [i_0 - 3] [(signed char)4])) < (((/* implicit */int) (unsigned char)39)))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */long long int) min((arr_0 [i_1]), (((/* implicit */signed char) arr_3 [i_0 + 1] [i_0 + 1]))));
                /* LoopSeq 1 */
                for (signed char i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) (+(max((arr_6 [i_5 + 1] [i_5 - 1] [i_5 - 1]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_5] [i_0]))))));
                    var_25 -= ((/* implicit */short) 16795808011198992780ULL);
                    arr_18 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (signed char)102)))))));
                    arr_19 [i_0 - 3] [i_0 - 3] [i_5] [i_5] = ((/* implicit */_Bool) min((min((arr_7 [i_0] [i_0 - 1] [i_5 + 2]), (arr_7 [i_0] [i_0 - 2] [i_0 - 2]))), (max(((signed char)14), (((/* implicit */signed char) (_Bool)1))))));
                    var_26 = max((max((arr_13 [i_0] [i_0 - 3] [i_0] [i_5 - 2] [i_5 - 2]), (((/* implicit */unsigned long long int) var_9)))), (((arr_4 [i_0] [i_0 - 3]) * (arr_4 [i_0] [i_0 - 2]))));
                }
            }
        } 
    } 
}
