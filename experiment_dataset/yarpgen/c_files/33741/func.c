/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33741
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
    var_16 = ((/* implicit */int) var_0);
    var_17 = (signed char)33;
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) (~(978583877)));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0 - 1])) - (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_1])), (var_14))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_20 &= ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) -2921754734177284056LL))))), ((~((-(((/* implicit */int) var_14))))))));
                                var_21 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_3]))))))), (((/* implicit */int) var_6))));
                                var_22 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) max((arr_9 [(signed char)20] [i_3]), (arr_1 [19LL]))))), (((arr_0 [i_2 - 1] [i_4 + 1]) / (arr_0 [i_2 - 1] [i_4 - 1])))));
                                var_23 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_9 [i_4 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_4 + 1] [i_0 - 2])) : (((/* implicit */int) arr_9 [i_4 + 1] [i_0 - 2])))), (((/* implicit */int) min(((signed char)37), (((/* implicit */signed char) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((unsigned short) min((arr_1 [(_Bool)1]), (((/* implicit */unsigned short) arr_4 [i_0 + 1] [i_1])))));
                }
            } 
        } 
    } 
}
