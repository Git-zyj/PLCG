/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38430
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */signed char) var_7);
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (arr_5 [i_0] [i_2] [i_1] [i_2]))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_2]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_16 += ((/* implicit */short) min((((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) * (((((/* implicit */_Bool) 2074732062)) ? (arr_8 [i_0] [i_2] [i_3]) : (((/* implicit */int) arr_3 [(unsigned char)1] [i_3])))))), (((/* implicit */int) ((short) ((long long int) arr_1 [i_3]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0]) : (arr_8 [i_1] [i_2] [15ULL])))) / (arr_10 [i_4 + 1] [i_4 + 1] [5LL] [i_4 + 2] [i_3])));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4 - 2] [i_4 + 1] [i_4])) ? (((/* implicit */long long int) arr_8 [i_0] [i_4 + 1] [i_2])) : (arr_10 [i_2] [i_2] [i_4 + 1] [i_4 - 2] [i_4 - 1])));
                            var_19 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_4 - 1] [i_4 + 2] [13LL] [i_4 + 2]))));
                            var_20 = ((/* implicit */unsigned char) 1701367473);
                        }
                        for (int i_5 = 1; i_5 < 15; i_5 += 2) 
                        {
                            arr_14 [i_0] [(unsigned short)9] [i_2] [i_3] [i_3] [i_5] [i_0] = arr_6 [i_5] [i_3];
                            var_21 = ((/* implicit */int) min((18LL), (((/* implicit */long long int) var_0))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 12; i_6 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) 9561842424476387114ULL);
                            var_23 = ((/* implicit */unsigned char) (signed char)28);
                        }
                    }
                    arr_17 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 536870911)), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_0])))), (max((((/* implicit */unsigned long long int) var_0)), (8884901649233164501ULL))))))));
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))), (min((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [3ULL] [i_0] [i_0])))))))));
        var_24 *= ((/* implicit */short) min((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [0ULL] [i_0] [i_0] [i_0]))))), (arr_1 [10LL]))), ((((!(((/* implicit */_Bool) 9561842424476387116ULL)))) ? (arr_1 [6LL]) : (arr_2 [0U])))));
        var_25 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 18LL)) ? (arr_2 [i_0]) : (arr_2 [i_0]))), (max((((/* implicit */int) var_0)), (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */long long int) (+(min((arr_13 [i_9] [i_9] [i_8] [i_0] [i_0] [(signed char)15]), ((~(((/* implicit */int) arr_23 [i_8] [i_7] [i_8] [i_9] [i_7] [i_7]))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) var_7)))));
                            var_28 = ((/* implicit */short) max((arr_24 [10ULL] [7ULL] [i_8] [i_0]), (max((arr_24 [i_0] [i_7] [i_0] [i_9]), (((/* implicit */long long int) arr_12 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_22 [i_8])), (((unsigned long long int) arr_20 [i_0]))))) ? ((-(((((/* implicit */_Bool) arr_25 [i_7] [i_8] [i_9])) ? (((/* implicit */unsigned long long int) var_12)) : (8884901649233164501ULL))))) : (((/* implicit */unsigned long long int) min((var_10), (min((arr_13 [i_0] [i_7] [i_9] [i_9] [i_10] [i_7]), (((/* implicit */int) var_3)))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            var_30 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) (((~(arr_5 [i_7] [i_0] [i_0] [i_7]))) >> (((((/* implicit */int) var_0)) - (65)))))) : (((/* implicit */unsigned int) (((((~(arr_5 [i_7] [i_0] [i_0] [i_7]))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_0)) - (65))))));
                            arr_32 [i_8] [i_8] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_8])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)16)))) != (((/* implicit */int) ((unsigned short) -6367268888126595208LL)))));
                            var_31 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_0] [i_7] [i_8] [i_0] [i_12] [i_12] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_8]))) : (var_2))) << ((((~(((/* implicit */int) arr_28 [i_11])))) + (59627)))));
                        }
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_8] [i_11])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_7] [i_11]))));
                        var_33 = ((/* implicit */short) -2138797699);
                        var_34 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_8] [i_11]);
                        var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0]))));
                    }
                    var_36 = ((/* implicit */int) max((max((((/* implicit */long long int) ((unsigned char) arr_24 [i_0] [(unsigned char)6] [i_8] [i_7]))), (min((-1487135590604519631LL), (((/* implicit */long long int) var_11)))))), (((((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_19 [i_0]) : (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [15LL] [(unsigned short)1] [i_8] [15LL] [i_8])))))));
                    var_37 = ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_7] [i_8] [i_8] [i_0]);
                }
            } 
        } 
    }
    for (int i_13 = 1; i_13 < 16; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            for (int i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                {
                    var_38 = ((/* implicit */unsigned long long int) arr_38 [0LL] [i_14] [i_14]);
                    var_39 = ((/* implicit */unsigned char) (-(((8884901649233164503ULL) - (((/* implicit */unsigned long long int) arr_34 [(signed char)5]))))));
                }
            } 
        } 
        var_40 = ((((/* implicit */_Bool) (+(min((arr_38 [i_13 + 2] [i_13] [i_13]), (arr_38 [i_13] [2] [i_13])))))) ? (((((/* implicit */_Bool) -6367268888126595197LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 6367268888126595208LL)) && (((/* implicit */_Bool) arr_40 [i_13]))))) : (arr_34 [i_13]))) : (((/* implicit */int) ((_Bool) min((9561842424476387115ULL), (arr_39 [i_13] [1U] [i_13 + 1]))))));
    }
    /* LoopNest 2 */
    for (long long int i_16 = 0; i_16 < 19; i_16 += 3) 
    {
        for (unsigned int i_17 = 0; i_17 < 19; i_17 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_18 = 2; i_18 < 15; i_18 += 3) 
                {
                    var_41 = ((/* implicit */unsigned char) var_1);
                    var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (-(8884901649233164501ULL))))));
                    var_43 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (2565405368299933345LL)))) ? (((((/* implicit */_Bool) arr_45 [i_17])) ? (arr_45 [i_16]) : (((/* implicit */long long int) arr_43 [i_16] [i_16])))) : (((/* implicit */long long int) ((/* implicit */int) min((((signed char) arr_45 [i_16])), (var_3)))))));
                }
                arr_49 [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_17] [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_0))))));
            }
        } 
    } 
}
