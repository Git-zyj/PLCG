/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235561
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
    var_19 = ((/* implicit */signed char) ((long long int) var_11));
    var_20 = ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))), (min((((/* implicit */unsigned int) arr_5 [i_1] [i_1])), (var_6)))));
            arr_6 [i_1] = ((/* implicit */short) (((+(arr_1 [i_1]))) + (((/* implicit */long long int) (+(min((arr_3 [i_1] [i_0]), (var_6))))))));
            arr_7 [i_0] |= ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-1514))))));
        }
        for (int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_0))));
            arr_12 [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_0] [i_2]))))));
            arr_13 [i_0] [i_2] = ((/* implicit */short) ((unsigned int) 2097024LL));
            var_23 = ((unsigned int) min((arr_9 [i_0]), (arr_9 [i_0])));
        }
        /* LoopSeq 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            arr_18 [i_3] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) (signed char)86)))) % (((int) var_9))));
            arr_19 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) (short)-2634)) ? (5318121374725518781LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29433))));
        }
        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
        {
            arr_23 [i_0] [i_0] [i_4] &= ((/* implicit */int) var_17);
            arr_24 [i_0] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((arr_3 [i_0] [i_0]) << (((arr_3 [i_4] [i_0]) - (539271001U)))))) - (((((2856625271165293604LL) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))))) + (min((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0])))))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_24 = max(((~(((7U) / (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) ((((/* implicit */int) max((var_16), (((/* implicit */unsigned char) (_Bool)1))))) | ((~(((/* implicit */int) (_Bool)1))))))));
                            arr_33 [i_5] = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (short)-613))) + (-1LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0]))) + (var_6))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            arr_36 [i_0] [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -8LL)) ? (arr_10 [i_0]) : (arr_29 [i_8] [i_8] [i_8] [i_8] [i_8])))));
            arr_37 [i_8] = ((/* implicit */short) (((((~(var_4))) & (((/* implicit */long long int) ((/* implicit */int) var_2))))) & (((max((((/* implicit */long long int) arr_29 [i_8] [i_8] [i_8] [i_0] [i_0])), (0LL))) | (((/* implicit */long long int) ((/* implicit */int) (short)-19151)))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                var_25 = ((/* implicit */short) (-(-7LL)));
                var_26 = ((/* implicit */unsigned char) (+(-19LL)));
            }
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_0] [i_8] [i_10]))))) & (var_4)));
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    arr_45 [i_0] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */short) min((((/* implicit */long long int) max(((+(var_18))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))))), (max((((/* implicit */long long int) min((arr_29 [i_0] [i_0] [i_8] [i_10] [i_8]), (((/* implicit */unsigned int) arr_2 [i_11] [i_0]))))), ((+(-540530997685016672LL)))))));
                    arr_46 [i_0] [i_0] [i_10] [i_8] [i_11] = ((/* implicit */short) max((arr_35 [i_0] [i_8] [i_11]), (((/* implicit */unsigned int) arr_26 [i_8] [i_8] [i_8] [i_8]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_0] [i_0] [i_10] [i_0] [i_11] [i_12]))))))))));
                        arr_49 [i_8] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned char)167))))));
                        arr_50 [i_0] [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (signed char)-15)), (arr_25 [i_11]))) >= (((/* implicit */long long int) min((((/* implicit */int) arr_14 [i_10] [i_0])), (2147483641))))));
                        arr_51 [i_8] [i_8] [i_8] [i_0] [i_12] = ((/* implicit */unsigned int) 2147483641);
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((short) (+(var_1)))))));
                        arr_56 [i_0] [i_8] [i_10] [i_11] [i_13] = ((/* implicit */short) ((-6343952768617626125LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                    }
                    var_30 += ((/* implicit */short) min((min(((-(var_1))), (min((23U), (arr_17 [i_0] [i_8] [i_10]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))));
                    var_31 += ((/* implicit */unsigned int) var_16);
                }
            }
            for (long long int i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                var_32 *= ((/* implicit */short) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_1))) == (arr_52 [i_0] [i_0] [i_14] [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) (short)-13391))))));
                arr_60 [i_8] [i_8] [i_8] = ((/* implicit */signed char) (+(-1LL)));
            }
        }
        var_33 -= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_13))))));
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) max(((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))), ((-(((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))))))));
        arr_61 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */long long int) var_3)) : (max((((/* implicit */long long int) var_13)), (var_4)))))));
    }
    for (unsigned char i_15 = 1; i_15 < 24; i_15 += 1) 
    {
        var_35 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) -6LL)) && (((/* implicit */_Bool) ((1852088704) >> (((/* implicit */int) (_Bool)1)))))));
        var_36 += ((/* implicit */long long int) ((unsigned int) var_9));
    }
    var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) min((((/* implicit */unsigned short) min((min(((short)-1), (((/* implicit */short) var_8)))), (var_13)))), ((unsigned short)20))))));
}
