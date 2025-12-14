/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35688
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)184)) ? (var_0) : (var_10)))) ? (min((((/* implicit */long long int) var_0)), (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-48)) : (var_4))))))) ? (max((((((/* implicit */long long int) ((/* implicit */int) var_6))) - (6444594301176707402LL))), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) 2388333340349574228LL))), (((unsigned char) var_4))))))));
    var_15 = var_7;
    var_16 = ((/* implicit */signed char) ((-1883569405) != (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-3309437368791604789LL)));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_4 [i_1 - 1] [i_2])));
                        var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775799LL)) ? (-7397697151095624288LL) : (3309437368791604789LL)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_20 [i_0] [(signed char)8] [i_0] [(signed char)1] = ((/* implicit */unsigned char) -3309437368791604793LL);
                var_19 = ((/* implicit */int) 3309437368791604788LL);
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (_Bool)1))));
                            var_21 = arr_5 [i_0] [i_4] [i_0];
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0]))) : (-1LL))))));
                        }
                    } 
                } 
            }
            var_23 = ((/* implicit */unsigned char) ((((1309498145) / (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3309437368791604789LL)) ? (-2400129812365774333LL) : (-3309437368791604789LL)))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((signed char) (signed char)56)))))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -3309437368791604771LL)) ? (3309437368791604789LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-7))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(signed char)19] [i_4] [(signed char)19] [i_0])) / (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_0] [i_4] [i_0])))) : ((-(arr_16 [i_4] [(_Bool)1])))));
        }
        for (unsigned char i_8 = 3; i_8 < 18; i_8 += 4) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) -3309437368791604789LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8 + 1] [i_8] [(signed char)19]))) : (-3769814590573878569LL)));
            /* LoopNest 2 */
            for (signed char i_9 = 2; i_9 < 20; i_9 += 3) 
            {
                for (signed char i_10 = 1; i_10 < 20; i_10 += 3) 
                {
                    {
                        var_26 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_12 [i_8] [i_8] [(unsigned char)10]))))));
                        arr_38 [i_9] [i_9] [i_8] = ((/* implicit */unsigned char) ((((max((arr_27 [i_8 + 3] [i_8 + 1] [i_8] [i_8] [i_8 + 3] [i_8 + 1]), (arr_27 [i_8 + 2] [i_8 + 2] [(signed char)9] [i_8] [i_8 - 2] [i_8 + 1]))) + (2147483647))) >> (((((((/* implicit */int) arr_8 [i_9 - 1] [i_8 - 3] [(signed char)14])) ^ (var_1))) - (400232525)))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_11 = 3; i_11 < 17; i_11 += 4) 
    {
        arr_41 [8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -3309437368791604790LL)) ? (-3309437368791604789LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))))), (((/* implicit */long long int) arr_28 [i_11 + 3] [i_11] [i_11 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3309437368791604789LL)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (-8426773039032499596LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 54911731)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1)))))))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((3309437368791604789LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (var_0))))))) ? (min((((((/* implicit */_Bool) arr_12 [i_11 + 1] [i_11] [i_11 + 1])) ? (var_4) : (((/* implicit */int) (signed char)-25)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_35 [i_11] [(signed char)0])) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) arr_23 [i_11 + 2] [i_11] [i_11 - 1])))))));
    }
    for (int i_12 = 3; i_12 < 19; i_12 += 1) 
    {
        arr_45 [i_12 + 1] = ((/* implicit */long long int) var_3);
        /* LoopNest 2 */
        for (signed char i_13 = 3; i_13 < 18; i_13 += 2) 
        {
            for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
            {
                {
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) arr_31 [7] [7] [i_13] [i_14])) : (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_15 = 1; i_15 < 16; i_15 += 4) 
                    {
                        var_29 |= ((/* implicit */long long int) var_11);
                        var_30 = ((/* implicit */unsigned char) (-(var_1)));
                        var_31 += ((((((/* implicit */_Bool) -3309437368791604789LL)) ? (arr_52 [i_12] [11] [i_12] [i_12] [i_12] [(signed char)2]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [16] [i_14]))))) > (((/* implicit */long long int) arr_1 [i_13 - 1] [i_15 + 3])));
                    }
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        arr_56 [i_13] = ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (0)))))));
                        arr_57 [i_12] [(signed char)14] &= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [(signed char)12] [i_13 - 1] [i_13 + 1])) ? (-4455881511000312007LL) : (((/* implicit */long long int) (-2147483647 - 1))))) & (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_12 - 3] [i_16])))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_12 [i_13 + 1] [i_12 - 1] [i_12 - 2])) ? (((/* implicit */int) (_Bool)0)) : (arr_12 [i_13 - 2] [i_12 - 1] [i_12]))));
                        var_32 = max((arr_18 [i_12 + 1]), (((/* implicit */int) (!(((/* implicit */_Bool) min((-3309437368791604805LL), (((/* implicit */long long int) (signed char)-75)))))))));
                        var_33 = ((/* implicit */int) arr_36 [i_13] [(_Bool)1] [i_13]);
                    }
                    for (int i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) 0)), (-3309437368791604779LL))))))));
                        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_17] [(_Bool)1] [i_12]))));
                        var_36 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 157050405)) ? (var_10) : (((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) arr_46 [i_12] [i_13]))))) ? (((((/* implicit */_Bool) arr_27 [i_12 + 1] [i_12 + 1] [i_12 + 1] [(signed char)12] [i_17] [i_17])) ? (((/* implicit */int) arr_49 [i_12 + 1])) : (var_5))) : (((((/* implicit */_Bool) var_12)) ? (arr_51 [i_14] [i_14] [18LL] [i_14]) : (((/* implicit */int) arr_14 [i_13]))))))));
                    }
                }
            } 
        } 
    }
}
