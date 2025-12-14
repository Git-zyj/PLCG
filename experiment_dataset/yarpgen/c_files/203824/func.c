/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203824
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
    var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (0))) | (var_4)))) < (var_1)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                            {
                                arr_13 [i_2] [i_2] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((int) var_4)))));
                                var_14 = ((/* implicit */unsigned short) ((var_7) ^ (((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */int) var_5)), (var_7)))) <= (max((((/* implicit */long long int) var_2)), (var_8))))))));
                                var_15 = ((/* implicit */short) ((((((((/* implicit */int) var_6)) + (((/* implicit */int) var_11)))) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) 0))))) ? (max((var_9), (((/* implicit */unsigned int) var_4)))) : (var_9))) - (3670348682U)))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                            {
                                arr_16 [i_5] = ((/* implicit */unsigned short) var_7);
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_3), (var_8)))) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) var_7)))))));
                                arr_17 [i_2] [12] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (var_3) : (((/* implicit */long long int) var_7)))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_4))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                            {
                                var_18 = ((/* implicit */short) ((int) var_8));
                                arr_20 [(unsigned char)19] [i_1] [i_2] [i_3] [i_6] [i_3] &= ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) var_5)))));
                                var_19 += ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8)));
                                var_20 = ((/* implicit */int) var_5);
                            }
                            var_21 ^= ((/* implicit */unsigned int) min((min((((/* implicit */short) var_10)), (var_11))), (var_11)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        for (int i_9 = 2; i_9 < 19; i_9 += 2) 
                        {
                            {
                                arr_27 [i_1] [i_1] [i_1] [i_1 + 3] [4U] = ((/* implicit */signed char) ((int) 1073741824));
                                var_22 = ((/* implicit */short) min((((unsigned int) ((var_8) / (((/* implicit */long long int) var_4))))), (((min((var_9), (((/* implicit */unsigned int) -4)))) | (var_1)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (var_1))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        arr_33 [i_10] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) var_7))));
                    }
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (((((/* implicit */_Bool) var_0)) ? (min((var_0), (((/* implicit */unsigned int) var_11)))) : (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) -1073741825))))))));
                                arr_39 [i_0] [i_1] [i_10] [(unsigned short)7] [i_13] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_10))))) > (var_4)))) == (((/* implicit */int) var_2))));
                                arr_40 [(unsigned char)15] [(unsigned char)15] [i_13] [i_12] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : (var_9));
                            }
                        } 
                    } 
                }
                for (int i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
                {
                    arr_44 [i_14] [i_0] [i_14] = ((/* implicit */unsigned short) 9223372036854775801LL);
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0)))) <= (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) >= (((/* implicit */int) var_2)))))));
                    var_27 = ((/* implicit */short) (~(min((((/* implicit */long long int) var_1)), (var_3)))));
                }
                for (int i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned int) var_6);
                    arr_48 [(short)17] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (var_0)))) - (((((/* implicit */int) var_5)) - (((/* implicit */int) var_10))))));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) max((((/* implicit */long long int) ((int) var_5))), (((((/* implicit */long long int) var_7)) % (var_3))))))));
                    arr_49 [i_0] [i_1] [i_15] = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned char) var_4))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_0) : (var_0)))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) + (var_3)))))));
                    arr_50 [(_Bool)1] [(unsigned short)5] [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_11)))))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1)))));
                }
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    for (short i_17 = 0; i_17 < 20; i_17 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_4), (var_4))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), ((+(var_7)))))) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) var_11);
}
