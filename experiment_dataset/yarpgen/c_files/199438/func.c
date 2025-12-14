/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199438
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_11 = ((signed char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_8))));
                    arr_8 [(signed char)10] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))));
                    arr_9 [i_0 - 2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) var_0))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */unsigned short) max((var_12), (((unsigned short) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_7)))))));
                        arr_12 [i_0] [i_0 + 1] [(unsigned short)7] [i_0 + 1] [(signed char)1] = ((/* implicit */unsigned short) var_2);
                        var_13 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((((/* implicit */int) var_10)) / (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned short) (unsigned char)149)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((signed char) var_0)))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((((/* implicit */int) var_9)) != (((/* implicit */int) var_3)))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) ((signed char) var_6))))))));
                            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) | (((/* implicit */int) var_4)))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))) - (22181)))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((((/* implicit */int) var_4)) >= (((/* implicit */int) var_6)))) && (((((/* implicit */int) var_2)) < (((/* implicit */int) var_10))))))) : (((/* implicit */int) ((unsigned short) var_1))))))));
                            arr_21 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))));
                            var_18 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_2)))));
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        arr_24 [i_0 - 1] = ((unsigned char) ((unsigned short) var_4));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 1; i_8 < 21; i_8 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((unsigned char) ((unsigned char) var_3)))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_0))))))));
                        }
                    }
                    var_21 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        for (signed char i_10 = 3; i_10 < 21; i_10 += 4) 
        {
            {
                arr_31 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) ((((((/* implicit */int) var_8)) - (((/* implicit */int) var_9)))) <= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))))));
                var_22 += ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
}
