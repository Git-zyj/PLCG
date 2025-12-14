/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36590
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = 6982915507112816797ULL;
                arr_6 [i_0] [i_0] &= ((/* implicit */signed char) arr_5 [i_0] [i_0]);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */int) ((max((var_11), (((/* implicit */unsigned int) var_9)))) <= (max((arr_5 [i_0 + 1] [i_1]), (((/* implicit */unsigned int) ((unsigned char) arr_8 [i_2] [i_2] [i_1])))))));
                    arr_10 [i_1] [i_2] = ((/* implicit */long long int) var_16);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        arr_14 [i_1] = var_4;
                        var_19 = ((/* implicit */short) arr_1 [i_0]);
                        var_20 = ((/* implicit */long long int) min((var_4), (((/* implicit */short) ((min((9223372036854775794LL), (-1LL))) > (((((/* implicit */_Bool) -9223372036854775795LL)) ? (9223372036854775794LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))))))));
                    }
                    for (signed char i_4 = 3; i_4 < 10; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 1; i_5 < 7; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */long long int) ((short) (!(((9223372036854775773LL) < (arr_3 [i_0]))))));
                            var_22 = ((/* implicit */signed char) max((min((((/* implicit */long long int) arr_15 [i_5 - 1] [2ULL] [i_1 - 1] [(short)2])), (arr_16 [i_4 - 1] [i_1] [i_4 - 1] [i_4]))), (((/* implicit */long long int) arr_8 [i_1] [i_2] [i_1]))));
                        }
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (arr_11 [i_0] [i_1] [i_1] [i_1 + 1] [i_1] [i_4 - 3])));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) max((((/* implicit */long long int) (unsigned char)255)), (-9223372036854775794LL)))))));
                            var_24 = ((/* implicit */long long int) (+(min((var_13), (arr_5 [i_0] [i_1])))));
                        }
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)177))));
                            arr_25 [i_7] [i_4] [i_7] [i_1] [i_0] |= ((/* implicit */int) (~(var_0)));
                        }
                        var_26 = ((/* implicit */unsigned int) (unsigned char)177);
                        arr_26 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) (-(arr_7 [i_0 - 1] [i_1] [i_2]))));
                        arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_12 [(short)7] [(short)7] [(short)7] [i_4]))) ? (var_6) : (((/* implicit */int) arr_22 [6ULL] [i_1] [6ULL]))))), (((((((/* implicit */int) (unsigned short)53455)) <= (((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10))) : (5135400141129651889ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))))));
                        arr_28 [i_1] = ((/* implicit */unsigned char) arr_4 [i_0]);
                    }
                    arr_29 [i_1] [i_2] = ((/* implicit */signed char) arr_3 [i_0]);
                }
                arr_30 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */long long int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])), (((((/* implicit */_Bool) (short)-10857)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (9223372036854775794LL))))) : ((-(max((((/* implicit */long long int) (unsigned char)255)), (arr_19 [i_1] [i_1] [i_1] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_8 = 2; i_8 < 17; i_8 += 4) 
    {
        var_27 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8 + 2]))) : (3758095774346660029LL))), (((/* implicit */long long int) (signed char)-123))));
        /* LoopSeq 2 */
        for (long long int i_9 = 4; i_9 < 18; i_9 += 3) 
        {
            arr_36 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) -6489839510778342599LL)) && (((/* implicit */_Bool) arr_34 [i_8]))))) : ((+(((/* implicit */int) arr_34 [i_8]))))))) ? (5184716668298880604LL) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)146)), (((((/* implicit */int) (signed char)96)) & (((/* implicit */int) (unsigned short)53455)))))))));
            var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) ((_Bool) var_17))))));
        }
        for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            arr_40 [i_10] |= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_37 [i_8 + 2] [i_8 + 3] [i_8 + 3])) : (((/* implicit */int) arr_39 [i_8] [i_10] [i_8 + 3])))));
            var_29 = arr_37 [i_8] [i_8] [i_10];
            arr_41 [i_10] [i_10] &= ((/* implicit */signed char) min((((/* implicit */int) ((-1905101767686299009LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))), (((((/* implicit */int) (unsigned short)45556)) << (((((((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) + (3055144121154899374LL))) - (14LL)))))));
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                arr_46 [i_11] [i_10] [i_11] [i_8] = ((/* implicit */_Bool) ((max((min((((/* implicit */int) var_4)), (1313571098))), (((/* implicit */int) (unsigned char)253)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                arr_47 [i_11] [i_11] [i_11] [i_8] = ((/* implicit */unsigned int) (signed char)-55);
                arr_48 [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) max((((/* implicit */int) (unsigned char)20)), (-237144040)))))));
            }
            var_30 = ((/* implicit */short) (+(((/* implicit */int) ((((1757108714) / (((/* implicit */int) (unsigned char)255)))) < (((int) (short)-11035)))))));
        }
    }
}
