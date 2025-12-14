/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196616
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
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_12))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */int) (short)31951);
                                var_17 *= ((/* implicit */short) var_10);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31946))) : (arr_6 [i_3 - 2] [i_3] [i_0 + 2] [i_0 - 1]))), (((long long int) arr_6 [i_3 + 1] [(short)12] [i_0 + 1] [i_0 + 2]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) (signed char)48);
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned long long int) var_0))) && (((/* implicit */_Bool) ((signed char) (short)-31951))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24658))) : (-552146758450484109LL))) % (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_1)))))))) : (var_0)));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) var_6)), ((short)-31929))))))) << (((((/* implicit */int) var_7)) - (44895)))));
    /* LoopSeq 2 */
    for (short i_5 = 2; i_5 < 21; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (signed char i_7 = 1; i_7 < 19; i_7 += 3) 
            {
                {
                    var_21 *= ((/* implicit */unsigned char) ((((int) max((((/* implicit */short) var_1)), (arr_22 [i_5] [(_Bool)1] [i_7])))) + (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((((/* implicit */int) (_Bool)1)) / (arr_20 [i_5]))))))));
                    arr_24 [i_5 + 2] = ((/* implicit */unsigned long long int) ((max(((-(((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) var_13)) * (((/* implicit */int) arr_19 [i_5])))))) >> (((min((33554431ULL), (((/* implicit */unsigned long long int) var_6)))) * (((((/* implicit */_Bool) 13847788697784617060ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43535))) : (13148636621423086121ULL)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */int) arr_16 [i_5] [i_5]);
    }
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 12; i_8 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            for (long long int i_10 = 1; i_10 < 12; i_10 += 1) 
            {
                for (short i_11 = 4; i_11 < 11; i_11 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)31944))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)31929)) ? (((/* implicit */int) (unsigned short)17253)) : (248579843)))) : (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_8 [i_9] [i_9] [i_9] [i_9])))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)31946)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (33554431ULL))))))));
                            var_25 = ((/* implicit */unsigned long long int) (-(var_14)));
                        }
                        for (short i_13 = 3; i_13 < 11; i_13 += 4) 
                        {
                            arr_44 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_38 [5] [i_8] [(unsigned short)1] [i_9] [i_10] [i_10] [i_13]))));
                            arr_45 [i_13] [i_13] [i_13] [i_13] [i_13 - 3] [i_10] [i_13 - 3] = ((/* implicit */unsigned long long int) ((6286410132327646866ULL) == (((/* implicit */unsigned long long int) 0))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((((/* implicit */int) arr_39 [i_11 - 2] [i_11 + 2] [i_11 + 2] [i_11 + 1] [i_11 - 4])) < (((/* implicit */int) arr_39 [i_11] [i_11] [(signed char)3] [i_11 + 1] [i_11 + 2]))))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [9] [i_14] [i_14] [9] [i_10])) ? (arr_16 [i_11 + 2] [i_11 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                            arr_49 [i_8 + 1] [i_14] &= ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)104))));
                        }
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-31946))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_8 + 1] [5] [i_10 + 1])) && ((_Bool)1)))))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_23 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)0)))) : (arr_12 [i_8 + 1] [i_8] [i_8] [i_8 + 1] [i_11 - 3] [i_11])));
                        }
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 0)) + (((long long int) (unsigned char)224))));
                    }
                } 
            } 
        } 
        arr_52 [i_8 + 1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [(short)10]))) : (8236360172149534524LL)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) ((unsigned short) arr_27 [i_8])))));
    }
}
