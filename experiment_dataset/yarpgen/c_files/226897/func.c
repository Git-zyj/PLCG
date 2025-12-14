/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226897
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */signed char) min((((((/* implicit */int) arr_7 [(signed char)0] [i_1] [i_4 - 1] [i_3] [i_0])) / (((/* implicit */int) arr_7 [i_2] [i_2 + 1] [i_4 + 1] [i_3] [i_1])))), (((/* implicit */int) arr_1 [i_2 + 2]))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (signed char)76))));
                                var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)90))));
                            }
                        } 
                    } 
                } 
                arr_12 [(signed char)5] [(signed char)5] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) arr_10 [(signed char)10] [(signed char)10] [i_1] [(signed char)10] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0] [(signed char)4]))))));
                var_18 = var_14;
                var_19 = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) % (((/* implicit */int) arr_0 [i_0])))) % (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
                arr_13 [i_0] [(signed char)10] = min((arr_0 [i_1]), (((signed char) arr_7 [i_0] [i_1] [i_1] [i_0] [i_1])));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) min((var_5), (var_9)))) + (((((/* implicit */int) max(((signed char)39), ((signed char)51)))) % (((/* implicit */int) (signed char)4))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_5] [i_5])) + (((/* implicit */int) arr_0 [i_5]))));
                arr_18 [(signed char)13] = ((/* implicit */signed char) min((((/* implicit */int) arr_8 [(signed char)8] [(signed char)1] [i_6] [i_6] [i_6] [i_6])), (((((((/* implicit */int) arr_5 [i_5] [i_5] [i_6])) | (((/* implicit */int) (signed char)39)))) + (((/* implicit */int) (signed char)69))))));
                var_22 ^= arr_15 [i_6];
            }
        } 
    } 
}
