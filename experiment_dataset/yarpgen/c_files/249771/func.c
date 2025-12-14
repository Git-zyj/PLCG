/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249771
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned long long int) max((((unsigned int) var_1)), (((/* implicit */unsigned int) ((unsigned char) max((11704021047479441165ULL), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)1] [i_0]))))))));
    }
    var_18 -= ((/* implicit */int) ((unsigned char) var_5));
    var_19 = ((/* implicit */int) var_11);
    var_20 = ((/* implicit */short) min((var_6), (((/* implicit */long long int) (signed char)127))));
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        for (short i_2 = 4; i_2 < 22; i_2 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    arr_11 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (6742723026230110450ULL))));
                    var_21 ^= ((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_4 [i_1])))))), (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (signed char)127)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_4))))) : (((arr_5 [i_3] [i_1]) & (((/* implicit */long long int) 1553797363U))))))));
                    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)110))))) || (((/* implicit */_Bool) ((unsigned char) (unsigned short)6297)))))) : ((+(((/* implicit */int) arr_9 [i_3] [1U] [i_3] [i_3 + 2]))))));
                    arr_12 [i_3 + 2] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112))) : (6742723026230110450ULL)))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)18)) - (((/* implicit */int) arr_8 [i_3 - 2] [i_3 + 2]))));
                }
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((arr_8 [i_2] [i_2 - 4]) ? (((/* implicit */long long int) ((int) (signed char)-106))) : (max((arr_2 [i_1]), (((/* implicit */long long int) arr_7 [i_2])))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)153)) - (((/* implicit */int) arr_10 [i_1]))))))))));
                arr_13 [(short)2] [i_1] [(unsigned short)3] = ((unsigned long long int) arr_10 [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~((-(((((/* implicit */_Bool) (unsigned char)238)) ? (805306368) : (((/* implicit */int) (_Bool)1)))))))))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (signed char)127))));
                        }
                    } 
                } 
            }
        } 
    } 
}
