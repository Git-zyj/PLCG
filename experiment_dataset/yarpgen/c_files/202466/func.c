/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202466
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
    var_16 = ((/* implicit */unsigned long long int) (signed char)-86);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_1 [i_0]));
        var_17 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-31830)))));
    }
    var_18 |= ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 3 */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] |= ((/* implicit */long long int) arr_3 [i_1]);
        var_19 += ((/* implicit */unsigned int) (-(min((-6049116458690054640LL), (((/* implicit */long long int) (short)21998))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) arr_4 [i_1])) : ((~(((/* implicit */int) arr_4 [i_1]))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((int) -1885794879));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_21 += ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-31817))));
                            arr_17 [(short)8] [(short)17] [1ULL] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -2088036270)) ? (((/* implicit */int) arr_16 [i_2] [i_2] [i_3] [(_Bool)1] [i_3 - 1] [i_4])) : (((/* implicit */int) arr_14 [i_3 - 1]))))) >= (((6049116458690054639LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-31853)))))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) ((arr_13 [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4])))))) ? (((/* implicit */int) arr_3 [i_3 + 1])) : (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-31840)))))) != (((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 1] [i_1])))))));
                            var_23 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_4]))));
                            arr_18 [i_5] = ((/* implicit */long long int) (~((~(((/* implicit */int) ((((/* implicit */int) arr_8 [4LL] [i_2])) != (((/* implicit */int) (signed char)-60)))))))));
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_10))));
            var_25 *= ((/* implicit */_Bool) max((((((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [11ULL] [i_1] [i_1])) * (((/* implicit */int) arr_15 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) max((((/* implicit */short) arr_15 [i_2] [i_2] [i_1] [i_1] [i_1] [i_1])), (arr_16 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
            var_26 *= ((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
        }
        for (short i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (-(((/* implicit */int) ((short) ((1867056430863304178LL) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1]))))))))))));
            var_28 ^= ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) (short)6783)), (4294967290U))));
            var_29 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 6049116458690054652LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((unsigned int) var_2))))) <= (((/* implicit */unsigned long long int) 2222942801U))));
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 22; i_7 += 2) 
        {
            var_30 = ((/* implicit */int) ((arr_23 [i_7 - 2] [i_7 + 1]) << (((((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) (unsigned short)65535)))) + (38488)))));
            var_31 += ((/* implicit */unsigned long long int) (_Bool)1);
        }
    }
    for (int i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned short) (-(max((arr_24 [i_8] [i_8]), (arr_24 [i_8] [i_8])))));
        /* LoopNest 3 */
        for (short i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            for (long long int i_10 = 3; i_10 < 16; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    {
                        var_32 ^= ((/* implicit */unsigned long long int) arr_31 [i_9]);
                        arr_36 [i_8] [i_9] [i_8] = ((/* implicit */int) ((unsigned int) min((-6049116458690054653LL), (-6099239471376279650LL))));
                    }
                } 
            } 
        } 
        arr_37 [i_8] = (-(((/* implicit */int) arr_9 [i_8] [i_8] [i_8])));
    }
    /* vectorizable */
    for (unsigned int i_12 = 4; i_12 < 14; i_12 += 1) 
    {
        var_33 = ((/* implicit */unsigned int) -6049116458690054632LL);
        arr_42 [i_12] [i_12] = ((/* implicit */unsigned int) -1035656168);
        arr_43 [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_28 [i_12] [i_12 - 2] [i_12 - 1]))));
    }
    var_34 = ((/* implicit */unsigned short) ((unsigned char) ((int) 17592186044415ULL)));
}
