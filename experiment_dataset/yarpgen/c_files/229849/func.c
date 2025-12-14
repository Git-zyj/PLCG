/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229849
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
    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) max(((signed char)-76), ((signed char)0)))) == (((var_13) / (((/* implicit */int) var_6)))))) ? (var_2) : (((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12)))) ? ((-(var_3))) : (((/* implicit */int) var_14))))));
    var_16 ^= (+(((/* implicit */int) min(((signed char)-1), (min(((signed char)91), ((signed char)0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [(signed char)2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_3 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((/* implicit */int) ((signed char) arr_0 [i_0]))), ((~(((/* implicit */int) arr_0 [i_0])))))))));
                            arr_9 [i_3] [i_3] [i_2] [i_3 - 1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [0] [i_1])) ? (((((((/* implicit */int) arr_7 [i_0] [(signed char)4] [i_0] [i_0] [i_0] [(unsigned short)3])) >= (arr_1 [i_3]))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 - 1] [i_2 - 1])) > (((/* implicit */int) arr_3 [7] [7]))))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [4])) == (((/* implicit */int) (signed char)-111))))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)27785)) || (((/* implicit */_Bool) var_6)))))))));
                            arr_10 [(signed char)9] [i_1] [i_1 - 3] [i_2] = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) (unsigned short)65535)) ? (var_9) : (arr_8 [i_0] [9] [i_2] [i_3] [i_3] [i_2]))), ((~(((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) arr_7 [i_1] [i_1] [i_1] [i_1 + 1] [(signed char)5] [i_1]);
                arr_11 [i_1 + 1] = ((/* implicit */unsigned short) min((var_0), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)127)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((((/* implicit */int) var_5)), ((-(((/* implicit */int) (unsigned short)47577))))));
}
