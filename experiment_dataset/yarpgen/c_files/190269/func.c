/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190269
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
    var_15 += ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 *= ((/* implicit */signed char) var_3);
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (var_6)))) ? (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_12)));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -16LL)) ? (0LL) : (15LL)));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))));
    }
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_14)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (var_14))) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (var_5)))) : (var_6)));
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_19 *= ((/* implicit */unsigned int) var_10);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((unsigned int) ((long long int) var_14))) & (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */unsigned int) var_2)) >= (var_8))))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_13 [1ULL] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) var_0)))));
                    /* LoopSeq 3 */
                    for (int i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            arr_22 [(unsigned short)9] [i_3] [i_4] [i_5 + 1] [(signed char)17] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) var_0)) ? (var_14) : (var_13))))), (((/* implicit */unsigned long long int) var_2))));
                            var_21 |= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_14))))));
                        }
                        for (unsigned char i_7 = 4; i_7 < 15; i_7 += 4) 
                        {
                            arr_25 [i_2] [14ULL] [14ULL] [i_5 + 1] [2LL] [i_4] [i_4] = (-(16LL));
                            arr_26 [i_3] [i_3] [i_4] [i_4] [15] [i_2] [i_2] |= ((/* implicit */unsigned int) (~(((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_9)) - (87)))))));
                        }
                        arr_27 [i_2] [i_5 - 1] [i_4] [i_5 - 1] = ((/* implicit */unsigned long long int) ((short) -18LL));
                        /* LoopSeq 3 */
                        for (long long int i_8 = 3; i_8 < 16; i_8 += 4) 
                        {
                            var_22 += (+(min((((/* implicit */unsigned long long int) ((int) var_12))), (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                            var_23 ^= ((/* implicit */int) var_9);
                        }
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) ((((int) ((long long int) (unsigned short)41330))) * (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_9)) / (var_7)))))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (var_5)));
                            var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_9))))) : ((+(var_6)))))) / (((unsigned int) var_8))));
                        }
                        for (int i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            arr_35 [i_4] [i_3] [i_4] [i_5] [12LL] [i_3] [i_10] = ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) var_1))))) * (min((((/* implicit */unsigned int) var_10)), (var_4))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_0))))))))));
                            var_27 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (var_14))));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
                    {
                        arr_38 [(unsigned short)8] [i_11] [(unsigned char)5] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_12))))));
                        arr_39 [3] [6ULL] [i_4] [i_11] = ((/* implicit */int) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10))))));
                        arr_40 [i_11] [i_11] [(signed char)8] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned long long int) var_8)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_14)))))));
                        var_28 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_12))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5)))))) : (((/* implicit */int) var_11))));
                        var_29 *= ((/* implicit */short) (+(((/* implicit */int) var_1))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned short) var_3);
                        arr_44 [5LL] [i_12] [i_4] [i_12] = ((/* implicit */long long int) var_6);
                    }
                }
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    {
                        arr_55 [i_14] [i_15] [i_15] &= ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (var_4)))) << (((((((/* implicit */int) ((var_7) != (var_6)))) * (((/* implicit */int) ((unsigned short) var_1))))) - (14152)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
                        {
                            arr_58 [2] [i_14] [i_15] [i_15] [i_17] [i_13] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((314838958), (((/* implicit */int) (unsigned short)9956))))) >= (-15LL)));
                            var_31 ^= ((/* implicit */unsigned char) var_6);
                        }
                        arr_59 [i_13] [i_13] [i_13] [i_13] [i_13] = max((((short) var_4)), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (0LL)))));
                        var_32 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) + (((((/* implicit */_Bool) 11LL)) ? (15LL) : (16LL)))));
                    }
                } 
            } 
        } 
        var_33 *= ((/* implicit */unsigned int) var_7);
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 20; i_18 += 4) 
        {
            for (unsigned int i_19 = 0; i_19 < 20; i_19 += 1) 
            {
                {
                    arr_66 [i_13] = ((/* implicit */unsigned char) var_2);
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 20; i_20 += 1) 
                    {
                        for (int i_21 = 0; i_21 < 20; i_21 += 3) 
                        {
                            {
                                arr_72 [i_13] [i_19] [i_18] &= ((/* implicit */long long int) var_9);
                                arr_73 [i_13] [i_18] = ((/* implicit */int) var_5);
                                arr_74 [i_13] [i_13] [i_19] [8ULL] [i_20] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7)))) < (var_14))))) * (((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_7)))) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) max(((~((~(var_4))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_7)) : (var_8))))))));
    }
}
