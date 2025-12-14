/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29585
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) var_10);
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 571338468U)) ? (571338458U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31)))))));
                            arr_13 [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!((!(var_2))))))));
                            var_12 = ((/* implicit */unsigned int) var_0);
                            var_13 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((~((~(var_4))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
            } 
            var_14 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3723628850U)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9))))));
            var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65530))));
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_16 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10))))));
            arr_18 [i_5] = ((unsigned long long int) (~(((/* implicit */int) (unsigned short)12))));
            var_17 += ((/* implicit */unsigned long long int) ((short) (-(var_9))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? ((+(var_3))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))));
                            arr_29 [i_0] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) var_1);
                            var_19 = (~((-(var_4))));
                        }
                    } 
                } 
            } 
        }
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned short)5)))))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((unsigned short) var_3)))));
    }
    var_22 &= ((/* implicit */long long int) var_1);
    /* LoopNest 3 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 4; i_12 < 18; i_12 += 1) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((short) var_9));
                                var_24 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_1))))) : ((-(var_5))))) : ((-((+(var_7))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        var_25 = ((/* implicit */short) (~(var_5)));
                        var_26 &= (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_0)) ? (var_4) : (var_8))) : ((~(var_4))));
                        /* LoopSeq 1 */
                        for (short i_15 = 3; i_15 < 20; i_15 += 1) 
                        {
                            arr_50 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */int) var_9);
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((short) var_9)))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (var_3)))) ? (((((/* implicit */_Bool) var_0)) ? (var_8) : (var_8))) : (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) var_3)))));
                            var_29 = var_3;
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)6))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                        }
                        for (unsigned char i_17 = 0; i_17 < 21; i_17 += 1) 
                        {
                            arr_57 [i_17] [i_14] [i_14] [i_11] [i_10] [i_9] = ((/* implicit */_Bool) (~((~(var_8)))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))));
                        }
                        arr_58 [i_9] [i_9] [i_9] [i_9] [i_11] [i_9] = ((unsigned short) ((unsigned long long int) var_2));
                    }
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) ((_Bool) var_8))))));
}
