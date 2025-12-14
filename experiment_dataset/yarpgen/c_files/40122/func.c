/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40122
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
    var_17 = ((/* implicit */unsigned char) (signed char)-112);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [7U] = ((/* implicit */unsigned short) (signed char)-24);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_3] [i_1] [10LL] [i_1] = ((/* implicit */long long int) arr_4 [i_0] [6ULL]);
                                arr_17 [i_0] [i_1] [(_Bool)1] [(unsigned char)11] [i_4] = ((/* implicit */unsigned int) (unsigned char)119);
                                arr_18 [i_2] [i_1] [(signed char)2] [i_3] [i_4] [i_0] [i_2] = ((/* implicit */_Bool) arr_1 [i_0]);
                                arr_19 [i_0] [i_1] [i_2] [(unsigned short)1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 - 1] [i_3 + 1]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        arr_22 [(signed char)2] [i_1] [(short)4] [i_1] [i_5] = 1361369392U;
                        /* LoopSeq 1 */
                        for (long long int i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((_Bool) (unsigned char)55))))))))));
                            arr_25 [i_0] [i_0] [i_1] [(unsigned char)2] [14LL] = ((/* implicit */unsigned long long int) (short)-24151);
                        }
                    }
                    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)67)) ? (((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */long long int) 410840659U)) : (7647651473495119621LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-77)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 2; i_7 < 21; i_7 += 1) 
    {
        for (int i_8 = 1; i_8 < 21; i_8 += 2) 
        {
            {
                arr_31 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) arr_30 [i_8] [i_7] [i_8]);
                arr_32 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)2826)) ? (((/* implicit */long long int) 410840649U)) : (((((/* implicit */_Bool) (unsigned char)196)) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [23U])))))));
                /* LoopSeq 4 */
                for (unsigned int i_9 = 1; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2821)) ? (((/* implicit */int) arr_29 [i_8] [i_8] [i_8])) : (arr_27 [i_7] [i_9 - 1])))) ? ((~(arr_27 [i_9 + 2] [i_7 + 2]))) : (arr_27 [i_8] [i_9])));
                    var_21 = ((/* implicit */short) arr_28 [i_7]);
                    arr_35 [17] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_9] [i_8])) ? (((((/* implicit */_Bool) (unsigned short)62709)) ? (((((/* implicit */_Bool) (signed char)103)) ? (arr_34 [i_8] [i_8] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (short)4317))))) : (((/* implicit */long long int) ((int) (short)24126))))) : (((/* implicit */long long int) arr_28 [i_7]))));
                }
                /* vectorizable */
                for (unsigned int i_10 = 1; i_10 < 22; i_10 += 2) /* same iter space */
                {
                    arr_40 [i_8] [i_10] = arr_38 [i_8] [i_8 + 1];
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 3; i_11 < 23; i_11 += 3) 
                    {
                        arr_45 [(signed char)22] [i_8] [(_Bool)1] &= ((/* implicit */unsigned char) (~((-(((/* implicit */int) (_Bool)1))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)62714)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (short)-4318))));
                        var_23 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 12181881596327824601ULL))));
                        arr_46 [i_8] [i_11] = ((/* implicit */int) (-(((((/* implicit */_Bool) (short)-7186)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_7] [i_8] [i_10] [i_8]))) : (-7551657490988555171LL)))));
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            arr_52 [i_7] [i_7] [i_12] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-24122)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (signed char)-104))));
                            arr_53 [i_7] [i_8] [i_7] [i_8] = ((/* implicit */long long int) arr_44 [i_7] [16U] [13U] [(unsigned short)10]);
                        }
                        arr_54 [i_8] [(unsigned char)4] [i_12] [(unsigned char)4] = ((/* implicit */unsigned char) (short)4317);
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_15 = 2; i_15 < 23; i_15 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)2846)) ? (12791625819483632753ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_14 - 1] [i_10 - 1] [i_7 + 3]))))))));
                            arr_59 [i_7] [i_7] [(_Bool)1] [i_8] [i_15] = ((/* implicit */unsigned char) arr_56 [i_7] [i_8] [i_10] [i_14] [i_15]);
                            arr_60 [i_15] [i_8] [i_8] [i_8] [i_15] [i_15] [i_8] |= ((/* implicit */short) ((signed char) (unsigned char)175));
                        }
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19493)) ? ((~(((/* implicit */int) (signed char)-24)))) : ((~(((/* implicit */int) (signed char)106)))))))));
                        var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_51 [i_7 + 1] [i_7] [(signed char)7] [i_10 + 2] [i_14])) ? (arr_36 [13LL] [i_10] [(signed char)1] [i_7]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)40488)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_41 [i_7] [i_8] [i_10] [8])))))));
                    }
                }
                for (unsigned int i_16 = 1; i_16 < 22; i_16 += 2) /* same iter space */
                {
                    var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [i_7] [12] [i_8] [i_8] [i_16])) ? (((/* implicit */long long int) ((int) arr_27 [i_7 + 3] [21U]))) : (((long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                        {
                            {
                                var_28 *= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)174))) ? (((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_62 [i_18] [i_16] [i_8])))) : ((+(((/* implicit */int) (unsigned char)27)))))));
                                arr_67 [i_16] [(short)9] [i_16] [(short)5] [i_8] [i_16] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_49 [i_16])) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (+(5279281702576839194LL)))))));
                                arr_68 [0U] [i_8] [i_16] [i_16] [i_18] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)27576)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) arr_41 [(unsigned short)20] [i_8] [i_16] [(signed char)6]))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_19 = 1; i_19 < 22; i_19 += 2) /* same iter space */
                {
                    arr_71 [i_7] [i_8] [(unsigned char)6] = ((/* implicit */_Bool) (+(-1746108830)));
                    arr_72 [6LL] [i_19] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (signed char)66)))))) ? (((/* implicit */int) (signed char)46)) : (arr_27 [i_7] [i_7])));
                    var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_7] [i_7] [i_7] [i_7 + 2] [i_7])) ? (-1220637779513260671LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_51 [i_7] [(_Bool)1] [i_7] [i_7 - 1] [i_7])) : (((((/* implicit */_Bool) arr_51 [i_7] [i_7] [i_7] [i_7 + 2] [9U])) ? (((/* implicit */int) arr_30 [i_7] [(unsigned char)14] [(unsigned char)12])) : (((/* implicit */int) arr_51 [i_7] [i_7] [i_7] [i_7 + 3] [i_7]))))))));
                    var_30 = ((/* implicit */unsigned char) arr_49 [i_7]);
                    arr_73 [i_8] [i_8] = ((/* implicit */unsigned char) arr_28 [i_19]);
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) (+(((var_7) ? (-89530955) : (((/* implicit */int) (unsigned short)2048))))));
    var_32 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1645854660)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40)))));
}
