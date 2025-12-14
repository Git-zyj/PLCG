/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37217
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        var_17 *= ((/* implicit */unsigned char) var_5);
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) var_12);
                            var_19 = ((/* implicit */_Bool) min(((unsigned short)12253), (((/* implicit */unsigned short) (unsigned char)99))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                        {
                            var_20 = (unsigned char)73;
                            var_21 = ((/* implicit */_Bool) var_8);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) var_10);
                                arr_19 [i_6] = ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((/* implicit */unsigned short) var_2)), (min((((/* implicit */unsigned short) (signed char)-7)), (var_13))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_0] [(signed char)3] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)31)), (max((((/* implicit */unsigned long long int) var_6)), (var_9)))));
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 ^= ((/* implicit */unsigned char) var_3);
    var_26 = ((/* implicit */unsigned int) var_1);
    var_27 = ((/* implicit */short) var_1);
}
