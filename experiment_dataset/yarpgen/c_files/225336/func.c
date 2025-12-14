/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225336
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_16 = ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_5)))))) ? ((((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */int) var_1)) | (((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) : (var_8));
                                arr_11 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */int) var_9))))));
                                arr_12 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_4] [i_3] [i_3] [i_3 + 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(var_13)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (var_11)))))) ? (((/* implicit */int) (!((!(var_0)))))) : (var_11)));
                                var_17 = (((!((!(((/* implicit */_Bool) var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (var_8))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 1; i_6 < 12; i_6 += 2) 
                        {
                            var_18 ^= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_7))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (var_11)))) ^ (((var_9) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_6))));
                            var_21 = ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
                        }
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? ((~(var_8))) : ((+(((/* implicit */int) var_7))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_8 = 1; i_8 < 10; i_8 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */unsigned int) var_8)) : (var_4)));
                            var_24 = ((/* implicit */unsigned char) var_11);
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                            var_26 = (!(var_13));
                        }
                        for (signed char i_9 = 1; i_9 < 10; i_9 += 3) /* same iter space */
                        {
                            var_27 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) max((var_1), (((/* implicit */unsigned short) var_5))))))));
                            var_28 = ((/* implicit */_Bool) max((var_28), ((((~(var_4))) > ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4)))))))));
                            var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!((!(var_13)))))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((var_0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_6))))))));
                            arr_29 [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned short) min((((var_2) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) ((unsigned short) var_13)))));
                        }
                        var_30 = var_7;
                    }
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        arr_32 [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        arr_33 [i_0] [i_1] [i_2] [i_10] = ((/* implicit */unsigned short) (((-(max((((/* implicit */unsigned int) var_8)), (var_10))))) & (((/* implicit */unsigned int) (~((~(var_8))))))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) var_11);
}
