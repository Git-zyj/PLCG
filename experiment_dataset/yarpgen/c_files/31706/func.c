/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31706
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_14 |= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(signed char)16] [i_1] [i_1])))))) <= (arr_1 [i_3 + 2])))) >> (((((((/* implicit */_Bool) var_1)) ? (14194006640022618170ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 - 1] [i_3 - 1]))))) - (14194006640022618149ULL)))));
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (_Bool)0))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (var_7)));
                        arr_10 [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) min((arr_8 [i_3] [i_3 + 2] [i_3 + 2] [i_1] [i_3] [i_3]), (8ULL)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
        {
            arr_13 [i_4] [i_0] = ((/* implicit */unsigned int) 4252737433686933451ULL);
            var_17 -= ((/* implicit */unsigned short) var_5);
            /* LoopSeq 2 */
            for (unsigned int i_5 = 2; i_5 < 21; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)67)) + (((((/* implicit */_Bool) (unsigned short)65505)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)39))))));
                            arr_21 [i_0] [i_5] [i_5] [i_7] = ((/* implicit */long long int) (unsigned char)190);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) arr_20 [i_9] [i_8] [i_5] [i_0] [i_0]);
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_5 - 1])))))));
                            arr_28 [i_0] [i_5] [i_5] [i_8] [i_9] = ((/* implicit */unsigned int) arr_12 [i_4] [i_4]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
            for (long long int i_10 = 1; i_10 < 21; i_10 += 1) 
            {
                arr_32 [i_10] [i_4] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((8382611802783131112LL) & (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10])))))) ? (16ULL) : (((unsigned long long int) (unsigned short)65514))));
                arr_33 [i_10] [i_10] [i_10] [i_0] = ((/* implicit */signed char) var_10);
            }
            var_22 |= ((/* implicit */signed char) arr_22 [i_0] [i_0] [i_0] [i_0] [i_4]);
        }
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
        {
            var_23 += ((/* implicit */unsigned short) max((((/* implicit */long long int) ((signed char) (+(4791759791646622143ULL))))), (max((1826353309369233808LL), (((/* implicit */long long int) (unsigned short)51287))))));
            arr_36 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_11] [i_11] [i_11] [i_11])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_11] [i_11])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_29 [i_11]))))) : ((~(((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65514))))))))));
        }
        var_24 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0]))))));
        var_25 = ((/* implicit */signed char) ((long long int) ((unsigned short) arr_5 [12U])));
    }
    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
    {
        var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_12] [i_12] [i_12])) ? (-267774157) : (((/* implicit */int) (unsigned short)23412))))), (max((arr_0 [i_12]), (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */long long int) ((unsigned int) ((int) var_9)))) : (0LL)));
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 0; i_16 < 16; i_16 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((arr_27 [i_12] [i_13] [i_14] [i_15] [i_16]) & (381272693)));
                            var_28 = ((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_12] [i_13]))) : ((+(18446744073709551615ULL))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_12] [i_15])) != (((/* implicit */int) (_Bool)0)))))));
                            var_30 = ((/* implicit */unsigned short) ((arr_42 [i_12] [i_13] [i_15] [i_16]) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_12] [i_13] [i_14] [i_14] [i_15] [i_16]))) : (1826353309369233818LL)));
                        }
                        arr_50 [i_12] [i_13] [i_14] [i_15] = ((/* implicit */int) ((_Bool) arr_46 [i_14] [i_15]));
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_7 [i_12] [i_13] [i_13] [i_13]))));
                    }
                    arr_51 [i_14] [i_13] [i_14] = ((/* implicit */_Bool) arr_46 [i_12] [i_13]);
                    arr_52 [i_14] [i_14] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_2 [i_12] [i_12])), (((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_12])) >> (8U)))) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) arr_27 [i_13] [i_14] [i_14] [i_13] [i_14]))))));
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) arr_25 [8ULL]))));
                }
            } 
        } 
        var_33 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_12] [i_12] [(_Bool)1] [i_12] [i_12] [i_12])) : (((/* implicit */int) var_7))))) ? (6LL) : (((((/* implicit */_Bool) 2683793339U)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_12] [i_12] [i_12] [i_12])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_12] [(short)8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (signed char)10)) ? (arr_4 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_12] [(short)2] [(short)2] [i_12]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3482775505848575752LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_12] [i_12] [i_12] [0] [i_12] [i_12] [i_12]))) : (-1826353309369233808LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_12] [i_12] [i_12] [i_12] [16] [i_12])))));
        var_34 |= ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_9 [i_12] [i_12] [(_Bool)1] [i_12] [i_12] [i_12])), ((unsigned short)65535)));
    }
    var_35 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 261808325596617659LL)) ? (((/* implicit */int) var_7)) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)63639)) : (((/* implicit */int) (unsigned char)191)))))) - ((~(((/* implicit */int) (_Bool)1))))));
}
