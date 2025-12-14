/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208560
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) ((((/* implicit */int) var_9)) < (var_6)));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
            var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) ((int) var_6)))));
            var_18 = ((int) var_5);
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                var_19 = ((/* implicit */_Bool) var_1);
                var_20 = ((/* implicit */signed char) ((int) var_10));
                arr_8 [7U] [i_2] = ((/* implicit */int) (~(var_2)));
                /* LoopSeq 1 */
                for (signed char i_3 = 1; i_3 < 11; i_3 += 1) 
                {
                    var_21 = ((unsigned char) var_8);
                    var_22 = ((unsigned short) var_3);
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) % (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))));
                        var_24 = ((/* implicit */signed char) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    }
                    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */int) var_10);
                        var_26 = ((/* implicit */unsigned short) ((long long int) var_2));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) ((signed char) var_2)))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        var_28 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_6) > (((/* implicit */int) var_5))))) : (((/* implicit */int) var_7))));
                        var_29 = ((/* implicit */_Bool) var_6);
                    }
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) var_1))));
                    var_31 = ((/* implicit */unsigned short) ((long long int) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                }
            }
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                arr_22 [i_0 + 2] [i_0 + 2] [i_7] [i_7] = ((/* implicit */unsigned short) var_6);
                var_32 &= ((/* implicit */unsigned long long int) var_5);
            }
        }
        for (unsigned short i_8 = 1; i_8 < 12; i_8 += 3) 
        {
            var_33 = ((((/* implicit */int) var_4)) + (var_6));
            arr_25 [(unsigned char)6] = ((/* implicit */_Bool) ((int) var_5));
            /* LoopNest 2 */
            for (unsigned char i_9 = 1; i_9 < 12; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    {
                        var_34 |= ((/* implicit */unsigned int) var_11);
                        var_35 = ((/* implicit */signed char) var_2);
                    }
                } 
            } 
            var_36 = ((/* implicit */_Bool) var_11);
            /* LoopNest 2 */
            for (signed char i_11 = 1; i_11 < 10; i_11 += 3) 
            {
                for (unsigned char i_12 = 3; i_12 < 13; i_12 += 2) 
                {
                    {
                        var_37 = ((/* implicit */unsigned char) ((unsigned long long int) var_2));
                        var_38 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_12))) >= (((/* implicit */int) var_5))));
                        var_39 = (~((-(((/* implicit */int) var_8)))));
                    }
                } 
            } 
        }
        for (unsigned char i_13 = 2; i_13 < 13; i_13 += 4) 
        {
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-(var_2)))) : (((((/* implicit */_Bool) var_6)) ? (var_13) : (var_13)))));
            var_41 = ((/* implicit */_Bool) (~(((long long int) var_2))));
            var_42 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))));
            var_43 = ((/* implicit */signed char) ((unsigned short) var_1));
            var_44 = ((/* implicit */_Bool) ((unsigned char) var_14));
        }
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((unsigned int) var_2))));
            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_14))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (var_6))) : (((/* implicit */int) var_8))));
            var_47 -= ((/* implicit */unsigned char) ((unsigned long long int) var_14));
        }
    }
    /* LoopNest 3 */
    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) 
    {
        for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (signed char i_19 = 0; i_19 < 17; i_19 += 4) 
                        {
                            {
                                var_48 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
                                arr_53 [i_19] [i_15] [i_17] [i_17] [i_17] [i_16] [i_15] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((signed char) var_10))), (max((min((var_3), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((unsigned char) var_0)))))));
                            }
                        } 
                    } 
                    var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */int) ((unsigned short) min((var_14), (((/* implicit */unsigned int) var_5)))))) : (max((((int) var_4)), (((/* implicit */int) ((signed char) var_8)))))));
                    var_50 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) min((var_7), (var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))) : (((unsigned long long int) var_12))));
                }
            } 
        } 
    } 
}
