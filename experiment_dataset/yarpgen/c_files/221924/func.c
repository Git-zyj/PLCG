/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221924
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
    var_18 = ((/* implicit */long long int) ((((((/* implicit */int) (short)16768)) >= (2029517559))) ? (max((var_1), (((/* implicit */int) ((var_16) > (((/* implicit */long long int) -400456039))))))) : (((((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) (unsigned short)65524)))) ^ (((/* implicit */int) var_13))))));
    var_19 ^= ((((/* implicit */int) var_13)) & (min((((/* implicit */int) var_17)), (-1889276857))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) min(((+(var_14))), (((/* implicit */int) (!(((/* implicit */_Bool) -1889276868)))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)117)) || (((/* implicit */_Bool) -6474716928073498543LL))))) << (((min((((/* implicit */int) (signed char)91)), (var_7))) - (63)))))), (((8345913973799296695LL) >> (((var_10) - (1150362252530804722LL))))))))));
                                arr_16 [i_0] [11U] [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */int) min(((unsigned short)21025), (((/* implicit */unsigned short) (_Bool)1))));
                                var_21 = min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)11122)))) ? (var_0) : (((/* implicit */int) (unsigned short)12)))));
                                arr_17 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)121))))) || (((/* implicit */_Bool) (unsigned short)65516))));
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [(signed char)0] [i_2 - 1] [(signed char)0])) : (((/* implicit */int) arr_9 [(unsigned short)4] [i_2 + 1] [(unsigned short)4])))) / (((/* implicit */int) arr_9 [(signed char)6] [i_2 + 3] [(signed char)6])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
