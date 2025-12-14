/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222581
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
    var_18 = ((/* implicit */signed char) (((-(((/* implicit */int) var_14)))) * (max((((/* implicit */int) max((var_4), ((signed char)34)))), (((((/* implicit */int) var_2)) | (((/* implicit */int) var_12))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) var_7)), (max(((~(((/* implicit */int) (signed char)121)))), (((/* implicit */int) arr_1 [i_0]))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) max((var_11), (arr_3 [i_1] [i_1] [i_2]))))))) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])))))));
                    arr_11 [i_1] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [(signed char)6])))), (((/* implicit */int) max(((signed char)-123), ((signed char)94)))))), (((/* implicit */int) arr_8 [i_2] [i_1] [i_1] [i_0]))));
                }
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        {
                            arr_18 [i_1] [i_4] = arr_1 [i_3];
                            arr_19 [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_4]))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
            }
        } 
    } 
}
