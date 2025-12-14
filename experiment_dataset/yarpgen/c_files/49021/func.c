/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49021
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
    var_18 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32756))) <= (16LL)))) <= (var_11)));
        var_20 = ((/* implicit */unsigned int) var_3);
        var_21 = ((((/* implicit */int) var_17)) & (((/* implicit */int) var_5)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */short) var_15);
        var_23 = ((/* implicit */int) var_4);
        /* LoopSeq 3 */
        for (signed char i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            arr_17 [i_1] [i_2] [i_1] [(short)5] [i_5] [(short)4] [(_Bool)1] = ((/* implicit */unsigned int) var_8);
                            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) > (((/* implicit */int) ((((/* implicit */long long int) ((var_10) & (((/* implicit */int) var_15))))) > (var_1))))));
                            var_25 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_10)))))) - (var_13))) - (((/* implicit */unsigned long long int) var_9))));
                            var_26 = ((/* implicit */int) ((var_7) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */int) (short)3)) - (((/* implicit */int) (unsigned char)220)))) > (((/* implicit */int) var_7))))) >> (((((/* implicit */int) var_5)) + (64)))));
                        var_28 = ((/* implicit */unsigned short) var_3);
                    }
                } 
            } 
        }
        for (unsigned char i_8 = 3; i_8 < 12; i_8 += 1) /* same iter space */
        {
            var_29 += ((/* implicit */short) var_13);
            arr_26 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) var_11)) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_3))))) / (var_3)));
            var_30 = ((/* implicit */short) var_2);
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (var_11)))) || (((/* implicit */_Bool) var_15))));
        }
        for (unsigned char i_9 = 3; i_9 < 12; i_9 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */short) var_9);
            var_33 = ((/* implicit */unsigned int) ((var_6) * (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_13)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (var_3))))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        var_34 = ((/* implicit */_Bool) var_6);
        arr_32 [i_10] = ((((/* implicit */int) (signed char)50)) >= (((/* implicit */int) (short)-3)));
        var_35 = ((/* implicit */_Bool) var_4);
        var_36 = ((/* implicit */unsigned int) var_12);
        arr_33 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5))))) != (((/* implicit */int) ((var_16) <= (var_16))))));
    }
}
