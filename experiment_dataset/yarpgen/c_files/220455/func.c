/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220455
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) var_6))) + (min((var_13), (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */int) var_9)) : (max((max((var_10), (((/* implicit */int) (signed char)-11)))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)0))))))));
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned short)65535)), (var_0))), (((/* implicit */long long int) max((var_12), (var_5))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7))))) : (min((((var_12) ? (var_4) : (var_8))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)0)) : (var_8))))))))));
    var_19 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) var_16)), (min((0ULL), (((/* implicit */unsigned long long int) var_0))))))));
    var_20 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) ((unsigned char) var_11))))), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) + (((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [(unsigned char)6] [(unsigned char)6])), (var_13)))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0] [i_1])), (arr_4 [(unsigned short)8] [i_1] [(unsigned short)8])))) ? (max((((/* implicit */long long int) arr_3 [i_1] [i_1] [i_0])), (arr_4 [(signed char)4] [i_1] [(signed char)4]))) : ((-(arr_4 [(unsigned char)0] [i_0] [(unsigned char)0])))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) var_0)) ? (5288077816292864420ULL) : (((/* implicit */unsigned long long int) 7715553332445149735LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1])))))))));
                                var_22 = ((_Bool) (!(((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), (arr_2 [(signed char)14] [i_1]))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] = ((/* implicit */signed char) var_11);
            }
        } 
    } 
}
