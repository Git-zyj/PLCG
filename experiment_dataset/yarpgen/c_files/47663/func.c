/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47663
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) ((unsigned int) var_9));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] [i_1] [i_1] [i_3] [i_4] = (+((+(var_14))));
                                var_16 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-10037)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (var_11))) << (((16397204860977120219ULL) - (16397204860977120214ULL)))));
                                var_17 -= ((/* implicit */unsigned short) (+(var_7)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0 + 1] [i_0 + 1] [i_0] [i_0]) : (arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0])));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            arr_21 [i_0] [i_5] = ((short) 1398770594);
                            var_19 = (-(((/* implicit */int) arr_18 [(unsigned short)18] [i_5])));
                            var_20 *= ((/* implicit */unsigned short) 0U);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1398770592)) ? (((/* implicit */int) arr_15 [i_6] [i_5])) : (((/* implicit */int) (signed char)121))));
                            var_22 = ((/* implicit */unsigned short) ((511ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        }
                        var_23 = ((/* implicit */_Bool) var_12);
                    }
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 2; i_8 < 18; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) ((unsigned short) var_7));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (+(var_14))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */_Bool) (unsigned short)65535);
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (signed char)-26))))));
                            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [6ULL] [12U] [i_0 - 1]))));
                            arr_30 [17U] [17U] [17U] [i_7] [4U] = ((/* implicit */short) var_2);
                            arr_31 [i_7] [i_7] [(unsigned short)19] [i_7] [i_7] = ((((/* implicit */_Bool) 18446744073709551100ULL)) ? (((/* implicit */int) arr_18 [i_1] [i_7])) : (((/* implicit */int) arr_18 [i_0 - 1] [i_1])));
                        }
                        var_29 += ((/* implicit */short) 6732847261171981844ULL);
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        var_30 = ((/* implicit */_Bool) (~((((-(942567730U))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-2048)))))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 1; i_11 < 21; i_11 += 1) 
        {
            for (unsigned int i_12 = 3; i_12 < 22; i_12 += 4) 
            {
                {
                    var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_38 [i_11 + 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_38 [i_11 - 1])));
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 21; i_13 += 4) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((-(max((((/* implicit */unsigned long long int) var_0)), (arr_36 [i_12]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) << (((((((/* implicit */int) (signed char)-112)) ^ (((/* implicit */int) (_Bool)1)))) + (112))))))));
                                arr_44 [i_10] [i_10] [i_10] [i_10] [i_10] = min((min((((unsigned int) 16235881096722681743ULL)), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44499))) >= (4294967295U)))))), (((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_5)))))));
                                var_33 = max((0U), (((/* implicit */unsigned int) ((_Bool) 7655064375188719703ULL))));
                                arr_45 [i_10] [i_10] [(signed char)1] [i_13] [i_13] [i_12] = ((var_13) / (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 8979895637255488855ULL)) ? (2047ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned long long int) (~(var_9)))))))));
                                var_34 = ((/* implicit */unsigned short) ((min((var_0), (((/* implicit */unsigned int) (signed char)88)))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (var_9)))) ? ((~(var_9))) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_43 [i_14] [i_13] [i_12] [i_11] [i_10]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_15 = 4; i_15 < 22; i_15 += 4) 
        {
            var_35 = ((/* implicit */unsigned short) min((var_7), (arr_42 [i_15] [i_15] [i_15] [i_15] [(unsigned short)3] [i_10] [i_10])));
            arr_49 [i_10] [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(var_7))), (((/* implicit */unsigned long long int) var_5)))))));
            var_36 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) ((_Bool) 13U))))))));
        }
        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 1) 
        {
            var_37 = ((/* implicit */unsigned int) min((((unsigned short) min((4028381693U), (((/* implicit */unsigned int) var_2))))), (var_5)));
            var_38 = ((/* implicit */short) (signed char)27);
        }
    }
    /* LoopNest 2 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 20; i_19 += 1) 
                {
                    for (unsigned short i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) min((((unsigned long long int) min((((/* implicit */unsigned int) var_6)), (2355067602U)))), (((/* implicit */unsigned long long int) min((var_6), (arr_4 [i_19])))))))));
                            arr_61 [18ULL] [i_19] [18ULL] [i_20] = arr_22 [i_17] [i_19] [i_18] [i_17];
                            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_1 [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_17]))) : (var_8))))))));
                        }
                    } 
                } 
                var_41 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1073741824)) ? (var_7) : (((/* implicit */unsigned long long int) min((4274948391U), (max((((/* implicit */unsigned int) (_Bool)1)), (var_13))))))));
                var_42 = ((/* implicit */unsigned int) arr_27 [i_17] [i_17] [i_17] [i_17] [i_17]);
            }
        } 
    } 
}
