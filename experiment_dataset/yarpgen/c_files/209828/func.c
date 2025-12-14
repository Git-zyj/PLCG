/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209828
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (+(((/* implicit */int) ((signed char) max((var_5), (var_5))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            {
                var_13 *= (!(((/* implicit */_Bool) 9223372036854775807LL)));
                var_14 = ((/* implicit */unsigned short) var_1);
                var_15 += ((/* implicit */signed char) (-(9223372036854775807LL)));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                            arr_10 [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((int) var_2)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    {
                        var_17 |= ((/* implicit */signed char) 2507594031402354238LL);
                        var_18 &= ((/* implicit */unsigned char) var_9);
                        var_19 = ((/* implicit */long long int) ((int) ((var_7) ? (var_1) : (((/* implicit */unsigned long long int) var_11)))));
                        arr_22 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned char)164))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) 9223372036854775803LL))) == (((long long int) var_5))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 1; i_8 < 13; i_8 += 1) 
        {
            var_21 += ((/* implicit */int) ((((/* implicit */_Bool) min((18446744073709551603ULL), (((/* implicit */unsigned long long int) 2147483647))))) ? (((/* implicit */unsigned long long int) ((long long int) var_3))) : (var_1)));
            arr_25 [i_8] = ((/* implicit */unsigned char) (unsigned short)32362);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                var_22 = ((/* implicit */int) var_7);
                var_23 -= ((/* implicit */short) ((unsigned int) var_3));
                var_24 = ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_10))));
            }
            /* vectorizable */
            for (unsigned int i_10 = 2; i_10 < 12; i_10 += 3) 
            {
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (var_3))))));
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((_Bool) (unsigned char)255)))));
                arr_30 [i_8] [i_8] [i_10 + 3] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_11))))));
                var_27 += ((/* implicit */_Bool) (unsigned short)40307);
            }
            for (short i_11 = 1; i_11 < 14; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        {
                            arr_37 [i_4] [i_8 - 1] [i_4] [i_12] [i_12] [i_8 - 1] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1948))) < (var_1)))), (var_8)));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((int) (~(0ULL)))))));
                            arr_38 [i_4] [i_8 + 2] [i_11] [i_8] [i_12] [(_Bool)1] [i_13] = ((/* implicit */unsigned char) (-(3268322337U)));
                        }
                    } 
                } 
                arr_39 [i_11] [i_8] [i_8] [i_4] = ((/* implicit */long long int) ((unsigned char) (signed char)-31));
                /* LoopSeq 1 */
                for (int i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    arr_43 [(unsigned char)13] [i_8] [13LL] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((unsigned char) (_Bool)1));
                    var_29 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)));
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) 1655964817))))) ? (min((var_9), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 1; i_15 < 14; i_15 += 4) /* same iter space */
                    {
                        arr_46 [i_4] [i_8] [i_11] [8] [i_8] [i_15] = ((/* implicit */signed char) var_11);
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) var_2))));
                        arr_47 [i_4] [7ULL] [i_8] [7ULL] = ((/* implicit */unsigned int) ((((int) (_Bool)1)) ^ (((/* implicit */int) var_10))));
                        var_32 = ((/* implicit */_Bool) -2090448994);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_16 = 1; i_16 < 14; i_16 += 4) /* same iter space */
                    {
                        arr_50 [i_4] [i_8] [(unsigned char)0] &= ((/* implicit */long long int) (short)-18748);
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) var_3))));
                        arr_51 [i_4] [4] [(unsigned char)0] [i_4] [i_16] &= ((/* implicit */long long int) (~((-2147483647 - 1))));
                        var_34 *= ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */unsigned long long int) 911247308512027690LL)) : (var_2)));
                    }
                }
                arr_52 [i_8] = ((/* implicit */int) (+(((long long int) -8544958271498422984LL))));
                var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) var_5)))))));
            }
        }
    }
    var_36 = (short)(-32767 - 1);
}
