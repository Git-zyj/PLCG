/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43457
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
    var_11 = ((/* implicit */short) ((var_1) * (((/* implicit */unsigned int) max((var_9), (((/* implicit */int) (unsigned char)180)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)32739)), (var_0)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0] [0U])) : (234420686))) : (var_0)))) > (var_5)));
        var_13 = ((/* implicit */int) max((var_13), (max((((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) << (((((/* implicit */int) var_3)) - (92))))), (((int) var_9))))));
        arr_4 [i_0] = 147158379;
        arr_5 [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32751)) ? (((/* implicit */int) (unsigned short)19905)) : (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 - 1])) ? (var_0) : (((/* implicit */int) (unsigned short)32796))))) : (((unsigned int) arr_2 [i_0 + 1] [i_0 + 1]))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_8 [i_0] [i_0] = var_4;
            var_14 = ((/* implicit */unsigned char) (-((~(max((1491943942U), (((/* implicit */unsigned int) var_3))))))));
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_6) : (var_5))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)480))) : (var_5))))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_16 += ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)32796))));
            var_17 = ((/* implicit */short) ((int) arr_1 [i_0] [i_0]));
        }
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            arr_17 [i_0] = ((/* implicit */unsigned char) arr_10 [i_0]);
            var_18 *= ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (unsigned short)32751)), (var_6))), (((unsigned int) 3865191874U))))) ? (((/* implicit */int) (unsigned char)0)) : ((-(var_10))));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 1; i_5 < 20; i_5 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 20; i_6 += 1) 
            {
                for (unsigned int i_7 = 3; i_7 < 18; i_7 += 2) 
                {
                    {
                        arr_26 [i_4] [i_4] [i_4] [i_4] [i_5] = ((((/* implicit */_Bool) (unsigned short)24232)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)32796)) : (arr_21 [i_6] [i_4]))) : (((/* implicit */int) var_7)));
                        arr_27 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 1145471744U)) ? (arr_22 [i_5]) : (arr_22 [i_5])));
                        var_19 = ((/* implicit */short) ((((/* implicit */int) arr_24 [i_4])) / (var_9)));
                        arr_28 [i_5] = ((/* implicit */unsigned short) ((unsigned int) 255));
                        arr_29 [i_5] [i_5 + 1] [i_5] = ((/* implicit */int) ((unsigned int) var_8));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_9 = 3; i_9 < 20; i_9 += 3) 
                {
                    var_20 -= ((/* implicit */unsigned short) ((int) var_6));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((int) (unsigned char)128));
                        var_22 = ((/* implicit */unsigned short) arr_21 [i_4] [i_5 - 1]);
                        var_23 = ((/* implicit */unsigned int) var_0);
                    }
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) - (1078789953)));
                    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    for (short i_12 = 1; i_12 < 17; i_12 += 1) 
                    {
                        {
                            var_26 += ((/* implicit */unsigned char) arr_34 [i_8] [i_8] [i_4]);
                            arr_44 [i_5] [i_5] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) arr_23 [i_5 + 1])) : (var_9)));
                            arr_45 [i_4] [i_5] [15U] [i_11] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)0))))));
                            var_27 -= (unsigned short)32796;
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)41303)) < (-1078789951)))))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) var_6);
                var_30 ^= ((/* implicit */int) (-(((((/* implicit */_Bool) arr_23 [i_4])) ? (2426009447U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12918)))))));
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (var_8)));
            }
            /* LoopNest 3 */
            for (unsigned int i_13 = 2; i_13 < 19; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    for (int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        {
                            arr_55 [i_4] [(unsigned short)12] [(unsigned short)12] [(unsigned short)12] [i_5] = ((/* implicit */unsigned int) ((unsigned char) var_3));
                            arr_56 [i_14] [i_5] = ((/* implicit */unsigned char) ((int) (short)15791));
                            arr_57 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-480))));
                            arr_58 [i_4] [i_4] [i_4] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_37 [i_4] [i_14] [i_14] [i_13 + 2] [i_14] [i_5 - 1])) : (var_9)));
                        }
                    } 
                } 
            } 
            arr_59 [i_4] [i_4] [i_5] = ((((/* implicit */_Bool) arr_54 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5])) ? (((/* implicit */unsigned int) var_9)) : (((((/* implicit */_Bool) arr_46 [i_4] [i_5] [i_5] [i_5 + 1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_4] [i_4] [13] [i_4] [13] [13]))))));
        }
        for (unsigned short i_16 = 1; i_16 < 20; i_16 += 3) /* same iter space */
        {
            var_32 -= ((/* implicit */unsigned short) ((arr_53 [(unsigned short)14]) / (var_10)));
            var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)45305)) ? (var_0) : (((/* implicit */int) arr_41 [(short)0] [(short)0] [i_16 - 1] [i_16 + 1]))));
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 20; i_17 += 1) 
            {
                for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    {
                        arr_68 [i_4] [i_4] [i_16] [i_17] [i_17] [i_18] = ((/* implicit */unsigned short) arr_33 [i_16] [i_16] [i_16] [i_16] [0U]);
                        arr_69 [i_4] [i_16] [i_16] [i_17] [i_18] = ((((/* implicit */_Bool) ((var_9) / (((/* implicit */int) (unsigned char)100))))) ? (((/* implicit */int) (unsigned short)32797)) : (var_9));
                    }
                } 
            } 
        }
        arr_70 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)128)))))));
        arr_71 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_32 [i_4] [i_4] [i_4] [(unsigned short)4]))));
        arr_72 [i_4] = ((/* implicit */unsigned int) ((unsigned char) var_7));
        arr_73 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) var_8)))));
    }
    for (int i_19 = 2; i_19 < 11; i_19 += 3) 
    {
        arr_78 [i_19 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_3 [0U]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)8392)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)198))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2147483632U)))) / (273607334U)))));
        arr_79 [i_19] = ((short) ((((/* implicit */_Bool) arr_15 [i_19 - 2] [i_19 - 1])) ? (((/* implicit */int) ((short) (unsigned short)32796))) : (((/* implicit */int) max(((unsigned short)45310), (((/* implicit */unsigned short) (unsigned char)24)))))));
        var_34 = ((/* implicit */unsigned short) (-(var_8)));
    }
}
