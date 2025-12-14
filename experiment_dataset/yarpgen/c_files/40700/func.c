/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40700
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
    var_11 = ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (-(var_7))))))));
        var_13 = ((/* implicit */short) var_0);
        var_14 &= ((/* implicit */signed char) (-(var_7)));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_8))));
                /* LoopSeq 3 */
                for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    var_16 = ((/* implicit */unsigned short) var_2);
                    var_17 = ((/* implicit */unsigned long long int) (-(var_9)));
                    arr_11 [i_1] [(_Bool)1] [i_2] [i_3] = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_8))))));
                }
                for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (-((-(var_1))))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_4))));
                }
                for (short i_5 = 3; i_5 < 12; i_5 += 1) 
                {
                    var_20 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    arr_17 [i_0 - 3] [i_5] [i_1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        arr_20 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6))))))))));
                        var_21 = (-((+(var_10))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
                        arr_23 [i_1] = var_1;
                    }
                    for (short i_8 = 2; i_8 < 12; i_8 += 1) 
                    {
                        var_23 = (~(((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))));
                        var_24 = ((/* implicit */long long int) var_3);
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_3))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        arr_29 [i_0] [i_0] [i_9] [i_1] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) var_5)))))))));
                        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (+((~((+(((/* implicit */int) var_0)))))))))));
                    }
                    arr_30 [i_1] [i_1] = ((/* implicit */unsigned char) (+((-(var_3)))));
                }
                var_28 = (-((+((-(var_7))))));
                var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
            }
            var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        }
        for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 3) 
        {
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) var_0))));
            var_32 &= ((/* implicit */unsigned short) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
            arr_34 [i_10 - 2] [i_0 + 1] = ((/* implicit */short) (+(var_7)));
            arr_35 [i_0] [i_10 + 1] = ((/* implicit */_Bool) (~(var_7)));
            var_33 = ((/* implicit */signed char) var_3);
        }
    }
    for (unsigned int i_11 = 1; i_11 < 13; i_11 += 4) 
    {
        arr_39 [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_3)))))))));
        arr_40 [i_11] = ((/* implicit */signed char) var_2);
        /* LoopSeq 3 */
        for (short i_12 = 2; i_12 < 12; i_12 += 2) 
        {
            arr_43 [i_12] [i_11 + 2] &= ((/* implicit */unsigned short) var_2);
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                for (signed char i_14 = 1; i_14 < 14; i_14 += 1) 
                {
                    {
                        arr_49 [i_11] [i_11] [i_13] [i_11] = ((/* implicit */unsigned char) (+((+(var_9)))));
                        arr_50 [i_13] [i_12] [i_13] [i_14] = (+(var_9));
                        /* LoopSeq 1 */
                        for (short i_15 = 3; i_15 < 14; i_15 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned int) (~((~(var_1)))));
                            var_35 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                        }
                        arr_53 [i_11] [i_11] [i_13] [i_11 - 1] = (-(var_10));
                    }
                } 
            } 
            arr_54 [i_11] [i_12] [12ULL] = (~((-(((/* implicit */int) var_5)))));
            arr_55 [i_11 - 1] [i_12 - 1] = ((/* implicit */short) var_2);
        }
        for (int i_16 = 2; i_16 < 13; i_16 += 2) 
        {
            arr_58 [i_11] [i_11] = ((/* implicit */_Bool) var_1);
            var_36 = var_3;
            var_37 = (!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_2))))))));
            arr_59 [i_11] = ((/* implicit */_Bool) var_9);
            arr_60 [i_16] [i_16] = ((/* implicit */short) (~(var_9)));
        }
        for (int i_17 = 2; i_17 < 14; i_17 += 3) 
        {
            /* LoopNest 2 */
            for (short i_18 = 1; i_18 < 13; i_18 += 4) 
            {
                for (unsigned short i_19 = 4; i_19 < 14; i_19 += 1) 
                {
                    {
                        arr_69 [i_19] [i_19] = ((/* implicit */unsigned long long int) (-((+((+(var_9)))))));
                        var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                        var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                    }
                } 
            } 
            arr_70 [i_11] = ((/* implicit */unsigned short) (+(var_7)));
            var_40 -= ((/* implicit */unsigned int) var_0);
        }
    }
}
