/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215166
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
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */signed char) (~((+((~(((/* implicit */int) var_4))))))));
                                var_11 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0 + 1] [i_0 + 1] |= ((/* implicit */unsigned int) (+((+((-(((/* implicit */int) var_8))))))));
                var_12 = ((/* implicit */_Bool) max((var_12), ((!((!((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_1]))))))))));
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    var_13 += ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_6)))))))));
                    var_14 ^= ((/* implicit */_Bool) (-((+((-(((/* implicit */int) arr_11 [8] [i_1]))))))));
                    arr_17 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))))));
                    var_15 &= ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) (short)32767))))))));
                    arr_18 [i_0 + 1] [i_0 + 1] [i_0 - 1] = ((/* implicit */_Bool) (-((+((-(((/* implicit */int) (_Bool)1))))))));
                }
                for (signed char i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        arr_23 [(_Bool)1] [(_Bool)1] [(signed char)2] [i_7] = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) (signed char)58))))))));
                        arr_24 [i_0] [(unsigned short)6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-30027)))))))));
                        arr_25 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                    }
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))));
                        arr_28 [i_8] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((+(arr_13 [i_0] [(short)10]))))))));
                        var_17 &= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_5)))))))));
                    }
                    arr_29 [i_6] = ((/* implicit */unsigned char) (!((!((!(((/* implicit */_Bool) arr_5 [i_0] [i_1]))))))));
                }
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    arr_32 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-3936)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            {
                                arr_37 [(_Bool)1] [0LL] [i_9] [i_1] [i_0] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [(unsigned char)3])))))))));
                                arr_38 [i_11] [9U] [i_1] [i_0] = ((/* implicit */_Bool) (+((-((+(((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_11]))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_3)))))))));
}
