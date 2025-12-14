/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194631
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_14)) - (16037)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)32281), (((/* implicit */short) (_Bool)1)))))) : ((~(-7116343851921810500LL))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [(short)13] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)38892);
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */long long int) var_16);
                }
            } 
        } 
        var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3]))));
            var_22 -= ((/* implicit */short) ((var_9) - (arr_10 [6] [i_4])));
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned short)0]))) >= ((~(324343196U)))));
                        arr_19 [i_3] [i_6] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(324343210U)));
                    }
                } 
            } 
        }
        for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 3; i_8 < 21; i_8 += 3) 
            {
                var_24 = ((/* implicit */unsigned char) ((short) arr_12 [i_3] [i_8 + 3] [i_8 + 2]));
                var_25 = ((/* implicit */unsigned short) var_18);
            }
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)32327)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) (unsigned short)38892)) : (((/* implicit */int) (short)28035)))))));
            var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_3]))));
        }
        /* LoopSeq 2 */
        for (int i_9 = 1; i_9 < 23; i_9 += 4) 
        {
            arr_27 [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (short)-28035)) <= (arr_23 [i_3] [(_Bool)1] [(_Bool)1]))))));
            arr_28 [(short)6] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_9 - 1] [i_9 - 1])) ? (arr_10 [i_9] [i_3]) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))));
            var_28 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_16)))))));
        }
        for (short i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-28036)) ? (((/* implicit */unsigned long long int) 324343212U)) : (arr_25 [i_3]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_3] [i_10] [i_3])))));
            var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29141)) ? (arr_17 [i_3] [i_3] [i_3] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) var_9)))))));
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((long long int) arr_25 [i_3])))));
            var_32 = ((var_1) ? (((arr_10 [i_10] [i_10]) ^ (((/* implicit */int) var_4)))) : (arr_10 [i_3] [i_10]));
            arr_31 [i_3] [i_10] [i_10] = (~(((((/* implicit */_Bool) 3970624086U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3375055907U))));
        }
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 23; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                {
                    var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_3] [(short)15] [(short)15])) ? (var_6) : (((/* implicit */int) var_12)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        arr_40 [i_11] [i_3] = arr_17 [(unsigned char)14] [i_13] [1U] [i_11] [i_11] [i_3];
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_11])) ? (((((/* implicit */int) arr_18 [i_3] [i_11] [i_12] [i_12] [i_13] [i_13])) - (((/* implicit */int) var_16)))) : ((+(((/* implicit */int) (unsigned short)65513))))));
                        arr_41 [(short)8] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)62386))))) ? (((/* implicit */int) arr_34 [i_3] [i_12] [0])) : (var_3)));
                    }
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (_Bool)0))));
                }
            } 
        } 
    }
    for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
    {
        arr_45 [i_14] = ((((((((/* implicit */_Bool) arr_18 [i_14] [i_14] [i_14] [i_14] [(unsigned char)11] [i_14])) ? (3970624086U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-8))))))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54646))));
        var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) max((4380146792179726644LL), (((/* implicit */long long int) 3970624100U)))))));
        var_37 = ((unsigned int) arr_30 [i_14] [i_14]);
        var_38 = ((/* implicit */short) ((min((((/* implicit */int) ((short) arr_4 [i_14]))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))))) < (((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_14] [14U] [i_14]))))) ? ((+(((/* implicit */int) var_14)))) : ((-(((/* implicit */int) (unsigned short)54646))))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_39 = ((/* implicit */_Bool) ((arr_47 [i_15]) ? (((/* implicit */int) (unsigned short)10879)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_47 [i_15]) ? (arr_46 [i_15]) : (arr_46 [i_15])))))))));
        var_40 = max((((((/* implicit */_Bool) ((arr_47 [i_15]) ? (((/* implicit */int) (unsigned short)65535)) : (var_3)))) ? (((/* implicit */int) min(((unsigned char)77), ((unsigned char)248)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)187)))))), (((/* implicit */int) arr_47 [i_15])));
    }
}
