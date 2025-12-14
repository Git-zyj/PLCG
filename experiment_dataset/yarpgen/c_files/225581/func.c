/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225581
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
    var_12 ^= ((/* implicit */_Bool) (short)11792);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            var_13 = (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1])) : (min((((/* implicit */int) ((unsigned short) 1335249796U))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1)))))));
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]);
            arr_7 [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)796)))))) ? (((/* implicit */int) (short)796)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_8))))) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (18446744073709551615ULL))))) : (((((/* implicit */_Bool) 36028795945222144LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741824)) ? (arr_1 [i_0]) : (var_7)))) : (arr_3 [i_0 - 1])))));
        }
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                var_15 = ((/* implicit */unsigned int) -36028795945222145LL);
                var_16 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (~(1152920954851033088ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)1))));
            }
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                arr_15 [i_0] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-36028795945222145LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2])))));
                var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_4])) ? (((/* implicit */unsigned long long int) 36028795945222145LL)) : (((unsigned long long int) 0ULL))));
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_18 [i_5] = ((/* implicit */int) (+((-((+(var_9)))))));
                arr_19 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(0LL)))) ? (((/* implicit */long long int) (~((-2147483647 - 1))))) : (3722613797497554710LL))), (((/* implicit */long long int) ((unsigned int) ((_Bool) arr_4 [i_0 - 2] [i_2] [i_5]))))));
            }
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                arr_23 [i_0] [i_2] [i_6] = ((/* implicit */short) (_Bool)1);
                arr_24 [i_6] [i_2] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_5))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    var_18 |= ((int) ((((/* implicit */_Bool) arr_10 [i_0 + 3])) ? (-36028795945222145LL) : (-36028795945222145LL)));
                    arr_29 [i_0] [i_2] [i_0] [i_7] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)21065))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))))) : (((/* implicit */unsigned long long int) max((((long long int) (signed char)-15)), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) var_8))))))))));
                    arr_30 [i_0] [i_2] [i_7] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_6])) ? (var_0) : (arr_17 [i_0] [1U] [i_0] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7] [i_6] [i_2] [i_0]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 36028795945222145LL)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_4) : (36028795945222145LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_2] [i_6]), (((/* implicit */signed char) (_Bool)1)))))))))));
                    arr_31 [i_7] = ((/* implicit */unsigned short) min(((-(var_11))), (((/* implicit */unsigned long long int) (-(var_2))))));
                }
                arr_32 [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) -1646252322);
            }
            arr_33 [i_0] [i_2] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (~(1646252322)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)47778)) : (var_7)))) : (((((/* implicit */unsigned long long int) 0LL)) + (var_0))))));
        }
        var_19 ^= ((/* implicit */unsigned int) (~((~(max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        var_20 ^= ((/* implicit */unsigned short) var_9);
    }
    for (unsigned char i_8 = 4; i_8 < 22; i_8 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) 2147483647)) ? (max((((/* implicit */unsigned int) arr_34 [i_8])), (562063879U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_37 [(short)5]))))) ? (var_2) : (((/* implicit */int) var_1)))))));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) 16777214U)), (0LL)));
                    var_23 += ((/* implicit */unsigned short) (signed char)78);
                    var_24 = ((unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((-1LL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))) ? (((long long int) -36028795945222145LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_8 + 1]))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 3; i_12 < 19; i_12 += 4) 
        {
            for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 1; i_14 < 19; i_14 += 3) 
                {
                    {
                        arr_53 [i_11] [i_12] [i_11] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 0LL)) ? (0LL) : (0LL)))));
                        var_26 = ((((/* implicit */_Bool) ((unsigned short) 3766883115U))) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1325452501U)) ? (0LL) : (((/* implicit */long long int) 0))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)109))));
    }
    for (signed char i_15 = 1; i_15 < 20; i_15 += 2) 
    {
        arr_56 [(signed char)14] [i_15] &= ((/* implicit */short) (-(((/* implicit */int) max((arr_42 [10U] [10U]), (arr_42 [2U] [i_15]))))));
        arr_57 [i_15] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned short) (signed char)56))) ? (2032U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
        var_28 = ((/* implicit */signed char) max((min((min((0LL), (((/* implicit */long long int) (signed char)-110)))), (((/* implicit */long long int) (((_Bool)1) ? (var_2) : (((/* implicit */int) var_1))))))), (max((((((/* implicit */_Bool) (signed char)109)) ? (-9087164486160334841LL) : (36028795945222145LL))), (((/* implicit */long long int) (((_Bool)1) ? (8384512U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    }
}
