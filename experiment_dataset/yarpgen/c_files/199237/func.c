/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199237
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) min((var_15), (var_14)))))), (((((/* implicit */_Bool) var_7)) || (((((/* implicit */int) var_8)) <= (((/* implicit */int) var_6)))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned long long int) -723492778);
        var_18 = arr_2 [i_0] [i_0];
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */int) var_11);
            var_19 = arr_5 [i_0];
        }
        for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (arr_15 [i_3] [i_4])));
                        var_21 = ((/* implicit */signed char) arr_6 [i_0] [i_2]);
                        /* LoopSeq 3 */
                        for (short i_5 = 4; i_5 < 18; i_5 += 4) 
                        {
                            arr_21 [i_0] [i_0] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) var_1);
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_5] = ((unsigned short) 682672950);
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(min((((/* implicit */int) min(((unsigned short)3555), (((/* implicit */unsigned short) arr_17 [i_4]))))), (((int) (unsigned char)127)))))))));
                            var_23 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((arr_5 [i_5 - 4]), (var_6)))) : (((/* implicit */int) ((unsigned short) arr_14 [i_0] [i_2] [i_3] [i_4] [i_5]))));
                            var_24 = ((/* implicit */short) min((((/* implicit */int) arr_6 [i_5 - 3] [i_3])), (var_5)));
                        }
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            arr_26 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min(((-(((arr_19 [i_0] [(unsigned short)10] [(unsigned short)10] [i_0] [(unsigned short)10] [i_6] [i_6]) / (((/* implicit */int) (unsigned short)3559)))))), ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)153)) == (((/* implicit */int) (unsigned short)40689))))) : (((/* implicit */int) ((723492770) != (((/* implicit */int) (unsigned char)248)))))))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [(unsigned short)11] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -723492778)) ? (arr_2 [i_0] [i_0]) : (var_13)));
                        }
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (~(-45588564)))), (min((877306342U), (((/* implicit */unsigned int) (unsigned short)65528)))))) * (((/* implicit */unsigned int) 1969645253))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (-(2147483647))))));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_4 [i_4]))));
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11888278940149688790ULL)) && (((/* implicit */_Bool) (unsigned short)3555))));
        }
        for (int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            var_29 = 1377879597;
            arr_33 [i_0] [i_0] = ((/* implicit */int) arr_16 [(unsigned short)4] [i_8]);
        }
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        arr_37 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_9] [i_9])) ? (((/* implicit */int) arr_34 [i_9] [i_9])) : (((/* implicit */int) arr_35 [(unsigned short)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_9] [i_9])) || (((/* implicit */_Bool) (unsigned short)3655)))))) : (1309657105587738095ULL)));
        arr_38 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_9] [i_9])) == (var_7)));
        var_30 -= arr_34 [i_9] [i_9];
    }
    for (short i_10 = 0; i_10 < 21; i_10 += 3) 
    {
        arr_41 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_10])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)6)) >= (((/* implicit */int) (short)4032))))) : (min((((((/* implicit */_Bool) 1944586703)) ? (((/* implicit */int) (unsigned short)58918)) : (((/* implicit */int) (unsigned short)6618)))), (((((/* implicit */int) arr_35 [i_10])) * (((/* implicit */int) (unsigned short)65531))))))));
        arr_42 [i_10] = ((/* implicit */unsigned long long int) (unsigned short)24290);
    }
    var_31 = ((/* implicit */unsigned short) min((min((((unsigned int) (unsigned short)18435)), (((/* implicit */unsigned int) ((short) (short)-2448))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(270754974U)))) || (((/* implicit */_Bool) var_10)))))));
}
