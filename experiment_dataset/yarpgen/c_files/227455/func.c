/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227455
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
    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (727169933380068432ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (var_17)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) 1347576636)) ? (1347576654) : (((/* implicit */int) var_12)))))) : (((/* implicit */int) max(((unsigned char)129), (((/* implicit */unsigned char) ((3338918506690501982ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
    var_19 += ((/* implicit */unsigned long long int) var_17);
    var_20 = ((/* implicit */unsigned long long int) (((-(var_3))) - (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) % (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_7)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0 - 2]);
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) * (var_5))))));
        var_23 += ((/* implicit */short) var_14);
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                var_24 += ((/* implicit */unsigned char) var_8);
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 3])) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 3])) : (((/* implicit */int) arr_1 [i_1 + 2] [i_1 + 4]))));
                arr_9 [i_2] = ((/* implicit */unsigned short) arr_6 [i_0]);
            }
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (arr_8 [i_0 + 1]) : (arr_8 [i_0 - 2])));
            var_27 = ((/* implicit */short) (~(var_9)));
        }
        for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
            {
                arr_15 [i_4] [i_3] [(signed char)14] [i_0 + 2] = ((/* implicit */long long int) var_11);
                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_3 [i_4] [i_0 + 2] [i_0 - 2]) + (arr_3 [i_3] [i_0 + 2] [i_0 - 2])));
                arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) * (arr_13 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_4])));
            }
            for (long long int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_28 = ((/* implicit */unsigned char) var_2);
                    arr_23 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 2])) && (((/* implicit */_Bool) arr_19 [i_0] [i_0 + 1] [i_0 + 2]))));
                }
                for (int i_7 = 2; i_7 < 18; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_29 += ((/* implicit */_Bool) 1182310501U);
                        var_30 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-108))));
                    }
                    arr_29 [i_5] [i_5] [i_5] [i_3] [i_3] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_8 [i_0])))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_26 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7]))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2])) >> (((((arr_8 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))))) - (1065118039U)))));
                    arr_30 [i_0] [i_3] [i_5] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_13 [i_0] [i_3] [11] [i_7])))));
                }
                arr_31 [i_0] [i_3] = ((/* implicit */int) var_10);
            }
            var_32 -= ((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_0]);
            var_33 ^= ((/* implicit */unsigned char) var_2);
        }
        for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 2) 
        {
            var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4055018216U)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-1LL)))) ? (arr_13 [i_0 + 1] [i_9 + 1] [i_9 + 3] [6]) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 2]))));
            var_35 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_0] [i_9]))));
        }
        var_36 = ((/* implicit */unsigned int) arr_24 [i_0 - 1] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
    {
        arr_38 [i_10] |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)26274)) ? (arr_35 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_10]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_39 [i_10 + 1] = ((/* implicit */long long int) var_16);
    }
}
