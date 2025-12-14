/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248796
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
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (unsigned short)11363)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (5268725133625422040LL)))))));
    var_13 *= ((/* implicit */unsigned int) (unsigned short)65535);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = (-(((var_4) % (((/* implicit */int) var_10)))));
        var_14 = arr_0 [i_0] [i_0];
        arr_4 [i_0] [(short)2] = ((/* implicit */unsigned int) arr_1 [(_Bool)1] [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65512))))) & (((/* implicit */long long int) -1)))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_1 [i_1] [i_1])))) ? (((((/* implicit */int) var_6)) & (((/* implicit */int) arr_0 [i_1] [2])))) : (((((/* implicit */_Bool) (short)-26129)) ? (var_4) : (((/* implicit */int) arr_0 [i_1] [8U]))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (long long int i_5 = 3; i_5 < 7; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) (unsigned short)65512)))));
                            arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((unsigned long long int) arr_17 [i_2] [i_2] [i_4] [i_2] [i_4])) << (((((/* implicit */int) arr_18 [10])) - (25694)))));
                            arr_21 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) arr_19 [i_5 - 2] [i_5 + 1] [(signed char)8] [i_5 + 4] [i_5] [i_6]))));
                            arr_22 [i_2] [i_2] [i_4] [(short)2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) -1753963553))))) - (((/* implicit */int) (short)-19703))));
                        }
                    } 
                } 
            } 
            var_18 = (((~(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_13 [i_3] [i_2] [i_3] [i_2])))));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            arr_25 [i_2] [i_2] [i_2] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_8 [i_7])) >= (((((((/* implicit */int) var_6)) + (2147483647))) >> (((((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2])) - (24589))))))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((min((var_2), (((/* implicit */long long int) var_5)))) >= (min((((/* implicit */long long int) arr_17 [10ULL] [6ULL] [i_7] [i_7] [i_8])), (5268725133625422040LL)))))) : ((+(((/* implicit */int) (unsigned short)11309)))))))));
                /* LoopSeq 2 */
                for (signed char i_9 = 1; i_9 < 7; i_9 += 2) 
                {
                    arr_31 [i_2] [i_7] [i_8] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_8 [4ULL]))))));
                    var_20 ^= ((/* implicit */unsigned short) (~(((unsigned int) max((((/* implicit */unsigned int) (unsigned short)18853)), (1548117072U))))));
                    arr_32 [i_7] [8LL] [i_8] = ((/* implicit */signed char) (~(min(((+(((/* implicit */int) var_6)))), ((-(((/* implicit */int) var_3))))))));
                    var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-26124)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)17757)) >= (((/* implicit */int) (short)-26124))))))));
                    arr_33 [i_2] [i_7] [i_2] [7U] [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned int) var_4));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_36 [i_2] [i_7] [i_10] [i_10] = ((/* implicit */unsigned int) arr_12 [i_8]);
                    var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1243)) ? (11047412251511751349ULL) : (((/* implicit */unsigned long long int) 2675666616U))));
                }
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) var_0);
                    arr_41 [(short)9] [i_11] [i_12] = ((/* implicit */short) max((((((unsigned int) var_3)) << (((((((/* implicit */_Bool) arr_0 [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) : (803306886U))) - (58U))))), (((/* implicit */unsigned int) arr_6 [0] [i_11]))));
                    var_24 ^= ((/* implicit */short) arr_26 [i_2]);
                }
            } 
        } 
    }
}
