/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21625
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (var_0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_9))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_9)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_5))))) : ((~(var_0))))));
                    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
                    arr_8 [i_1] [i_2 + 2] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)30720)) : (((/* implicit */int) (_Bool)1)))))));
                    var_13 = ((/* implicit */signed char) var_10);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (long long int i_5 = 3; i_5 < 14; i_5 += 3) 
            {
                {
                    var_14 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_10)))));
                    var_15 &= ((/* implicit */int) var_0);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned int) max((((/* implicit */short) var_4)), (var_8)));
                                var_17 = ((/* implicit */signed char) ((max((-8106324335022489717LL), (-9223372036854775798LL))) + (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0))))))));
                                var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (_Bool)1)))))))), (((var_0) >> (((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_5)) + (114)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((_Bool) ((signed char) var_1))))));
                        var_20 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((281474708275200LL) < (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                        arr_23 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (~(3742736534U)));
                    }
                    for (unsigned short i_9 = 2; i_9 < 14; i_9 += 2) 
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_8))));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_23 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) min((var_8), (((/* implicit */short) var_1)))))))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_10)))));
                            var_24 = var_2;
                            var_25 &= ((/* implicit */unsigned long long int) var_1);
                            var_26 = ((/* implicit */short) min((((4595655694704845954LL) << (((((/* implicit */int) var_1)) - (66))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))))));
                            var_27 ^= ((/* implicit */short) ((((((/* implicit */int) var_5)) / (((/* implicit */int) var_9)))) < (((/* implicit */int) var_4))));
                        }
                        var_28 &= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-14))));
                    }
                    for (long long int i_11 = 4; i_11 < 13; i_11 += 1) 
                    {
                        arr_32 [i_11] = ((/* implicit */unsigned long long int) ((signed char) var_0));
                        var_29 |= ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned char)224))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (var_10)))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_12 = 2; i_12 < 21; i_12 += 2) 
    {
        for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
        {
            {
                arr_37 [(_Bool)1] = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) 2956625703022602881LL)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (((((/* implicit */_Bool) (unsigned short)19)) ? (2400606398U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                arr_38 [i_12] [i_13] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~(3070629273U)))) : (((long long int) ((9231755745892347257ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                var_30 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_43 [i_15] = ((/* implicit */long long int) ((unsigned long long int) (+(((((/* implicit */_Bool) (short)869)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))));
                            arr_44 [i_15] [(unsigned char)20] = ((/* implicit */unsigned short) min((3933887432U), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (2956625703022602881LL)))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_16 = 3; i_16 < 20; i_16 += 4) 
                {
                    arr_47 [i_16] = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_6)) + (2147483647))) >> (((((/* implicit */int) min((var_7), ((signed char)-46)))) + (68))))) != (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_10)))))))));
                    arr_48 [i_16] [i_12] [(signed char)8] = (!(((/* implicit */_Bool) 777888039U)));
                    var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) var_1))));
                }
                for (unsigned char i_17 = 1; i_17 < 20; i_17 += 1) 
                {
                    var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (var_7))))) > (((unsigned long long int) var_0))));
                    var_33 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) 122880U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10)))));
                    arr_52 [i_17] [i_17] [i_13] [i_17] = (-(12957796485541908712ULL));
                }
            }
        } 
    } 
}
