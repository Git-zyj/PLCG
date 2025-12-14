/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241412
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
    var_13 = ((/* implicit */signed char) ((short) ((((((/* implicit */int) (unsigned char)19)) - (((/* implicit */int) var_0)))) * (((/* implicit */int) (unsigned short)65535)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_2] [i_2] [i_3] = (~(((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) var_6)) : (-1372699065))));
                        arr_15 [i_0] [i_1] [i_1] = var_7;
                    }
                } 
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_11))))));
    }
    for (unsigned int i_4 = 4; i_4 < 11; i_4 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_12 [i_4 - 2] [1] [i_4] [0U] [i_4] [i_4]))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            for (unsigned char i_6 = 1; i_6 < 10; i_6 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((var_2), (arr_8 [(signed char)10] [10] [10] [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                var_16 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5] [i_8])) ? (max((((/* implicit */int) arr_3 [i_4] [i_6] [i_7])), (1372699073))) : (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) arr_11 [i_6 + 1] [i_5] [i_6] [i_6 + 1] [i_4 - 1])) ? (arr_11 [i_6 - 1] [i_5] [i_7 + 1] [i_6] [i_4 - 4]) : (arr_11 [i_6 + 2] [i_5 + 2] [i_6] [i_8] [i_4 - 4]))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_8 [i_5] [(unsigned char)6] [i_7] [i_5]))) & (268995311)));
                                var_18 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) : (arr_26 [i_8] [i_7] [i_6] [i_4]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)0)))))) && (((/* implicit */_Bool) arr_28 [i_8] [i_7] [i_6] [i_6] [i_5] [i_4 - 1]))));
                                arr_30 [i_8] [i_7] [i_5] [i_5] [i_5] [i_4] = ((((((/* implicit */_Bool) arr_5 [i_6 - 1] [i_6 - 1])) ? (((((/* implicit */_Bool) var_3)) ? (arr_23 [i_4] [i_4] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8]))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_4] [i_5 + 1] [i_7 - 3]))));
                                arr_31 [i_4 - 1] [i_5 + 2] [(unsigned char)3] [i_7] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(-1372699066)))) == ((-(4294967278U)))))), (arr_26 [i_4 - 3] [i_6] [i_7] [i_8])));
                            }
                        } 
                    } 
                    var_19 = (unsigned char)112;
                }
            } 
        } 
    }
    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            for (int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (1622726349) : (1372699064)))) ? (((/* implicit */int) var_8)) : (((268995311) << (((((-268995312) + (268995325))) - (12))))))), (((((/* implicit */_Bool) arr_6 [i_10] [i_11])) ? (min((-1628708916), (((/* implicit */int) arr_19 [i_9] [i_9])))) : (((/* implicit */int) var_6))))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_10] [i_10])) ? (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))), ((-(((/* implicit */int) arr_5 [i_9] [i_10])))))) : (((268995331) >> (((((/* implicit */int) arr_22 [i_12] [i_9] [i_10] [i_9])) + (29))))))))));
                        arr_46 [i_9] [i_10] [i_11] [i_12] [i_9] = ((/* implicit */unsigned int) arr_38 [i_10] [i_10]);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) max(((-(((/* implicit */int) (unsigned char)98)))), (((min((arr_17 [i_9]), (((/* implicit */int) arr_19 [i_9] [i_9])))) & (((((/* implicit */int) (short)-10218)) / (((/* implicit */int) var_7))))))));
    }
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((unsigned int) min((((/* implicit */int) var_11)), (1184876961)))) & (((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) + (2147483647))) >> ((((-(var_5))) - (1968058752U)))))))))));
}
