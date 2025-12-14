/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210221
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
    var_14 = min((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) 67108863U)) ? (-1220328499) : (1088899390))))), (((/* implicit */int) min((max((((/* implicit */signed char) var_5)), (var_12))), (max(((signed char)-13), (var_9)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [(unsigned short)10] [i_3] [i_1] [i_2] |= ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) arr_8 [(unsigned char)22])))));
                                var_15 = ((/* implicit */signed char) ((max((((/* implicit */int) (unsigned char)9)), (-397376668))) >> (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min(((unsigned char)9), (((/* implicit */unsigned char) (signed char)6))))) : (max((arr_7 [i_0] [i_3] [i_0] [i_1]), (((/* implicit */int) var_6))))))));
                                var_16 = ((/* implicit */signed char) (_Bool)0);
                                arr_13 [i_1] [(unsigned char)13] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_2 [i_4 + 1] [i_4 - 1] [i_1]))))), ((+((-(((/* implicit */int) var_2))))))));
                                var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)255)) ? (-863015927) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)224)) < (((arr_3 [i_0] [i_4] [i_0]) >> (((((/* implicit */int) (unsigned char)247)) - (238))))))))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (signed char)99)))))) | (((/* implicit */int) var_6))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) var_9);
}
