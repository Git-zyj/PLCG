/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242487
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = (unsigned char)0;
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                var_11 -= ((/* implicit */unsigned char) arr_13 [i_3]);
                                var_12 = ((/* implicit */short) arr_3 [i_1] [i_1] [i_1]);
                                var_13 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1 + 1])) < ((~(((/* implicit */int) var_2))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_13 [i_0]);
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((unsigned int) max(((unsigned char)250), ((unsigned char)255)))), (((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1] [i_1]))));
                                var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
                            }
                            arr_21 [i_1] [i_1] = ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned long long int) (unsigned char)1)), (2457522909418097560ULL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) 9107825196617745123ULL);
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(9107825196617745123ULL)))) ? (((/* implicit */long long int) 828391216)) : (-5237387304851411019LL))) ^ (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) ^ (333269085))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max(((~(((/* implicit */int) (short)-2763)))), (((((/* implicit */_Bool) (unsigned short)14336)) ? (((/* implicit */int) (unsigned short)4364)) : (((/* implicit */int) (signed char)48))))));
    /* LoopSeq 2 */
    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned char) (signed char)23);
        /* LoopSeq 1 */
        for (unsigned short i_9 = 1; i_9 < 15; i_9 += 2) 
        {
            arr_35 [i_9] = ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)27106)), ((unsigned short)44370)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)246))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (255LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-38))))))), (((/* implicit */long long int) arr_17 [i_9] [i_9 + 1]))));
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                for (long long int i_11 = 2; i_11 < 13; i_11 += 2) 
                {
                    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)61151)) ? (7411919354580201005LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)246)))));
                            var_17 -= ((/* implicit */long long int) (+(((((/* implicit */int) var_9)) + (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)8656))))))));
                            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)94))));
                        }
                    } 
                } 
            } 
            var_19 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_2 [i_8] [i_8])) : (((((/* implicit */_Bool) arr_34 [i_9 - 1] [i_9 - 1] [i_8])) ? (((/* implicit */int) arr_1 [i_8])) : (((/* implicit */int) arr_1 [i_9]))))));
        }
        arr_45 [i_8] = ((/* implicit */unsigned long long int) ((signed char) ((arr_32 [i_8]) >> (((/* implicit */int) ((((/* implicit */_Bool) -256LL)) || (((/* implicit */_Bool) (unsigned short)1984))))))));
    }
    for (int i_13 = 0; i_13 < 17; i_13 += 2) 
    {
        var_20 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_13] [i_13])) / (((/* implicit */int) arr_10 [i_13] [i_13]))))) < (9338918877091806493ULL))), ((!(((/* implicit */_Bool) arr_14 [i_13] [i_13] [i_13] [i_13] [i_13]))))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 1; i_15 < 15; i_15 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 17; i_16 += 2) 
                    {
                        var_21 = (+(((((/* implicit */_Bool) ((((var_5) + (9223372036854775807LL))) << (((((/* implicit */int) arr_23 [i_13] [i_13])) - (26584)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_15] [i_15]))) : (243LL))))));
                        var_22 = ((/* implicit */unsigned short) (~(18446744073709551606ULL)));
                        var_23 ^= ((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) (signed char)-33))) / ((~(((/* implicit */int) (unsigned char)240)))))) / ((-(((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */int) (unsigned short)2252)) : (869537530)))))));
                        arr_57 [i_13] [i_13] &= ((/* implicit */signed char) ((((/* implicit */long long int) 4294967270U)) / (255LL)));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_0 [i_13]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22656))))))))) ? (((/* implicit */int) arr_51 [i_13] [i_13] [i_13])) : (((((((/* implicit */_Bool) (unsigned char)127)) && (((/* implicit */_Bool) var_3)))) ? ((-(((/* implicit */int) (short)29074)))) : (((((/* implicit */_Bool) 2297653708764753771LL)) ? (((/* implicit */int) arr_7 [i_13] [i_13])) : (((/* implicit */int) arr_24 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))))))))));
                    }
                    var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2297653708764753771LL)))) : (((((/* implicit */unsigned long long int) 1147314618)) * (((((/* implicit */_Bool) 10780781181016819952ULL)) ? (6086755720156419443ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65)))))))));
                    arr_58 [i_13] [i_13] [i_13] = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
        arr_59 [i_13] [i_13] = (-(min((((/* implicit */int) arr_24 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])), (arr_8 [i_13] [i_13] [i_13]))));
        var_26 = ((/* implicit */short) (!(((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) arr_13 [i_13]))))) && (((/* implicit */_Bool) arr_52 [i_13]))))));
        arr_60 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_13] [i_13] [i_13] [i_13])) ? (arr_53 [i_13] [i_13] [i_13] [i_13]) : (arr_53 [i_13] [i_13] [i_13] [i_13])))) ? (arr_53 [i_13] [i_13] [i_13] [i_13]) : (arr_53 [i_13] [i_13] [i_13] [i_13])));
    }
}
