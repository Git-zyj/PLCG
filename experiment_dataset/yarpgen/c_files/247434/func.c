/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247434
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_13 *= ((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((/* implicit */int) arr_1 [(unsigned char)13])) : (((/* implicit */int) (signed char)-89)));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (signed char)-26))));
        var_15 = ((/* implicit */unsigned int) (!(arr_1 [i_0])));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (arr_3 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)7)) / (((/* implicit */int) (unsigned char)172))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (unsigned char)226);
        }
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10572)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))) : (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))) : (11608207014553686322ULL)))));
            var_18 = ((/* implicit */int) (_Bool)0);
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 3; i_4 < 24; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 2; i_5 < 22; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */short) var_6);
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) ((unsigned short) (unsigned char)80))))))));
                            arr_15 [i_3] [(unsigned char)24] [(_Bool)1] [(short)22] [i_3] [i_3] |= (((!(((/* implicit */_Bool) (unsigned char)78)))) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8))))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (unsigned char)249))));
                            var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [14] [(_Bool)1] [i_3 - 1] [14])) ? (arr_8 [(unsigned char)2] [i_2] [i_2] [(unsigned char)2]) : (arr_8 [14ULL] [i_4] [i_3] [14ULL])));
                        }
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            arr_20 [i_7] [i_4] [i_3] [i_2] [i_7] |= ((((/* implicit */unsigned long long int) (+(arr_16 [i_0] [(unsigned char)23] [i_3] [i_4] [i_4])))) + (((arr_19 [i_4] [i_7] [i_0]) >> (((6300773368639538416ULL) - (6300773368639538397ULL))))));
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_3 - 1] [i_7] [i_4 - 2])) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)88)) <= (((/* implicit */int) arr_10 [i_0] [i_7])))))));
                            var_24 -= ((/* implicit */_Bool) (~((~(6ULL)))));
                            arr_21 [i_0] [i_0] [i_4 + 1] [15ULL] [i_4 + 1] [i_4 + 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (12884901888LL)));
                            var_25 = ((/* implicit */_Bool) ((short) (short)15556));
                        }
                        var_26 = (unsigned short)56840;
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (unsigned int i_10 = 2; i_10 < 24; i_10 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8527702367202288319ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) : (arr_3 [i_0] [i_2] [(signed char)22])))) ? (1016023701731585425ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))))))));
                            arr_30 [i_10] [i_0] [i_9] [9ULL] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)29))));
                            var_28 -= ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)181));
                            arr_31 [10LL] [20ULL] [i_0] [i_9] [20ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)168)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9081154143363157022LL)) ? (arr_17 [i_0] [(signed char)21] [i_0] [i_0] [i_8] [(unsigned short)16] [i_10 - 1]) : (((/* implicit */int) (unsigned short)18371)))))));
                            var_29 = ((/* implicit */unsigned int) ((12145970705070013202ULL) / (((/* implicit */unsigned long long int) 865421196420724221LL))));
                        }
                    } 
                } 
                arr_32 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */int) arr_25 [i_8] [i_8] [i_0] [i_0] [i_2] [i_8]);
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) arr_26 [i_8] [i_0])))))));
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 24; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        {
                            var_31 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_8] [i_0] [i_11] [i_8] [i_11])) : (((/* implicit */int) (unsigned short)47112))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))));
                            var_32 = ((/* implicit */short) (((_Bool)0) ? (4465130872470082133ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                            arr_39 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)114))))))));
                            var_33 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)226))));
                            var_34 = ((/* implicit */unsigned int) (signed char)89);
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_14 = 1; i_14 < 24; i_14 += 4) 
            {
                var_35 = ((/* implicit */unsigned char) arr_27 [i_0] [i_0] [i_0] [i_14 - 1] [i_14]);
                arr_46 [i_0] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_14 - 1] [(signed char)19] [i_14 - 1] [i_14 + 1])) >= ((~(((/* implicit */int) (_Bool)1))))));
                var_36 = ((/* implicit */int) ((((unsigned long long int) 707093017387114133ULL)) << (((/* implicit */int) (!(((/* implicit */_Bool) 707093017387114138ULL)))))));
            }
            var_37 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (_Bool)1))));
        }
        var_39 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)4])))))));
    }
    var_40 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-948545731666410725LL)))));
}
