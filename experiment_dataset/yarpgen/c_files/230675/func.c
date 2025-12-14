/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230675
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [21U] = ((/* implicit */unsigned short) ((unsigned int) var_10));
        var_17 |= ((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) != (((/* implicit */int) var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) 2789297729U)) ? (((/* implicit */unsigned long long int) 2789297729U)) : (18446744073709551615ULL)))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_0))));
        var_19 = ((/* implicit */long long int) ((int) ((unsigned int) (signed char)0)));
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = min(((-(((/* implicit */int) ((short) var_8))))), (((/* implicit */int) min((((/* implicit */unsigned short) ((2789297729U) < (3659704828U)))), (((unsigned short) 1505669567U))))));
                            arr_20 [i_1] [i_2] [i_4] [i_5] |= ((/* implicit */short) (((+(max((((/* implicit */unsigned int) var_2)), (var_12))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_4))) != ((+(((/* implicit */int) var_16))))))))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~((-(((/* implicit */int) var_13)))))))));
                        }
                    } 
                } 
            } 
            arr_21 [i_1 + 1] [(unsigned short)14] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_5))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (min((var_0), (((/* implicit */long long int) var_8)))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    arr_28 [i_1] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (min((((/* implicit */unsigned int) var_6)), (var_12))) : (var_10))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (~(1608941416)))), (18446744073709551615ULL))))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))))))) < ((((-(((/* implicit */int) var_15)))) | ((+(((/* implicit */int) var_13))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            arr_35 [i_1] [i_6] [i_7] [i_1] [8ULL] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_5))))) : (var_7))) - (((/* implicit */long long int) (-((-(((/* implicit */int) var_1)))))))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)))) < ((+(0ULL))))))));
                            arr_36 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_3))))) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_12))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((var_5), (var_4)))) < (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_11)))))))))));
                            arr_37 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) var_11));
                        }
                    }
                }
            } 
        } 
        var_24 += ((/* implicit */unsigned char) (+((~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_11)))))))));
        var_25 *= ((/* implicit */short) ((unsigned int) (-(max((var_7), (((/* implicit */long long int) var_4)))))));
    }
    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))) < (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_8)) - (30427)))))))))))));
        var_27 *= ((/* implicit */signed char) ((max((var_0), (((/* implicit */long long int) var_8)))) >> ((((+(max((var_0), (((/* implicit */long long int) var_15)))))) - (62224LL)))));
        var_28 *= ((int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) <= (((var_7) ^ (((/* implicit */long long int) 1505669567U))))));
        arr_41 [i_10] = ((/* implicit */short) (+(((/* implicit */int) (short)24299))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
    {
        var_29 |= ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */int) var_4)) + (var_14))) : (((/* implicit */int) ((var_10) < (var_12)))))))));
        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) var_0))));
    }
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_14), (((/* implicit */int) var_4)))), ((+(((/* implicit */int) var_16))))))) ? (((((/* implicit */_Bool) min((var_15), (var_2)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(var_6)))))) : (((/* implicit */int) var_13))));
    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(2789297728U)))))) ? (max((((/* implicit */long long int) (~(((/* implicit */int) var_11))))), (((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) var_3)))) : (((int) var_15)))))));
}
