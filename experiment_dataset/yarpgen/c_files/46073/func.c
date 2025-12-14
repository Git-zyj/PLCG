/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46073
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
    var_11 &= ((((/* implicit */int) ((unsigned short) var_6))) != (((/* implicit */int) (unsigned char)3)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 &= ((/* implicit */unsigned long long int) var_5);
                    arr_9 [i_0] [i_1] [i_2] |= ((/* implicit */int) ((unsigned int) var_1));
                    arr_10 [(unsigned short)1] [i_1] [i_1] [i_2] = ((/* implicit */long long int) (short)32760);
                }
            } 
        } 
        arr_11 [i_0] |= ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned short)0))));
        arr_12 [i_0] = ((/* implicit */signed char) var_6);
    }
    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_2))));
        /* LoopSeq 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) var_3);
            var_15 ^= var_2;
            var_16 = ((/* implicit */unsigned char) (unsigned short)0);
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_22 [i_3] [i_5] = ((/* implicit */unsigned short) var_0);
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((signed char) var_1)))));
                var_18 ^= ((/* implicit */signed char) ((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned short)65535))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (signed char i_8 = 3; i_8 < 21; i_8 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) var_0);
                            var_20 |= ((/* implicit */unsigned short) ((int) var_8));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (unsigned short)65535))));
                            arr_33 [i_3] [i_5] [i_6] [i_7] [i_8 - 3] = ((/* implicit */unsigned long long int) var_9);
                        }
                    } 
                } 
                arr_34 [i_3] |= ((/* implicit */unsigned int) var_5);
            }
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) var_2);
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (unsigned short)65530))));
        }
    }
    var_24 = ((/* implicit */unsigned long long int) var_6);
    var_25 = ((/* implicit */unsigned int) (unsigned short)28);
}
