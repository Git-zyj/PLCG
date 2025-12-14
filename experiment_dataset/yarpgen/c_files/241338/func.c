/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241338
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
    var_15 = ((/* implicit */unsigned short) ((((var_13) ? (min((var_2), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_7)))))))) <= (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) ((unsigned short) (unsigned char)0)))));
            var_16 = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_0]));
            var_17 = ((/* implicit */_Bool) ((((unsigned long long int) arr_1 [i_0])) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11945999293332836801ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)34267)))))));
        }
        for (signed char i_2 = 4; i_2 < 17; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) arr_6 [i_2] [i_2]);
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned int) var_6)))));
        }
        for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            arr_11 [14U] [i_3] [i_0] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_0] [i_3 - 1]))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (unsigned short i_5 = 1; i_5 < 17; i_5 += 2) 
                {
                    {
                        arr_18 [(_Bool)1] [i_3] [i_4] [i_4] |= ((/* implicit */long long int) var_1);
                        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [i_3]))))) ^ (((var_12) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
                        arr_19 [i_3] [i_3] [i_3] [17LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34267)) >> (((var_9) - (504301282U))))))));
                    }
                } 
            } 
            var_21 *= ((/* implicit */unsigned int) ((int) ((var_2) * (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))));
        }
        arr_20 [i_0] [i_0] = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0] [(unsigned char)8]);
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            var_22 = ((/* implicit */signed char) ((unsigned int) var_0));
            arr_26 [i_6] [i_7] = ((/* implicit */_Bool) arr_1 [i_7]);
            var_23 = ((/* implicit */unsigned long long int) arr_13 [i_7] [i_7] [i_7] [i_7]);
        }
        for (long long int i_8 = 3; i_8 < 15; i_8 += 2) 
        {
            arr_29 [i_8] [i_8 - 1] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_4)) * (((/* implicit */int) arr_27 [i_6] [i_8] [i_8 + 1])))) + (2147483647))) >> (((var_5) - (12273124863883834362ULL)))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8] [i_8 - 3] [i_8]))) != ((-(4294967295U)))));
            arr_30 [i_6] [(unsigned short)4] [i_8] = ((/* implicit */unsigned short) ((arr_7 [i_8 + 4] [(_Bool)1] [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_8 + 4] [i_8] [i_8]))) : (var_2)));
        }
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (arr_33 [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_6] [i_6])))));
            arr_34 [i_9] = var_8;
            var_26 = ((/* implicit */_Bool) min((var_26), (var_13)));
            var_27 = ((/* implicit */int) (!(arr_25 [(signed char)15] [i_9] [i_9])));
        }
        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_10] [i_10])) <= (((/* implicit */int) arr_6 [i_10] [i_10]))));
            arr_37 [i_6] [i_10] [i_10] = ((/* implicit */signed char) ((_Bool) arr_21 [i_10]));
        }
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_2 [i_6]))));
        arr_38 [i_6] = ((/* implicit */int) ((((/* implicit */long long int) (~(arr_10 [i_6])))) != ((~(-14LL)))));
        arr_39 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_6]))))) != ((-(72057594036879360LL)))));
    }
}
