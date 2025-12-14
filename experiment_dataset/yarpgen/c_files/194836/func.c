/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194836
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_14 *= ((/* implicit */_Bool) ((min((((1992568680) % (-1992568678))), (((/* implicit */int) var_9)))) << (((((((/* implicit */int) var_12)) % (1992568670))) - (21)))));
                        var_15 = ((/* implicit */short) var_8);
                        var_16 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) min((-1992568678), (1992568693)))), (min((((/* implicit */long long int) var_8)), (2183439733373552892LL)))));
                        var_17 = ((/* implicit */short) ((((var_4) % (var_13))) > (((((((-4091783159890848710LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)4382)) - (4382))))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        arr_12 [i_1 - 2] [(short)6] [i_1] = ((/* implicit */unsigned short) -1992568678);
                        arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((var_1) <= (var_1)))), (var_3)));
                        var_18 = ((/* implicit */unsigned int) var_3);
                        arr_14 [i_2] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) -1992568678)) : (-4091783159890848710LL))))));
                        arr_15 [i_4] [i_0] [i_1] [i_1 - 2] [i_0] = var_10;
                    }
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            var_19 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (-1992568684));
                            var_20 = ((/* implicit */unsigned short) (!((_Bool)1)));
                            var_21 = ((((/* implicit */int) (short)-2003)) != (((/* implicit */int) (_Bool)1)));
                            var_22 = ((/* implicit */unsigned char) 1970324836974592ULL);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                        {
                            var_23 &= ((/* implicit */unsigned short) ((((/* implicit */int) min(((!(((/* implicit */_Bool) var_13)))), ((!(((/* implicit */_Bool) 8556482502323244885ULL))))))) | ((~(63488)))));
                            var_24 += ((/* implicit */unsigned int) (~(9890261571386306730ULL)));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                        {
                            arr_27 [i_5] [i_1 + 1] [i_1] [i_2] [i_1] [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) * (((/* implicit */int) ((_Bool) (_Bool)0)))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_0))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_10))))), (var_6))))));
                        }
                        arr_28 [i_0] [i_1] [i_2 + 1] [i_1] [i_1] [10U] = ((/* implicit */signed char) var_5);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            arr_32 [i_1] [i_5] [i_9] = ((/* implicit */long long int) ((((var_0) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) + (((/* implicit */unsigned long long int) 1295914098U))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (signed char)79))));
                            var_28 = (+(((/* implicit */int) var_11)));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) ^ (((/* implicit */int) var_10)))))));
                            var_30 *= ((/* implicit */unsigned int) var_0);
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            arr_38 [i_1] [i_5] [i_5] [i_2] [i_1 - 1] [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) var_6)) + (var_1)))));
                            var_31 = ((/* implicit */int) ((((min((4503597479886848ULL), (((/* implicit */unsigned long long int) -4143109861300134994LL)))) != (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) var_8))))))) && ((_Bool)1)));
                            var_32 = var_4;
                            arr_39 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_12)) % (((/* implicit */int) var_0)))) - (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_13))))))));
                            var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_12)), (var_5)));
                        }
                    }
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_10)) - (194)))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned short) (+(((var_1) - (((/* implicit */unsigned long long int) var_4))))));
}
