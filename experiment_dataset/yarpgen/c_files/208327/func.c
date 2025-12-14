/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208327
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
    var_20 = ((/* implicit */unsigned char) var_12);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] |= ((/* implicit */short) arr_6 [i_0] [i_1] [i_2 + 2] [i_3]);
                            arr_11 [i_0] |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_6 [i_3] [i_2 - 1] [i_1] [(unsigned short)10])))) ? (((/* implicit */int) (short)10124)) : (((/* implicit */int) (short)10123))))), (((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_6 [(_Bool)1] [i_1] [i_2] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10132))) : ((~(var_19)))))));
                        }
                    } 
                } 
                arr_12 [11U] = ((/* implicit */long long int) var_16);
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5] [9ULL] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((int) max((((/* implicit */short) var_3)), ((short)-21294))))) : (((((/* implicit */_Bool) var_11)) ? (var_18) : (arr_4 [i_0] [i_0] [i_5])))));
                            /* LoopSeq 1 */
                            for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned int) (-(max((((/* implicit */int) (short)-10133)), (((int) 376479485U))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_3)))) * (((/* implicit */int) ((unsigned short) (short)-10133))))))));
                                var_23 = ((/* implicit */long long int) max((((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_5] [i_4])), ((~((~(((/* implicit */int) arr_24 [i_0]))))))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) var_13)) : (var_8))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) (signed char)111)))))));
                            }
                            /* LoopSeq 2 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58258)) ? (3559539564U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10115)))));
                                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) -6393804524193989059LL)) ? (arr_14 [i_1 + 1] [i_1 + 2] [i_1]) : ((+(((/* implicit */int) (short)10140))))));
                                var_27 = var_10;
                                var_28 = ((/* implicit */unsigned int) ((((var_10) ^ (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_19 [i_0] [i_1])))))) / (max((var_15), (var_8)))));
                            }
                            for (int i_8 = 1; i_8 < 14; i_8 += 2) 
                            {
                                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_7))));
                                var_30 &= ((/* implicit */unsigned char) var_15);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_9 = 2; i_9 < 15; i_9 += 1) 
    {
        var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_19))))));
        var_32 = ((/* implicit */short) ((max((((/* implicit */long long int) (short)-25985)), (6393804524193989063LL))) / (((/* implicit */long long int) arr_30 [i_9]))));
        var_33 &= ((/* implicit */int) max((((/* implicit */long long int) (_Bool)1)), (max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-6393804524193989059LL))), (((long long int) var_18))))));
        arr_31 [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */int) arr_29 [i_9])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_16)) : (((arr_30 [i_9]) / (((/* implicit */int) var_11))))));
    }
    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        arr_35 [i_10] = ((/* implicit */signed char) var_19);
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned short) min(((((-(4063945551583654220ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25991))))), (((/* implicit */unsigned long long int) max((((int) (signed char)-60)), (((/* implicit */int) (unsigned short)7)))))));
                    arr_43 [i_10] [i_11] = ((/* implicit */unsigned short) (signed char)19);
                    /* LoopSeq 2 */
                    for (long long int i_13 = 1; i_13 < 13; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */int) (unsigned char)7)), (arr_17 [i_10] [i_11] [i_12] [i_13 + 1]))));
                        var_36 = ((/* implicit */short) ((unsigned int) 6679349776186006131LL));
                        var_37 *= ((/* implicit */short) var_19);
                    }
                    for (int i_14 = 1; i_14 < 13; i_14 += 3) 
                    {
                        var_38 = ((/* implicit */short) (unsigned char)15);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 14; i_15 += 2) 
                        {
                            var_39 = var_14;
                            var_40 = ((/* implicit */unsigned int) var_5);
                        }
                        var_41 |= ((/* implicit */signed char) var_1);
                    }
                    var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((6393804524193989051LL) / (((/* implicit */long long int) ((/* implicit */int) (short)6315)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (min((-6393804524193989070LL), (((/* implicit */long long int) 1009307206))))))) ? (((/* implicit */long long int) ((int) arr_49 [i_10] [i_10] [i_12] [i_12] [i_12]))) : ((((!(((/* implicit */_Bool) arr_14 [i_12] [i_11] [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))) : (max((((/* implicit */long long int) var_10)), (9223372036854775783LL)))))));
                }
            } 
        } 
    }
    var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) var_1)))));
    var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
}
