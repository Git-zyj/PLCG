/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195970
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
        arr_3 [i_0] [2] = ((/* implicit */short) (-(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_5 [i_1]))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            var_20 += (!((!(((/* implicit */_Bool) (unsigned char)131)))));
            var_21 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)111))))));
            var_22 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)33))))));
            var_23 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)6709))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            arr_11 [i_3] [(unsigned short)11] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_24 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 + 1]))));
                var_25 = (!(arr_12 [i_3 + 1] [11LL] [11LL] [i_3]));
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_26 = ((/* implicit */unsigned int) (~((-2147483647 - 1))));
                var_27 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) var_13))))));
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (~(arr_15 [i_5 - 1] [i_3 - 1] [i_5 - 1] [i_5 - 1]))))));
            }
            arr_17 [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)124))));
        }
        /* LoopNest 3 */
        for (long long int i_6 = 4; i_6 < 11; i_6 += 3) 
        {
            for (unsigned int i_7 = 2; i_7 < 12; i_7 += 1) 
            {
                for (unsigned int i_8 = 1; i_8 < 12; i_8 += 3) 
                {
                    {
                        var_29 += ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56737)))))));
                        arr_27 [i_1] [i_1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_16))))));
                        arr_28 [i_1] [i_6] = (!((!(((/* implicit */_Bool) arr_25 [i_7 - 1] [i_7 + 1] [i_8] [i_7 - 1])))));
                        arr_29 [i_8] [i_7] [i_6 + 1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-5)))))))));
                    }
                } 
            } 
        } 
        var_30 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1U))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            for (unsigned char i_11 = 2; i_11 < 12; i_11 += 2) 
            {
                {
                    var_31 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)233))));
                    var_32 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)25))));
                    var_33 += ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-30))));
                    var_34 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)122))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_13] [i_11 - 1] [i_13]))));
                                var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_9]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                for (unsigned short i_16 = 2; i_16 < 9; i_16 += 1) 
                {
                    {
                        arr_48 [i_9] [i_14] [i_9] [i_15] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
                        var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_16 + 2] [i_16 + 3] [i_16 - 1]))));
                        var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)146))));
                        var_39 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)30163))));
                    }
                } 
            } 
            var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8792))));
        }
    }
    var_41 = var_2;
    var_42 = ((/* implicit */short) var_0);
}
