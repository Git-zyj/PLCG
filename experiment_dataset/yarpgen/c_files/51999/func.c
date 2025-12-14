/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51999
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            arr_15 [4U] [i_1] [4U] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_0)))))));
                            var_12 = ((/* implicit */_Bool) max((var_12), ((_Bool)1)));
                        }
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            arr_20 [i_1] [(short)7] [i_1 - 1] [(short)4] [5U] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((!(((/* implicit */_Bool) var_0)))), ((_Bool)1)))) == (((/* implicit */int) min(((unsigned char)36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)35634)) || (((/* implicit */_Bool) arr_0 [8ULL]))))))))));
                            var_13 = ((/* implicit */_Bool) max((var_13), ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1 - 2])))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 134217728)) ? (782132593) : (((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_3] [i_3] [6ULL] [i_6]))))) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) arr_21 [i_0] [(short)1] [i_0] [i_0] [(unsigned short)9])));
                            arr_24 [i_2] |= ((/* implicit */short) (_Bool)1);
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 1] [i_2] [(unsigned char)7])) ? (((/* implicit */int) arr_9 [(signed char)8])) : ((~(((/* implicit */int) (_Bool)1))))));
                        }
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_4))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) min(((_Bool)0), (arr_2 [1])))) != (((((/* implicit */_Bool) -782132620)) ? (((/* implicit */int) (unsigned short)1428)) : (-424879369)))))))))));
                    }
                    arr_25 [i_2] = ((/* implicit */short) (unsigned short)6);
                    arr_26 [(unsigned short)4] [i_1] [i_1] [0U] = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_4), (((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (18) : (((/* implicit */int) var_4)))) == (((/* implicit */int) ((unsigned char) var_2))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        arr_31 [i_7] = ((/* implicit */int) (~(arr_28 [i_7])));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_28 [18])))) ? (arr_30 [i_7]) : (((arr_30 [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7])))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 19; i_9 += 4) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-1465178475963576269LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) 424879383)) || (((/* implicit */_Bool) arr_32 [i_8])))))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (unsigned short)31744))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11))) : (((long long int) (_Bool)1))));
        }
        arr_36 [i_8] = ((/* implicit */signed char) ((arr_33 [i_8]) - (((/* implicit */long long int) ((/* implicit */int) arr_29 [14U] [i_8])))));
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 19; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                {
                    arr_41 [(short)12] [i_10] [(unsigned short)18] [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_8])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            {
                                arr_46 [i_8] [i_8] [(short)0] [(unsigned short)11] [i_13] = ((/* implicit */short) ((134217748) > (((/* implicit */int) (unsigned char)243))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-((((_Bool)1) ? (arr_33 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7138))))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_8])) != (((/* implicit */int) var_2))));
                    arr_47 [4] [i_11] = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
                        arr_51 [i_14] [i_10] [i_10] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_39 [2LL])) ? (((/* implicit */int) arr_27 [i_8])) : (arr_39 [i_8])))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (782132593) : (((/* implicit */int) (_Bool)1)))) != (((((/* implicit */_Bool) (unsigned short)38769)) ? (var_1) : (((/* implicit */int) var_0))))));
                        arr_54 [i_8] [i_10] [i_11] [(_Bool)1] [6U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 782132596)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (134184960U)));
                    }
                }
            } 
        } 
        arr_55 [(unsigned char)18] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_49 [i_8] [i_8] [i_8] [i_8])) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65516)) || (((/* implicit */_Bool) arr_48 [i_8] [i_8] [i_8] [i_8])))))));
    }
}
