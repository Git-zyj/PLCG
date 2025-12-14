/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19866
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
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) max((var_14), (((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */int) arr_1 [(unsigned char)2])) : (min((((/* implicit */int) var_4)), (var_14)))))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)121)) ? (var_14) : (((/* implicit */int) arr_8 [i_3] [i_2] [i_1] [i_0]))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_10 [i_3]), (((/* implicit */unsigned char) var_11))))) >> (((((arr_5 [i_0 - 3] [i_0 - 2] [i_2 + 1]) % ((-2147483647 - 1)))) + (1605882789)))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-39)), (arr_1 [i_0 + 2])))) <= (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (var_12)))), (min((((/* implicit */unsigned char) var_0)), (var_3))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) > (((((var_0) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) var_2)))) << (((((/* implicit */int) (unsigned char)177)) - (155)))))));
    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)32))))) + (((/* implicit */int) var_7)))) <= (var_14)));
}
