/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240277
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4575768697594640195LL)) ? (4575768697594640215LL) : (4575768697594640195LL)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [4U] [i_1] = ((/* implicit */long long int) arr_11 [i_1]);
                            var_16 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((arr_3 [i_0]), (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_1] [i_2] [i_4 + 1]) <= (arr_8 [i_1] [i_1] [i_1] [(_Bool)1]))))) : (var_14)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned char i_6 = 4; i_6 < 15; i_6 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_0] [1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (((arr_3 [i_6 - 3]) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6 - 2] [i_1] [(_Bool)1] [2ULL])))))));
                            var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -4575768697594640216LL)), (arr_19 [i_6 - 4] [i_5] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4575768697594640174LL)) && (((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_6 - 4])))))) : ((-(arr_17 [(short)3] [(short)3] [14ULL] [i_6 - 3])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 3; i_8 < 13; i_8 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))));
                        var_19 |= ((/* implicit */short) arr_5 [i_0] [9U] [i_7] [i_8]);
                        var_20 |= ((/* implicit */unsigned short) -4575768697594640196LL);
                    }
                    for (long long int i_9 = 4; i_9 < 14; i_9 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_8))));
                        var_22 = ((/* implicit */long long int) ((_Bool) arr_19 [3U] [i_1] [i_1]));
                        var_23 = ((/* implicit */unsigned int) max((-4575768697594640175LL), (((/* implicit */long long int) 1540707620U))));
                    }
                    var_24 = ((/* implicit */long long int) ((unsigned short) ((4575768697594640178LL) << (((708994851328151496ULL) - (708994851328151495ULL))))));
                    arr_29 [i_7] [i_7] [i_2] [12ULL] [i_1] [3U] = ((/* implicit */unsigned int) ((long long int) arr_18 [i_0] [i_2] [(short)9]));
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((short) (_Bool)1))), (((((/* implicit */_Bool) (short)-31235)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)32))) : (-4575768697594640203LL))))))));
                }
                var_26 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_15 [i_1] [i_0])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0]))))) : (4575768697594640180LL)));
            }
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_35 [(_Bool)1] [i_1] [(short)13] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [5LL] [(unsigned char)15]))) - (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1] [i_1])) ? (17937940462585783821ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1])))))));
                        var_27 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_0])), (max((((/* implicit */unsigned short) arr_34 [i_0] [3LL] [i_1] [i_10] [14U] [8ULL])), (arr_15 [i_1] [i_0]))))))) >= (-4575768697594640208LL)));
                        var_28 = ((/* implicit */unsigned short) (~(max((3532821757U), (((/* implicit */unsigned int) (_Bool)1))))));
                    }
                } 
            } 
        }
        for (long long int i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            arr_39 [i_12] [i_0] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) var_5))) >= (arr_19 [i_0] [i_12] [i_12])));
            arr_40 [i_0] |= ((/* implicit */_Bool) max((min(((+(var_6))), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) var_12))));
            var_29 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_11 [i_0])), (arr_3 [5U])));
            /* LoopSeq 1 */
            for (short i_13 = 1; i_13 < 13; i_13 += 1) 
            {
                var_30 = ((/* implicit */unsigned short) (~(max((max((((/* implicit */long long int) var_10)), (arr_3 [i_12]))), (((/* implicit */long long int) var_4))))));
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 13; i_14 += 4) 
                {
                    for (unsigned long long int i_15 = 4; i_15 < 13; i_15 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */short) max((((/* implicit */long long int) arr_44 [i_13 + 3] [i_13 + 2] [i_14 - 1] [i_15 + 3])), (((long long int) 4575768697594640180LL))));
                            arr_48 [i_0] [i_12] [i_14] [i_14] [i_15] |= ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-4575768697594640208LL)))) ^ (arr_38 [i_15 + 3] [i_0]));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_13] [i_13])) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_10 [i_14] [i_14] [i_14] [i_14 + 1] [i_14] [i_14])))))))));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (_Bool)1))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((signed char) (~(arr_27 [i_13 + 2] [i_13] [i_13] [i_13 - 1] [i_12] [i_12] [i_0])))))));
            }
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_53 [i_16] = ((/* implicit */unsigned short) var_7);
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned short i_18 = 2; i_18 < 13; i_18 += 3) 
                {
                    {
                        var_35 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_16])) && (arr_49 [i_16])))), (min((((/* implicit */unsigned int) arr_49 [i_16])), (arr_23 [i_16])))));
                        var_36 |= ((/* implicit */long long int) arr_44 [i_18 - 2] [i_18] [i_18] [i_18 - 1]);
                        var_37 = var_2;
                    }
                } 
            } 
        }
        var_38 &= ((/* implicit */signed char) arr_21 [i_0] [i_0]);
    }
}
