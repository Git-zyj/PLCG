/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3698
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_19 ^= ((((((/* implicit */int) ((((/* implicit */_Bool) (signed char)126)) && (((/* implicit */_Bool) (unsigned char)39))))) * (((/* implicit */int) (!(var_3)))))) <= (max(((~(((/* implicit */int) var_7)))), (((int) 10342362008712057975ULL)))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min(((-(3638083004U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_3))))) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */int) var_14)) - (((/* implicit */int) (signed char)-121))))))))))));
        arr_2 [i_0 - 1] = ((arr_0 [i_0]) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) arr_0 [i_0])))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((arr_7 [i_1] [i_1 + 1]) > (arr_7 [i_1 + 2] [i_2]))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) : (3132775630U))) : (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_3 [i_2] [i_2]))))))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(-1633214323475042359LL)))))))))))));
            arr_10 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) 2008364432)), (-9223372036854775801LL))))), (((var_2) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))))))))));
            var_22 = ((/* implicit */_Bool) min(((unsigned short)43764), (((/* implicit */unsigned short) (unsigned char)192))));
            var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */int) (unsigned char)44))))) : (4278611765U)))));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))) : (var_12)))) && (((/* implicit */_Bool) (-(((var_10) % (((/* implicit */unsigned long long int) var_11))))))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 7274128192005102103ULL)) ? (11448297271302605950ULL) : (1472113900720494306ULL)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        {
                            arr_22 [(short)2] [i_3] [i_1] [i_1] [i_1 + 1] [i_6] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (433550082U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63970)))));
                            var_26 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_3]))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5] [i_3])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)29524)))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_20 [i_1 + 1] [i_1 + 1] [i_1] [23] [i_1 + 2])))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_1 + 1] [i_1 + 1] [i_3] [i_3] [i_1 + 1])) ? (var_12) : (((/* implicit */int) arr_21 [i_1 + 3] [i_4] [i_1 + 3] [i_3] [i_1])))))));
            }
            for (unsigned short i_7 = 1; i_7 < 24; i_7 += 2) 
            {
                var_30 -= ((/* implicit */short) (-(((/* implicit */int) ((signed char) arr_20 [19ULL] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])))));
                var_31 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_1 + 2] [i_1 + 3])) ? (((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) (signed char)3)))) - (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_7])) && (((/* implicit */_Bool) var_17)))))))));
                var_32 += ((/* implicit */unsigned short) (-(((long long int) var_13))));
            }
        }
        arr_27 [i_1] = ((/* implicit */short) var_4);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            for (short i_10 = 1; i_10 < 21; i_10 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (((~(arr_0 [i_10 + 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_0 [i_10 - 1])))))))))));
                    var_34 |= ((/* implicit */long long int) ((((_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_5)), (arr_7 [i_9] [i_9]))), (((/* implicit */int) arr_21 [i_10] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1]))))) : (min((((/* implicit */unsigned long long int) ((short) 1349495605854764056ULL))), (((unsigned long long int) arr_23 [i_9] [i_10] [i_10]))))));
                    var_35 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned char) var_6))) ? (max((((/* implicit */long long int) (signed char)83)), (5122382143832905195LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)58)) ^ (0))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    {
                        var_36 &= ((/* implicit */_Bool) min(((~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_18))))))), (((/* implicit */int) var_18))));
                        arr_42 [i_12] [i_13] [i_12] [i_12] = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_41 [9U]))))) ? ((+(((/* implicit */int) (unsigned char)170)))) : (((/* implicit */int) ((_Bool) ((signed char) var_3)))));
                    }
                } 
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned short) ((var_12) == (max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_15)))))))));
}
