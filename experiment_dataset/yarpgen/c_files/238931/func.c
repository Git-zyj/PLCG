/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238931
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
    var_15 = ((/* implicit */int) max((var_15), ((~(((/* implicit */int) var_0))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) min((((/* implicit */int) var_4)), ((~(899098450)))));
        arr_2 [5U] [5U] = ((/* implicit */unsigned long long int) var_9);
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 13; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned long long int) max((arr_3 [i_0] [i_0] [i_1 - 2]), (arr_3 [i_0] [i_0] [i_0]))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) arr_3 [i_1 - 1] [i_1] [i_1 - 2]);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 13; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) arr_15 [9U]);
                        var_18 *= ((/* implicit */unsigned long long int) ((short) var_4));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0]))));
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2]))) / (((arr_15 [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (((-(arr_18 [i_5]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5])) ? (var_8) : (((/* implicit */int) var_6))))))))))))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 22; i_6 += 2) 
        {
            for (int i_7 = 1; i_7 < 21; i_7 += 2) 
            {
                {
                    arr_24 [i_5] [i_5] [i_7] |= ((/* implicit */_Bool) max((arr_20 [i_5] [i_5] [i_5]), (((/* implicit */signed char) var_12))));
                    arr_25 [i_5] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) arr_23 [i_7]);
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
                    {
                        arr_29 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */short) 1110998117U);
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            arr_33 [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */int) max((arr_31 [i_6 + 1] [i_7 + 2]), (((/* implicit */short) arr_20 [i_5] [i_8] [i_8]))))) == ((((!(var_12))) ? (((/* implicit */int) ((((/* implicit */int) arr_30 [i_7 + 1])) == (((/* implicit */int) arr_32 [i_7]))))) : (((/* implicit */int) var_10))))));
                            var_22 = (~((~(((/* implicit */int) arr_30 [i_7 - 1])))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                    {
                        arr_37 [i_6] = ((/* implicit */unsigned int) ((var_7) % ((~(((/* implicit */int) arr_36 [i_5] [i_5] [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7 + 2]))))));
                        arr_38 [11LL] [i_6] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_6 + 1] [i_6 - 1] [i_7])) && (((/* implicit */_Bool) arr_20 [i_6 + 1] [i_6 - 1] [i_6]))));
                        arr_39 [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) ((arr_21 [i_6 + 1] [i_6 - 1]) >= (((/* implicit */unsigned long long int) var_8))));
                    }
                    arr_40 [i_6] [i_7 + 2] = ((/* implicit */unsigned short) arr_26 [i_5] [i_6] [i_6] [i_5]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_11 = 1; i_11 < 22; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                {
                    arr_45 [i_5] = ((/* implicit */unsigned long long int) ((signed char) arr_35 [i_5] [i_5] [i_5] [i_11] [i_11 + 1]));
                    var_23 -= ((/* implicit */long long int) -115511870);
                }
            } 
        } 
    }
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39901))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((13840893075459769831ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
}
