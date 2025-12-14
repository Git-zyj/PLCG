/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209404
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_2 [(_Bool)1] [16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
        arr_3 [i_0 - 2] = ((/* implicit */unsigned long long int) (+(var_18)));
        arr_4 [i_0] = (!(((/* implicit */_Bool) var_1)));
    }
    for (unsigned int i_1 = 3; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] [i_1 + 1] = ((/* implicit */unsigned short) var_13);
        arr_9 [i_1] = var_6;
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) 11U))))))))));
        var_20 = var_8;
    }
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 17; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_24 [i_2] [i_4] |= ((/* implicit */unsigned char) (~(6800820516526490809LL)));
                                arr_25 [i_2] [i_2] [i_2] = (!(((/* implicit */_Bool) var_11)));
                                arr_26 [i_6] [6LL] [i_4] [i_6 - 1] [6LL] [i_6] |= ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
                                arr_27 [i_2] = ((/* implicit */_Bool) var_17);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 3; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (~(-6800820516526490809LL)));
                                arr_33 [i_2] [i_2] [i_2] [i_7] [i_7] = ((/* implicit */short) var_17);
                            }
                        } 
                    } 
                    var_22 = (!(((/* implicit */_Bool) var_10)));
                    var_23 *= ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                }
            } 
        } 
        arr_34 [i_2] [i_2] = ((/* implicit */long long int) var_9);
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(1U)))))))));
    }
    var_25 = ((/* implicit */int) var_5);
    var_26 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        arr_38 [i_9] [i_9] &= ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
        arr_39 [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
    }
    var_27 = ((/* implicit */long long int) var_3);
}
