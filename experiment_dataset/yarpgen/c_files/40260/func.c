/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40260
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_9 [(short)7] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 - 1])) == (((/* implicit */int) var_11)))))));
                    var_19 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) min((1703465232U), (var_14)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)-7802)))))))), ((+(((/* implicit */int) var_17))))));
                    var_20 = ((/* implicit */unsigned int) ((((unsigned int) var_11)) != (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), ((unsigned char)3)))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_13 [i_1] [i_2] |= ((/* implicit */unsigned char) min(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) var_8))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (13363657440569878789ULL))))))))));
                        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            arr_16 [(short)0] [i_1] [i_2] [i_3] [i_3] [9U] = ((/* implicit */unsigned char) (((~(((((/* implicit */int) var_18)) % (((/* implicit */int) (signed char)2)))))) < (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_12)))))));
                            var_23 = ((/* implicit */long long int) min((((/* implicit */short) (unsigned char)251)), ((short)370)));
                        }
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (signed char)-77))));
                        arr_21 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned int) max((((-28) & (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (_Bool)1))))));
                    }
                }
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (min(((short)2), (var_2)))))) ? (((((/* implicit */_Bool) min((var_12), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_17))))));
                    arr_24 [i_0] [i_1] = ((/* implicit */unsigned char) 5191407984959731866LL);
                    var_26 += ((/* implicit */short) max((((((/* implicit */_Bool) arr_15 [(unsigned char)3] [i_1 - 1] [i_1 - 1] [(signed char)9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))), ((+(((/* implicit */int) (_Bool)0))))));
                    var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (short)-12675)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (short)-16)))))) ? (min((((((/* implicit */_Bool) 393596769827185079ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_14))), (((/* implicit */unsigned int) (signed char)-88)))) : (var_14)));
                }
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    arr_27 [i_0] [i_1 - 1] [i_1] [i_1 - 1] |= ((/* implicit */short) max((((/* implicit */unsigned int) ((short) arr_20 [i_0] [i_1 + 1] [i_1 + 1] [i_0]))), (var_14)));
                    var_28 ^= arr_17 [(unsigned char)14] [i_1] [(unsigned char)16] [i_0] [i_0] [10ULL];
                }
                var_29 = ((/* implicit */unsigned long long int) min((arr_6 [i_0]), (((_Bool) ((393596769827185072ULL) << (((var_15) - (614982596U))))))));
                arr_28 [i_0] [i_0] [(short)2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 12898625521795080131ULL)) || (((/* implicit */_Bool) var_9))))), (((unsigned char) var_14))));
                /* LoopNest 3 */
                for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        for (unsigned int i_10 = 2; i_10 < 18; i_10 += 3) 
                        {
                            {
                                arr_36 [i_0] [i_1] [i_8] [(unsigned char)14] [i_0] [i_10] = ((/* implicit */unsigned int) (+((~(-2147483623)))));
                                arr_37 [10ULL] [i_1 - 1] [i_10 - 1] [i_9] [10ULL] [i_9] [i_0] = ((/* implicit */unsigned int) -1441348618);
                            }
                        } 
                    } 
                } 
                arr_38 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) min((arr_20 [(short)14] [i_1] [i_1 + 1] [i_0]), (((/* implicit */short) (_Bool)1)))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-19901)) | (((/* implicit */int) ((_Bool) var_11)))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) ((unsigned char) 5750836838875605150LL)))))) : ((~(((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    for (short i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            var_31 -= ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_11])) : (((/* implicit */int) (_Bool)1))))) / ((-(var_15))));
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) max((((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (13835058055282163712ULL))), (((/* implicit */unsigned long long int) 183325934)))))));
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((var_10), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) arr_29 [i_12] [i_12] [(signed char)17] [i_12]))))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                var_34 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) min((var_0), (var_7)))))));
                arr_46 [i_11] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_0 [i_11])))));
            }
            for (unsigned int i_14 = 1; i_14 < 12; i_14 += 2) 
            {
                arr_49 [i_11] [i_14] [11ULL] = ((/* implicit */long long int) min(((unsigned short)240), (((/* implicit */unsigned short) (unsigned char)13))));
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    arr_53 [i_14] = ((/* implicit */signed char) (_Bool)1);
                    var_35 = ((/* implicit */int) min((20ULL), (((/* implicit */unsigned long long int) (unsigned short)65300))));
                }
            }
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 14; i_16 += 2) 
        {
            var_36 = ((/* implicit */unsigned long long int) ((unsigned char) var_8));
            arr_56 [1ULL] = ((/* implicit */_Bool) var_1);
        }
        for (unsigned short i_17 = 0; i_17 < 14; i_17 += 2) 
        {
            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((223465008563553062ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_54 [i_11] [i_17] [1LL]))))) : (max((var_14), (((/* implicit */unsigned int) arr_48 [i_17] [i_17] [i_11] [i_17]))))));
            arr_60 [i_11] [i_11] [i_11] = ((((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) (short)-19901)), ((unsigned short)259))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_11] [i_11] [i_11] [i_11] [(short)13])), (arr_7 [i_17])))));
        }
        arr_61 [i_11] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)161))));
        var_38 ^= ((/* implicit */unsigned int) min((max((((/* implicit */int) min((var_2), (var_11)))), ((~(((/* implicit */int) arr_6 [i_11])))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_11] [i_11] [12LL])) && ((!(((/* implicit */_Bool) (unsigned char)218)))))))));
        var_39 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) var_8)), (var_10))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)19877))))));
    }
}
