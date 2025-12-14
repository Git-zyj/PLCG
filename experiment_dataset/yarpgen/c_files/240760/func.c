/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240760
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)57), (((/* implicit */unsigned char) arr_1 [i_1 + 2]))))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_4])) : ((-(((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 3] [i_3 - 1] [i_3 - 1] [i_3 - 1]))))));
                                var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_3] [i_3])) ? (((/* implicit */int) arr_2 [i_2 - 3] [i_4])) : (((/* implicit */int) var_15)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) arr_1 [i_0])))));
                                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)5495)) + (((/* implicit */int) (signed char)-21))));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */short) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 2] [i_1 + 2] [i_1] [i_1 + 3] [i_1 - 1] [i_1 + 3])) : (((/* implicit */int) arr_9 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_1] [i_1 - 2])))), (((/* implicit */int) ((short) (_Bool)1)))));
                    var_22 = ((/* implicit */_Bool) 3228803857U);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_23 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_5])) ^ (((/* implicit */int) var_6))));
        /* LoopNest 3 */
        for (long long int i_6 = 3; i_6 < 11; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) arr_19 [i_5] [i_5] [i_7]);
                        arr_23 [i_5] [i_6] [0U] [i_8] [i_7] [i_6] = ((/* implicit */long long int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6 - 3])))));
                    }
                } 
            } 
        } 
    }
    var_25 *= ((/* implicit */unsigned int) (signed char)-122);
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_4))));
}
