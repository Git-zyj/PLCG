/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35736
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
        var_14 = ((/* implicit */unsigned char) ((3157483264U) / (((unsigned int) var_0))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 + 2]))));
        var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
    }
    for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (unsigned short)27137);
        arr_8 [i_1] = ((signed char) ((signed char) var_6));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        for (long long int i_5 = 4; i_5 < 21; i_5 += 3) 
                        {
                            {
                                var_17 = (unsigned short)27137;
                                var_18 |= ((/* implicit */long long int) max((118159854U), (((/* implicit */unsigned int) (unsigned short)12288))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) (~(((((/* implicit */int) var_12)) << (((arr_13 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_3]) - (9088601288834469771ULL)))))));
                    var_20 = ((/* implicit */unsigned short) ((unsigned int) var_2));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-385301690196136000LL) - (((/* implicit */long long int) arr_7 [i_1 - 1] [i_1]))))) ? (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)38380))) / (-8364354887379806811LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1 - 1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */long long int) var_11)))))));
                                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)60414))));
                                var_23 += ((/* implicit */signed char) (unsigned char)197);
                                arr_26 [i_1] [i_2] [i_3] [(signed char)22] [i_7] = ((/* implicit */unsigned int) arr_13 [i_3] [i_1] [i_2] [i_6]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */int) (signed char)7)) * (((/* implicit */int) (unsigned char)201)))))));
    }
    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) var_12);
        /* LoopNest 2 */
        for (long long int i_9 = 4; i_9 < 11; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_11 = 1; i_11 < 10; i_11 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (~(((unsigned int) var_7))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [(signed char)2] [i_11] [13] [(signed char)2] [i_11 + 2] [i_8 + 2])) >> (((((/* implicit */int) (unsigned short)29155)) - (29155)))));
                    }
                    var_28 -= (signed char)12;
                    /* LoopNest 2 */
                    for (signed char i_12 = 2; i_12 < 11; i_12 += 1) 
                    {
                        for (long long int i_13 = 2; i_13 < 11; i_13 += 1) 
                        {
                            {
                                var_29 &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 1682314167))) && (((/* implicit */_Bool) (unsigned short)65535))));
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    var_31 = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_31 [i_8] [i_9] [i_8]))))))) * (3637224006U));
                }
            } 
        } 
        arr_42 [i_8] = ((/* implicit */signed char) max((((/* implicit */long long int) (~((~(((/* implicit */int) arr_18 [i_8 + 3] [i_8] [i_8 + 2] [i_8] [i_8] [i_8 + 3]))))))), (max((((/* implicit */long long int) var_1)), (((1125899904745472LL) - (-5157293153612730122LL)))))));
    }
    /* vectorizable */
    for (unsigned char i_14 = 1; i_14 < 8; i_14 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */signed char) (((-(((/* implicit */int) (short)2790)))) / (((((/* implicit */int) var_4)) + (var_11)))));
        var_33 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_1)))) - (((/* implicit */int) ((unsigned short) 2153351398977073998ULL)))));
        arr_47 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-20456)) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_14])) && (((/* implicit */_Bool) var_4)))))));
    }
    var_34 ^= ((/* implicit */signed char) (((-(-456976655))) >> (((((((_Bool) var_1)) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) (signed char)(-127 - 1))))))) + (39)))));
}
