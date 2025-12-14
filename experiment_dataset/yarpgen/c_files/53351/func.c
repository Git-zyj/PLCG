/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53351
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (unsigned char)164))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_3))) <= (((arr_4 [i_1] [i_2]) ? (((/* implicit */int) arr_7 [i_0] [i_2] [(_Bool)1] [i_0] [i_2] [i_1])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3] [(signed char)14] [i_2]))))));
                            var_18 = ((/* implicit */unsigned long long int) ((((_Bool) (_Bool)1)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_7 [i_0] [i_1] [i_0] [i_0] [i_2] [i_0])), (arr_5 [i_0] [i_1] [i_2]))))) : (((((/* implicit */_Bool) (unsigned short)25567)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39969))) : (4058973462434861174LL)))));
                            var_19 ^= ((/* implicit */unsigned int) (short)-1536);
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0] [i_0] [18LL] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_6 [i_0] [i_0] [(_Bool)1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) : (191195317231066229ULL))))), (((/* implicit */unsigned long long int) ((((long long int) (unsigned short)39993)) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [10ULL])))))))))));
                var_21 += ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)18)) ? (var_15) : (((/* implicit */long long int) 2009302949U)))) != (((/* implicit */long long int) ((/* implicit */int) (signed char)94)))))), (max((max((4058973462434861174LL), (((/* implicit */long long int) (-2147483647 - 1))))), (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_8)))))))));
                var_22 -= ((/* implicit */unsigned int) min((((/* implicit */int) (!(arr_2 [i_0] [(unsigned short)14])))), (((((/* implicit */int) arr_2 [i_0] [(_Bool)1])) & (((/* implicit */int) arr_2 [2ULL] [10U]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) (unsigned short)39965))))));
        var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)30)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16977))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)4901)))))));
        arr_12 [i_4] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_4])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4] [i_4])))))));
        var_25 &= ((/* implicit */signed char) ((((/* implicit */int) var_14)) == (((/* implicit */int) (unsigned short)25567))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        arr_21 [18LL] [i_7] [i_6] [i_6] = ((/* implicit */_Bool) var_15);
                        arr_22 [i_4] [i_4] [i_7] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)12288))))) & (9223372036854775807LL)));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_8 [i_4]))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_14))));
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */short) (~(arr_27 [i_8])));
                            var_29 = ((/* implicit */unsigned short) ((short) arr_16 [i_4] [i_5]));
                            arr_28 [(unsigned short)8] [i_5] [i_5] [i_5] [0ULL] |= ((unsigned short) arr_25 [i_9] [i_9] [i_8] [i_6] [i_5] [i_4]);
                            arr_29 [i_4] [i_4] = ((/* implicit */unsigned long long int) var_12);
                            var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 4058973462434861174LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39957))) : ((~(-8928322372370010229LL)))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned int) arr_9 [i_4] [i_4]);
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_8] [i_5] [i_10] [i_8] [i_4] [i_4])) ? (arr_20 [i_5] [i_6] [i_8] [i_10]) : (((((/* implicit */_Bool) 3963586570U)) ? (arr_27 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60645)))))));
                        }
                        var_33 = ((/* implicit */_Bool) var_0);
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((unsigned int) arr_14 [i_5])))));
                        arr_32 [i_4] [i_4] = ((/* implicit */_Bool) (+(var_9)));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_35 [i_4] [i_5] [i_5] [i_11] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) ^ (14798051356949286172ULL))) & (((/* implicit */unsigned long long int) ((2133317991U) & (537302622U))))));
                        var_35 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                        var_36 = ((/* implicit */_Bool) ((unsigned char) arr_27 [i_4]));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4901)) ? (628075446) : (((/* implicit */int) (unsigned short)12568))));
                    }
                    for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            var_38 = ((/* implicit */long long int) ((arr_37 [i_4] [i_5] [i_6] [i_5]) >= (arr_37 [i_4] [6LL] [i_12] [i_13])));
                            arr_42 [i_6] [i_5] [i_6] [i_12] [i_13] [(unsigned short)10] [i_6] = ((/* implicit */unsigned int) (((((_Bool)0) && (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) 16257207283978444589ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_5])))) : (((/* implicit */int) arr_8 [i_6]))));
                            var_39 *= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-28)) & ((+(((/* implicit */int) var_8))))));
                            arr_43 [i_5] [i_4] &= ((/* implicit */long long int) 1787314662U);
                            arr_44 [18ULL] [i_5] [17U] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_6] [i_12] [i_6] [i_6])) ? (((/* implicit */int) ((((/* implicit */int) arr_14 [i_5])) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_6))));
                        }
                        var_40 = ((/* implicit */short) (~(((/* implicit */int) (short)-2069))));
                    }
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((var_6) ? (arr_34 [i_4] [i_5] [i_6] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [(unsigned short)19] [i_5] [i_5] [i_4])))))))))));
                        var_42 = ((/* implicit */unsigned int) (signed char)106);
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_17 [i_4] [i_4] [13LL] [i_4])) ? (((/* implicit */int) arr_8 [22])) : (((/* implicit */int) var_4)))) ^ (((((/* implicit */int) arr_36 [i_15])) & (((/* implicit */int) (unsigned short)12287)))))))));
                            var_44 = ((/* implicit */long long int) ((unsigned long long int) arr_41 [i_4] [i_4] [i_6]));
                            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-5)) ? (arr_15 [i_4] [i_4] [i_4] [i_4]) : (arr_15 [i_4] [i_5] [i_6] [i_14])));
                            var_46 &= ((/* implicit */long long int) (+(((/* implicit */int) ((734178098) >= (((/* implicit */int) var_4)))))));
                        }
                        var_47 = ((/* implicit */unsigned short) ((unsigned int) 18446744073709551615ULL));
                    }
                }
            } 
        } 
    }
    var_48 -= ((/* implicit */short) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) (unsigned short)53271)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))) : (var_7)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) var_12))));
    var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)53246)) ^ (((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-12))))))))));
}
