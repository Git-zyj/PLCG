/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30125
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
    var_14 = ((/* implicit */int) min(((signed char)32), (((signed char) (+(var_2))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 = ((signed char) ((int) min((var_9), (((/* implicit */int) arr_3 [11])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_11 [i_1] [i_2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_6 [i_4] [i_2] [i_1]), (((/* implicit */int) ((signed char) (signed char)-97))))))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((((/* implicit */int) (signed char)57)) | (((/* implicit */int) (signed char)-23)))) & ((~(((/* implicit */int) (signed char)47)))))) | (((((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_3] [i_2])) & (((/* implicit */int) ((signed char) (signed char)46))))))))));
                                var_17 = ((/* implicit */signed char) max((var_17), (arr_9 [i_0] [i_0] [i_0] [i_3] [i_4])));
                                var_18 = var_8;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) (signed char)(-127 - 1));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)32)) / (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 &= min(((signed char)(-127 - 1)), (((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (signed char)52))))));
    /* LoopNest 3 */
    for (signed char i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        for (signed char i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                {
                    var_22 ^= min((var_12), ((signed char)-120));
                    var_23 = min((((/* implicit */int) (signed char)127)), (-637695099));
                }
            } 
        } 
    } 
}
