/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24381
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [(unsigned char)8] [(unsigned char)17] = ((/* implicit */short) (+((-((+(var_1)))))));
                                var_14 = ((/* implicit */unsigned char) (+((+((-(((/* implicit */int) (unsigned char)123))))))));
                                var_15 |= ((/* implicit */unsigned short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_23 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~((~((~(((/* implicit */int) (unsigned short)50257))))))));
                                arr_24 [i_0] [i_2] [i_5] &= ((/* implicit */long long int) (-((+((-(((/* implicit */int) var_13))))))));
                                arr_25 [i_1] = ((/* implicit */unsigned short) (-((-((+(((/* implicit */int) (unsigned char)18))))))));
                                var_16 = ((/* implicit */unsigned short) (+((~((~(var_8)))))));
                                var_17 = ((/* implicit */long long int) (+((-((-(((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) (unsigned char)237))))))));
    }
    for (short i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        arr_28 [i_7] [(_Bool)1] = (~(((/* implicit */int) (_Bool)1)));
        arr_29 [i_7] = ((/* implicit */long long int) (-((+((-(arr_26 [i_7])))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+((-((-(((/* implicit */int) var_13)))))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) (~((+((-(((/* implicit */int) var_2))))))));
    var_21 &= (~((~((-(((/* implicit */int) var_3)))))));
}
