/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27978
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) (+((-(((((/* implicit */int) (short)16159)) | (((/* implicit */int) var_9))))))));
        arr_2 [i_0] = (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_14 -= ((/* implicit */_Bool) (+(max(((~(18446744073709551615ULL))), (18446744073709551607ULL)))));
        var_15 = ((/* implicit */signed char) min((var_15), (var_0)));
        var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) min(((short)-22367), (((/* implicit */short) (_Bool)1))))) ? (27ULL) : (min((((/* implicit */unsigned long long int) (unsigned char)46)), (18446744073709551611ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (949065643))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (short)16230))));
    }
    for (long long int i_2 = 1; i_2 < 24; i_2 += 4) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+((+(((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (518264796U))))))))));
        var_19 *= ((/* implicit */_Bool) (-((+(((/* implicit */int) var_4))))));
    }
    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)21)))) ^ (((/* implicit */int) max((var_6), (((/* implicit */unsigned char) (_Bool)0)))))))) ? (((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */int) var_5))))) / (27ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)235))))), (((var_10) ? (var_8) : (((/* implicit */unsigned int) 2147483625))))))))))));
        /* LoopNest 3 */
        for (short i_4 = 3; i_4 < 13; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                        {
                            arr_20 [i_3] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (arr_7 [i_3])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_10))))))), (((((/* implicit */int) var_1)) << (((arr_0 [i_3]) - (13961100213975369679ULL)))))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((unsigned short) 4136512641U)), (((/* implicit */unsigned short) (short)-14128))))) ? (((((/* implicit */_Bool) (unsigned short)64134)) ? ((-(18446744073709551607ULL))) : ((+(arr_4 [i_7]))))) : (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (arr_9 [i_3] [i_6]) : (((/* implicit */unsigned long long int) (-(var_7))))))));
                            var_23 *= ((/* implicit */_Bool) (+(-1)));
                            var_24 -= ((/* implicit */short) arr_21 [i_3] [i_3] [i_8] [i_5]);
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            arr_27 [i_3] [i_3] [i_5] [i_3] [i_9] [i_3] = ((((/* implicit */_Bool) (short)-16733)) ? (1256007620) : (((/* implicit */int) (_Bool)1)));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2114583811)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)17761)) / (((/* implicit */int) (short)14336))))) : (1ULL))))));
                        }
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((((/* implicit */_Bool) -2231230722963212921LL)) ? (((/* implicit */long long int) 1411284708)) : (9223372036854775807LL))) >> (((max((min((var_2), (((/* implicit */unsigned long long int) (unsigned short)24967)))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)14583)))))) - (24938ULL))))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) 4294967295U)) ? (arr_13 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)58380))))))) & (min((((/* implicit */unsigned int) (~(778153307)))), ((+(var_8)))))));
    }
    var_28 = (-(((/* implicit */int) var_9)));
    var_29 *= ((/* implicit */short) max((((/* implicit */unsigned short) (signed char)6)), ((unsigned short)7156)));
}
