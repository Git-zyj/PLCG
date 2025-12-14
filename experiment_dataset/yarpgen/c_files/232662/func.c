/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232662
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
    var_10 = ((/* implicit */int) (unsigned char)236);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) arr_4 [i_0] [i_1]);
                var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)173)) : (arr_2 [7] [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */int) (!(((((/* implicit */int) var_7)) >= (((/* implicit */int) var_7))))))) : (min((-2109361586), (max((2109361586), (((/* implicit */int) (unsigned char)132)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_12 = (unsigned char)198;
                            arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [(signed char)6] [11] [i_1 + 1] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))) ? ((+(-2109361573))) : (((/* implicit */int) min((arr_4 [i_2 + 2] [i_1 - 1]), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 20; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            arr_19 [i_5] [i_1] [(signed char)1] [i_4] [(signed char)1] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_16 [i_4 - 1] [i_5])) : (((/* implicit */int) arr_5 [i_4 + 1]))))))));
                            arr_20 [i_0] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((min((arr_15 [i_1 - 1] [i_1] [i_1 + 1] [i_4 + 1]), (((/* implicit */int) (unsigned char)255)))) | (2109361573)));
                            var_13 = ((/* implicit */signed char) (+(-2109361584)));
                            var_14 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_4]))))), (((unsigned char) arr_4 [i_1 + 1] [i_0]))))) ? ((~(((/* implicit */int) arr_18 [i_0] [i_4] [i_0] [i_0])))) : (max((arr_14 [i_1 + 1]), (((((/* implicit */int) (unsigned char)130)) * (((/* implicit */int) (signed char)-116))))))));
                            arr_21 [i_0] [(signed char)8] [i_4] [i_5] &= ((/* implicit */unsigned char) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
}
