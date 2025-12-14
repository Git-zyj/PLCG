/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225536
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_4 [i_0] &= ((/* implicit */unsigned long long int) ((max((35404165875907844ULL), (((/* implicit */unsigned long long int) (unsigned short)31744)))) == (((/* implicit */unsigned long long int) var_0))));
            var_11 = ((/* implicit */unsigned short) min((min((1022619936U), (3696132359U))), (((/* implicit */unsigned int) (unsigned short)33792))));
            arr_5 [i_0] &= ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) -3555761875982556856LL)))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 1) 
        {
            arr_8 [i_0 + 1] [i_2] [i_2 + 1] = ((/* implicit */unsigned int) (short)2124);
            var_12 = ((/* implicit */_Bool) (((+(arr_7 [i_0] [i_0] [i_0]))) - (((long long int) arr_2 [i_0] [i_0]))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) << (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-6071)) && (((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_3] [i_3])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 4) 
                        {
                            var_14 |= arr_1 [i_0 + 2];
                            arr_17 [i_5] &= ((/* implicit */long long int) arr_1 [i_0]);
                        }
                        var_15 += ((/* implicit */unsigned long long int) (-(3272347364U)));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-118)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned char) (((_Bool)0) ? (arr_13 [i_8] [i_7] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                        var_18 += ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0])) && ((_Bool)0))))));
                        arr_27 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)94))));
                        var_19 = ((/* implicit */long long int) min((var_19), (arr_15 [i_0] [i_0] [i_6] [i_6] [i_7] [i_8 - 1] [i_8])));
                    }
                } 
            } 
            arr_28 [i_6] [i_6] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_21 [i_6] [i_6 - 1]))));
        }
        var_20 += ((/* implicit */_Bool) ((max((arr_1 [(unsigned short)4]), (((3586054699504136872ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14039))))))) & (min((arr_1 [i_0 - 2]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0)))))))));
    }
    /* LoopNest 3 */
    for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        for (int i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (short i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            {
                                arr_44 [i_9] [i_10] [i_11] [i_10] = ((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (var_6)))), (((/* implicit */unsigned long long int) (+(arr_3 [i_9] [5ULL]))))));
                                arr_45 [i_10] [i_10] [i_11] [i_10] [i_10] = ((/* implicit */short) ((unsigned short) max((((/* implicit */long long int) arr_34 [i_12] [i_9] [i_9])), (arr_29 [i_9]))));
                                var_21 = ((/* implicit */long long int) min((var_21), (max((((((/* implicit */_Bool) min((1022619921U), (((/* implicit */unsigned int) -115985620))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4554837399794097482LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_9] [i_9] [i_9] [i_9] [i_9] [(_Bool)1])) ? (((/* implicit */int) ((arr_19 [i_9]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : ((-(((/* implicit */int) (short)-6071)))))))))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-125))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_7))));
    /* LoopSeq 1 */
    for (unsigned int i_14 = 3; i_14 < 24; i_14 += 4) 
    {
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (!(var_3))))));
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 1; i_15 < 24; i_15 += 4) 
        {
            for (int i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                for (long long int i_17 = 4; i_17 < 24; i_17 += 4) 
                {
                    {
                        arr_55 [i_14] [(unsigned char)5] [(short)15] [i_14] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((arr_54 [i_14] [i_14] [i_14 + 1] [i_14] [i_14] [i_14 - 1]) == (arr_50 [i_15] [i_15] [i_15] [i_15])))), (arr_47 [i_15]))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149)))));
                        var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */int) max(((unsigned char)122), (var_10)))), (((((/* implicit */_Bool) (short)-5262)) ? (arr_53 [i_14] [17LL] [i_14 - 1] [i_14] [i_14]) : (((/* implicit */int) var_10))))))), ((+(max((((/* implicit */unsigned int) var_4)), (1022619921U)))))));
                        arr_56 [i_14] = ((/* implicit */unsigned short) max((((((((/* implicit */int) (short)2471)) - (((/* implicit */int) var_3)))) >> (((((/* implicit */int) max(((unsigned short)11752), (((/* implicit */unsigned short) (signed char)-116))))) - (65400))))), (((/* implicit */int) (unsigned short)33792))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) ((signed char) 715680025U))) >= (((/* implicit */int) (!((_Bool)0)))))))));
    }
}
