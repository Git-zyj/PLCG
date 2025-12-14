/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205607
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)48)) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) / ((-(var_4))))) : ((+(((var_7) << (((var_10) - (4405015385951247304LL)))))))));
    var_12 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) var_5);
                var_14 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_6)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (var_6))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) arr_3 [10LL] [i_1])) : (((/* implicit */int) arr_2 [i_1]))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (-(281474976186368ULL))))))))));
                                var_16 = ((/* implicit */long long int) (~(((unsigned int) ((((/* implicit */int) var_5)) & (arr_1 [i_0]))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_6 [i_2 + 1] [i_0 + 2] [i_0])) << (((var_8) - (1086226954916666874LL))))), (((((/* implicit */int) arr_6 [i_2 - 1] [i_0 - 2] [i_0 + 1])) + (((/* implicit */int) var_2))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_5 = 3; i_5 < 13; i_5 += 3) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((signed char) ((short) (((_Bool)1) ? (-6525491087020843378LL) : (var_10))))))));
        arr_16 [i_5] = ((/* implicit */_Bool) min((min(((signed char)55), (arr_8 [i_5 + 1] [i_5 - 3] [i_5 - 1] [i_5 - 3]))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_5 - 3] [i_5 - 2] [i_5 - 1] [i_5 - 1])) && (((/* implicit */_Bool) var_5)))))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            for (int i_7 = 3; i_7 < 11; i_7 += 1) 
            {
                {
                    arr_23 [i_5] [i_5] [i_6] [i_7 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5 - 2] [i_5] [(short)17] [i_7]))) : (((var_10) / (arr_12 [i_5] [i_6] [i_5] [i_6] [i_6]))))) & (((/* implicit */long long int) (((+(var_6))) ^ (((/* implicit */int) (signed char)-49)))))));
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) >> (((/* implicit */int) arr_3 [i_7 - 3] [i_5 - 3])))) << ((((~(((/* implicit */int) arr_3 [i_7 - 2] [i_5 + 1])))) + (34)))));
                }
            } 
        } 
        var_20 -= ((/* implicit */_Bool) ((unsigned char) max((max((var_7), (var_8))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_9)) : (var_10))))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_26 [i_8]))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 2; i_9 < 22; i_9 += 3) 
        {
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                {
                    var_22 -= ((/* implicit */unsigned short) (~(-2465880503319844809LL)));
                    var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57084))) ^ ((~(-2465880503319844812LL)))));
                    arr_33 [i_8] [i_9 - 1] [i_10] &= ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                }
            } 
        } 
        var_24 = ((arr_27 [i_8] [i_8]) & (arr_27 [i_8] [i_8]));
        var_25 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) : (18446744073709551607ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2465880503319844811LL)) ? (arr_29 [i_8]) : (var_9))))));
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
    {
        arr_36 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_11])))));
        arr_37 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26355)) % (((/* implicit */int) ((var_3) != (((/* implicit */int) arr_24 [i_11])))))));
    }
    var_26 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) ((unsigned short) var_7))))));
}
