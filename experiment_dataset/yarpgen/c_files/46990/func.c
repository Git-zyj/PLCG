/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46990
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
    var_15 -= ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) (~(6198261677476203831LL)))))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    var_17 = ((/* implicit */short) ((12929689100562608328ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_8 [i_1] [(short)22] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_6)))))));
                }
                for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 16412579370495828070ULL)) && (((/* implicit */_Bool) ((((((/* implicit */int) (short)-16019)) + (2147483647))) << (((/* implicit */int) (_Bool)0)))))));
                        var_19 |= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_3 - 2] [i_3 - 2] [i_3 - 1])) == (((/* implicit */int) arr_6 [i_3 - 2] [i_3 - 2] [i_3 - 1]))))), (((((/* implicit */_Bool) arr_6 [i_3 - 2] [i_3 - 2] [i_3 - 1])) ? (6198261677476203831LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 - 2] [i_3 - 2] [i_3 - 1])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) ((unsigned long long int) (-(arr_3 [i_5] [i_4] [i_3]))));
                            var_21 = ((/* implicit */signed char) (-(3576782603U)));
                            arr_17 [i_3] [8U] [i_5] [i_5] [i_5] [i_5] = (-(((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_4] [i_5])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                        }
                        arr_18 [i_4] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_3 - 1] [i_4]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((short) arr_12 [6] [i_3 + 1] [i_3] [i_3] [6])))));
                                var_23 = ((/* implicit */long long int) max((((/* implicit */int) arr_2 [i_0])), (max((((/* implicit */int) (short)-1294)), ((-(((/* implicit */int) (unsigned char)85))))))));
                                arr_23 [i_3] [i_1] [i_3] [i_6] [i_6] [13U] = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 3768010952U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_3] [5U] [i_6] [i_6])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_3 + 1] [i_6])) : (((/* implicit */int) (unsigned char)78))))) : ((~(arr_9 [i_0]))))), (((/* implicit */unsigned long long int) arr_19 [i_3] [i_3]))));
                                var_24 = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_3] [i_3] [i_7]);
                                var_25 = max((max((((/* implicit */long long int) min((((/* implicit */int) arr_13 [i_7] [i_0] [i_1] [i_0])), (arr_0 [i_0])))), (arr_21 [i_3 - 2] [i_3 - 2] [i_3] [i_3]))), (((/* implicit */long long int) ((arr_7 [(signed char)20]) >= (((/* implicit */unsigned long long int) arr_10 [i_0] [i_3] [i_6]))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    var_26 = ((/* implicit */signed char) ((min((arr_25 [i_8] [i_1]), (arr_25 [i_0] [3LL]))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 7984909302132930459ULL))))) == (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-9205)) : (((/* implicit */int) (unsigned char)78)))))))));
                    var_27 = ((/* implicit */short) arr_7 [i_8]);
                    var_28 = ((/* implicit */_Bool) var_14);
                    var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_0)))) ? ((-(arr_20 [i_8] [i_1] [i_1] [i_8]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) == (((/* implicit */int) var_8))))))))));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_5 [i_0]), (((/* implicit */long long int) (_Bool)1))))) || (((_Bool) (short)-29668))));
                }
                for (short i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    var_31 = max((arr_15 [(short)16] [(short)16]), ((((((_Bool)1) || (((/* implicit */_Bool) arr_11 [i_0] [i_1] [(unsigned char)7])))) ? (114688LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_12 [(signed char)8] [i_1] [i_0] [i_0] [(signed char)8])))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 4; i_10 < 21; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_32 = ((((/* implicit */_Bool) ((unsigned long long int) max((arr_9 [i_0]), (((/* implicit */unsigned long long int) var_1)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_10 - 2] [i_10 - 3] [i_10 + 2] [i_10 + 2] [i_1])) ? (((/* implicit */int) arr_22 [i_10 - 4] [i_10 - 4] [i_10 - 3] [i_10 - 3] [i_10])) : (((/* implicit */int) (_Bool)0))))) : (-4177324886779431515LL));
                                var_33 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-12398))) != (2981465841U)))), (16412579370495828070ULL)))));
                            }
                        } 
                    } 
                }
                arr_36 [i_0] |= ((/* implicit */short) ((_Bool) max((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (var_7) : (((/* implicit */long long int) arr_30 [i_0] [i_0] [16U] [i_0])))), (min((825838805693814251LL), (((/* implicit */long long int) (_Bool)1)))))));
                var_34 ^= ((/* implicit */short) ((arr_3 [i_0] [i_1] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)177))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 3) 
    {
        for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            for (unsigned int i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                {
                    var_35 = ((/* implicit */unsigned int) -1278169953092524254LL);
                    var_36 = ((/* implicit */long long int) (+(70366596694016ULL)));
                    arr_45 [i_12] [i_13] [i_12] = max((((/* implicit */unsigned long long int) min(((_Bool)1), (arr_41 [i_14] [(short)10] [i_12])))), (70366596694016ULL));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        for (short i_16 = 2; i_16 < 12; i_16 += 4) 
                        {
                            {
                                arr_50 [i_12] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)228)), (arr_32 [i_16 + 1] [i_16 - 2] [i_16] [i_16 + 1] [i_15]))))));
                                arr_51 [i_14] [i_14] [i_12] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)110)), (1278169953092524254LL)))) ? ((~(var_0))) : (((/* implicit */long long int) ((((/* implicit */int) (short)16018)) * (((/* implicit */int) (unsigned char)110)))))));
                                var_37 = var_8;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) max((var_2), (var_8)))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-12398))) != (var_13))))))) - (var_1)));
    var_39 = ((/* implicit */long long int) ((_Bool) var_7));
}
