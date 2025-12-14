/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233065
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((short) (short)-5193)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)5206))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)5193)) || (((/* implicit */_Bool) ((unsigned char) 473393612U)))))))))));
                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0 + 1]))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0 + 1])))))));
                arr_5 [i_0] [i_1] [(signed char)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_5) << (((((/* implicit */int) var_11)) - (24104))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [(short)18])) > (var_1)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_10)))) ? ((+(((/* implicit */int) (short)-5193)))) : ((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) var_13))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_17 -= ((/* implicit */short) max((arr_7 [(signed char)24]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))))));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            arr_10 [i_2] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_8 [i_2] [(unsigned short)5])) ? (((/* implicit */int) (short)5206)) : (((/* implicit */int) (signed char)-117))))))));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (short i_6 = 2; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_18 ^= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (short)10373)) ? (((/* implicit */int) ((signed char) (short)-5204))) : (((/* implicit */int) (unsigned short)65535)))));
                            var_19 = ((/* implicit */int) min((((unsigned char) ((short) var_0))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)512)) || (((/* implicit */_Bool) -4519278197710273388LL)))))));
                            arr_21 [i_2] [(short)6] [i_4] [i_5] [i_6] [(unsigned short)5] = ((/* implicit */_Bool) ((int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-10365)) || (((/* implicit */_Bool) 631716613U))))))));
                            var_20 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [i_6 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_7 [i_6 + 1]))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            var_21 = ((/* implicit */long long int) arr_14 [24LL]);
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 22; i_9 += 4) 
                {
                    for (unsigned short i_10 = 1; i_10 < 24; i_10 += 4) 
                    {
                        {
                            var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)10373))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))));
                            arr_35 [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (arr_23 [i_10 - 1]) : (((/* implicit */unsigned long long int) (-(2128250095U))))));
                        }
                    } 
                } 
                var_23 ^= ((((_Bool) (_Bool)0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_10)))));
            }
            arr_36 [23] = (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_12))))));
            arr_37 [(short)16] &= ((/* implicit */unsigned short) ((((/* implicit */int) (short)11777)) << (((arr_22 [i_7]) - (903903667)))));
            arr_38 [i_2] [i_7] [(short)21] = ((/* implicit */short) (~(((var_8) << (((arr_8 [(unsigned short)17] [i_7]) + (3120753599290226516LL)))))));
        }
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_17 [i_2] [19LL] [i_2] [i_2] [(_Bool)1])) << (((((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])) - (54934))))) << (((((unsigned long long int) (+(arr_8 [i_2] [i_2])))) - (15325990474419325119ULL)))));
    }
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (signed char i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_50 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((unsigned short) min((var_3), (((/* implicit */long long int) arr_2 [i_14 - 1])))));
                            arr_51 [i_11] [(unsigned short)4] [(unsigned char)3] [i_11] = ((/* implicit */unsigned char) ((unsigned int) (short)-525));
                        }
                    } 
                } 
                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5171)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_48 [(unsigned short)5] [(unsigned short)7] [i_12] [i_12] [3LL] [i_11])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_11] [i_11] [i_11] [i_11] [(unsigned short)10] [i_11])) ? (arr_48 [i_11] [i_12] [i_12] [i_11] [9U] [i_11]) : (arr_48 [i_11] [i_12] [i_11] [5U] [9LL] [i_11])))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_48 [i_11] [(short)12] [i_12] [i_11] [(short)17] [i_11])) : (var_0))));
            }
        } 
    } 
    var_26 *= var_8;
}
