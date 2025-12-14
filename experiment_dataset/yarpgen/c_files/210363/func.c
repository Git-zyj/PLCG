/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210363
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) | (arr_2 [i_0] [i_1] [i_1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-28079))))) ? ((-(arr_3 [i_1] [i_0] [i_0]))) : (max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_1]))))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) max((arr_1 [i_3]), (arr_1 [i_0]))))))));
                            arr_8 [(short)9] [(short)9] [i_3] |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) * (((arr_6 [(unsigned char)6] [i_1] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)16206))))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))) / (arr_2 [(short)2] [i_1] [i_3])))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) > (max((min((3600684401U), (((/* implicit */unsigned int) arr_1 [(signed char)1])))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_1] [i_2] [i_3])))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) (-(((/* implicit */int) (signed char)111))));
                arr_9 [i_0] [1U] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1]))))) ? (arr_3 [i_1] [i_1] [(signed char)6]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [8U])) > (((/* implicit */int) (short)(-32767 - 1)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) (~((-((+(((/* implicit */int) var_6))))))));
}
