/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222608
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
    var_12 = ((/* implicit */long long int) (~(((var_9) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max(((+((~(((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) (unsigned char)108)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((var_0), (((/* implicit */int) (!(((/* implicit */_Bool) (+(-3811542135574192585LL)))))))));
        var_14 ^= (+(((((-354766696) + (2147483647))) << (((5646017079332060439ULL) - (5646017079332060439ULL))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) (short)1773);
        var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) min((-354766702), (var_6)))) ? (((((/* implicit */_Bool) (short)-25417)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (short)2302)))) : (arr_6 [i_1]))) * (((/* implicit */int) ((arr_5 [i_1]) > (((/* implicit */long long int) (((_Bool)0) ? (arr_6 [i_1]) : (((/* implicit */int) var_2))))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) arr_9 [i_2]);
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-106)) && (((/* implicit */_Bool) arr_6 [i_2]))))) : (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (5429491805181921834ULL))))))));
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(var_3)))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3])) ? (var_6) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -75459849)))))) : (var_9)));
            var_19 *= ((/* implicit */unsigned char) var_6);
            arr_14 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2683874923U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? ((~(arr_4 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))));
        }
        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_20 = ((/* implicit */short) (+(((arr_5 [i_4]) / (arr_5 [i_2])))));
            arr_18 [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((min((((/* implicit */int) (short)-18694)), (var_10))) + ((-(((/* implicit */int) arr_9 [i_4]))))))), (var_11)));
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) (-((~(arr_20 [i_2] [i_5])))));
            arr_22 [i_5] = ((/* implicit */unsigned short) arr_7 [i_2]);
            var_22 = ((/* implicit */unsigned int) (~(((long long int) arr_1 [i_5]))));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                var_23 = ((long long int) (!(((/* implicit */_Bool) var_6))));
                var_24 = ((/* implicit */short) var_0);
                var_25 &= ((/* implicit */_Bool) (unsigned char)41);
            }
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned char) arr_23 [i_5] [i_5] [i_5])), (min((arr_21 [i_7] [i_5] [i_2]), (((/* implicit */unsigned char) ((var_7) && (var_3))))))));
                var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-18681)) : (var_10)))) : (var_8))) * (((/* implicit */long long int) min((((/* implicit */int) arr_17 [i_5] [i_2])), (((((/* implicit */int) (short)10033)) / (var_10))))))));
                var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_2])) ? (min((1481835220U), (702707313U))) : (min((((/* implicit */unsigned int) (short)-26660)), (379426127U))))))));
            }
        }
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                for (long long int i_10 = 1; i_10 < 10; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        {
                            arr_39 [i_9] [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((9223372036854775788LL) >> (((((/* implicit */int) arr_31 [6LL] [6LL])) - (140)))))))) ? (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_2] [i_8] [i_9] [i_10]))))), (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5827)) ? (127ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5859))))))))))));
                            var_29 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1118113601))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) var_1))));
        }
    }
    var_31 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((8U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) > (var_5));
    /* LoopNest 3 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (long long int i_13 = 2; i_13 < 15; i_13 += 4) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1123883892)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((+(995599600U)))))) ? (((((/* implicit */_Bool) ((long long int) arr_46 [i_12] [i_12] [i_12] [i_14]))) ? (((/* implicit */unsigned long long int) (-(4294967288U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (arr_4 [i_14 + 3]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (-4636691422089579061LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) + (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))));
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 14; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                        {
                            {
                                arr_54 [i_12] [i_12] [i_12] [i_12] = (+(((arr_4 [i_14 + 3]) * (min((var_11), (((/* implicit */unsigned long long int) arr_40 [i_12] [i_12])))))));
                                var_33 = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) arr_2 [i_12])) ? (12138858157616243486ULL) : (((/* implicit */unsigned long long int) var_6)))), (((((/* implicit */_Bool) arr_5 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) : (arr_4 [i_16])))))));
                                var_34 = ((/* implicit */signed char) arr_42 [i_15]);
                            }
                        } 
                    } 
                    var_35 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_4 [1LL])) || (((/* implicit */_Bool) 2693725551U)))))) + ((~(arr_42 [i_13 + 2])))));
                    var_36 = var_9;
                }
            } 
        } 
    } 
}
