/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198997
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned int) var_2)))) : ((+(var_16))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) var_8);
            var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
        }
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (var_16) : (var_16))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) var_1);
                    arr_12 [i_2] [i_2] [(unsigned short)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((-(18446744073709551591ULL)))));
                    var_23 -= ((/* implicit */unsigned char) var_14);
                    arr_13 [i_4] [5U] [5U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_7)) : (var_0)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                {
                    var_24 = (-(var_9));
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (var_0) : (var_5))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 10; i_8 += 1) 
                        {
                            {
                                arr_25 [i_6] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */short) (~(var_2)));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                                var_27 += ((/* implicit */_Bool) (-(var_0)));
                                arr_26 [i_6] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                                var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_32 [i_10] = var_1;
                arr_33 [i_10] [i_10] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_13))))));
                var_29 = ((/* implicit */_Bool) (+((~((~(4294967295U)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        for (long long int i_12 = 1; i_12 < 18; i_12 += 2) 
        {
            {
                arr_39 [i_11] [i_11] [i_12] = ((/* implicit */_Bool) var_15);
                arr_40 [i_11] = ((/* implicit */unsigned char) var_2);
                arr_41 [(unsigned short)2] [(unsigned short)2] &= ((/* implicit */int) (+((-(((((/* implicit */_Bool) var_12)) ? (var_7) : (((/* implicit */unsigned int) var_2))))))));
            }
        } 
    } 
}
