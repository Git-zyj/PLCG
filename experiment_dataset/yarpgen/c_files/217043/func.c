/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217043
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
    var_18 = ((/* implicit */long long int) (signed char)127);
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((3877383464875546518LL) == (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_15))) ? (max((2657715939U), (1637251345U))) : (1637251356U)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) (signed char)-108);
                    var_21 = ((((/* implicit */_Bool) (unsigned char)14)) ? ((~(min((((/* implicit */long long int) 147089897U)), ((-9223372036854775807LL - 1LL)))))) : (max((max((arr_4 [i_0 + 1] [i_0]), (((/* implicit */long long int) 2657715940U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2472562674505164650ULL)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (signed char)-26))))))));
                    var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (min((5666573000403369291ULL), (((/* implicit */unsigned long long int) 2657715940U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4241651550U)), (var_0)))) ? (((/* implicit */unsigned int) ((arr_7 [i_0] [i_2] [i_2] [i_2]) | (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))) : ((+(147089897U))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (short i_4 = 2; i_4 < 7; i_4 += 4) 
            {
                {
                    var_23 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 0U)) % (9471717691819029956ULL)));
                    var_24 = ((/* implicit */long long int) (+(arr_7 [i_0] [i_3] [i_3] [i_0])));
                    var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3019049499610351489ULL)) ? ((+(4294967283U))) : (((/* implicit */unsigned int) arr_12 [i_0] [i_3] [i_4] [i_4 - 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18003682838015404558ULL)) ? (((/* implicit */int) (short)16663)) : (928695588))))))) : ((+(((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [i_4 + 2]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_5 = 1; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 7; i_6 += 1) 
            {
                for (unsigned int i_7 = 4; i_7 < 10; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6112))) * ((+(var_1)))));
                            var_27 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) 2147483647)) < (((long long int) arr_11 [i_5] [i_6] [i_0])))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned long long int) (unsigned char)199);
            var_29 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)127)) & (arr_15 [i_5 + 1])))) : (min((-9223372036854775785LL), (((/* implicit */long long int) var_10))))))));
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (unsigned short)1293))));
        }
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((arr_11 [i_0] [i_0] [(unsigned char)8]) >> (((/* implicit */int) arr_9 [i_0] [(signed char)7] [i_0]))))))) ? (((/* implicit */int) (short)-16663)) : (((/* implicit */int) var_11)))))));
        var_32 = arr_0 [i_0 + 1];
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 3; i_10 < 13; i_10 += 4) 
        {
            var_33 = ((/* implicit */long long int) (short)16384);
            var_34 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_27 [i_9] [i_10]))) ? ((~(arr_26 [i_9] [i_9]))) : (((/* implicit */long long int) (+(4294967295U))))));
            var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2147483647))));
            var_36 &= ((/* implicit */short) 326820700U);
        }
        for (unsigned char i_11 = 2; i_11 < 13; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                for (long long int i_13 = 2; i_13 < 15; i_13 += 2) 
                {
                    {
                        var_37 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) 3019049499610351489ULL)))));
                        var_38 *= ((/* implicit */short) ((signed char) ((unsigned char) (_Bool)0)));
                    }
                } 
            } 
            var_39 -= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 1637251355U)) : (arr_26 [i_9] [i_11 + 2]));
        }
        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (~(arr_36 [i_9] [i_9] [i_9] [i_9]))))));
        var_41 |= ((/* implicit */unsigned int) var_1);
        /* LoopNest 3 */
        for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            for (unsigned short i_15 = 2; i_15 < 15; i_15 += 4) 
            {
                for (int i_16 = 1; i_16 < 15; i_16 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 1; i_17 < 14; i_17 += 2) 
                        {
                            var_42 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_16 + 1] [i_16] [i_15])) / (((/* implicit */int) (unsigned char)35)))))));
                            var_43 = ((((/* implicit */_Bool) arr_40 [i_14] [i_15 - 2] [i_16 - 1] [i_17 - 1])) ? (-3641023633665481669LL) : (-6274327069309472543LL));
                        }
                        var_44 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                        var_45 = (unsigned short)58210;
                    }
                } 
            } 
        } 
    }
    var_46 = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) ((var_5) > (((/* implicit */long long int) ((/* implicit */int) (short)0))))))) * (var_2)))));
}
