/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19567
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [(unsigned short)1] [i_1] = ((/* implicit */int) ((_Bool) var_9));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) min(((unsigned short)40919), ((unsigned short)47530))))));
                            arr_13 [1LL] [i_1] [(_Bool)1] [(signed char)15] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_1 - 1] [i_1 - 1]) : (var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)78)) : (var_8)))) : (((((/* implicit */_Bool) (signed char)-104)) ? (arr_3 [i_1 - 1] [i_1 - 1]) : (((/* implicit */long long int) 1663222790))))));
                            arr_14 [i_0] [i_0] [i_0] [9U] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_3)), ((unsigned char)173)));
                            var_12 = ((signed char) ((((/* implicit */int) (signed char)-64)) / (((/* implicit */int) arr_4 [i_1 - 1]))));
                        }
                    } 
                } 
                arr_15 [17U] [i_1 - 1] = ((/* implicit */int) var_0);
                var_13 = ((/* implicit */signed char) var_2);
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
    var_15 |= ((/* implicit */unsigned short) ((int) var_4));
    var_16 = ((((/* implicit */_Bool) ((signed char) ((unsigned char) (unsigned short)8605)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) 1663222800)) / (7790760263044782300LL))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40919))))))));
}
