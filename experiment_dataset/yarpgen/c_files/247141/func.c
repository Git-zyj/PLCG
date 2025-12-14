/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247141
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (arr_1 [i_0] [i_0]));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((4969792878332269862ULL) | (arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned char) var_10);
            var_15 &= ((/* implicit */unsigned char) arr_4 [i_1]);
        }
        for (unsigned char i_3 = 2; i_3 < 18; i_3 += 1) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */int) arr_11 [i_3 + 1] [i_3] [i_3 + 1])) != (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1]))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) arr_8 [i_1] [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        {
                            arr_20 [i_6] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)-1);
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_17 [(unsigned char)14] [i_3 - 1] [i_3] [i_3] [i_3] [6ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7873130452132952938ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [i_6] [i_4] [i_5] [i_4]))))))));
                            var_19 = ((((/* implicit */_Bool) arr_19 [i_5] [i_1] [i_1] [i_1])) ? (13476951195377281753ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-23691)))));
                            var_20 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_15 [i_1] [i_1]))))));
                            arr_21 [8U] [i_1] [i_5] = ((/* implicit */unsigned char) ((var_9) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (251658240U) : (var_4))))));
                        }
                    } 
                } 
            }
            var_21 += ((/* implicit */_Bool) arr_6 [i_3]);
            var_22 += ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (2785881376U))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54242)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_3] [i_1] [i_3 + 1] [i_1])))));
        }
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            arr_24 [i_1] [i_7] = ((/* implicit */unsigned int) ((var_10) | (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (unsigned char)28))));
            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_1])) ? (arr_13 [i_1] [13ULL] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            var_26 = ((/* implicit */short) ((((_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [i_1])) - (((/* implicit */int) var_7)))))));
        }
        arr_25 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 3114148216U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) : (4969792878332269862ULL)));
        var_27 = (+(((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (unsigned int i_8 = 1; i_8 < 21; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                {
                    var_28 *= ((/* implicit */unsigned long long int) ((4245288228521917941ULL) != (((/* implicit */unsigned long long int) 0LL))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 23; i_12 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (4181430706U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))))))) <= (((/* implicit */unsigned long long int) arr_35 [i_8] [i_9] [i_10] [i_12] [i_12] [i_8]))));
                                var_30 += ((/* implicit */unsigned int) 3738633856864469737ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */short) 2619552825U);
        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_29 [16U])))), ((_Bool)1)))), (min((1509085919U), (1509085923U))))))));
        var_33 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) 58230763283095624ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2710301272U)))))));
    }
    var_34 = ((/* implicit */unsigned long long int) var_4);
}
