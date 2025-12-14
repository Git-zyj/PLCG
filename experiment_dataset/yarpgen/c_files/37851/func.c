/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37851
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
    var_11 = ((/* implicit */short) var_8);
    var_12 |= ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!((_Bool)0)))), (arr_3 [i_1 + 2] [i_1 - 1])))) ? (((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */int) ((unsigned char) 0U))) : (((/* implicit */int) var_7)))) : ((+(((/* implicit */int) var_9))))));
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                arr_7 [i_0] [i_0] [(short)8] [i_2] |= ((((int) (~(1763092222U)))) != ((((((_Bool)1) ? (((/* implicit */int) arr_4 [(short)2] [(short)2])) : (((/* implicit */int) arr_6 [i_0] [i_0] [(short)4] [i_0])))) * (((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (int i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    var_14 -= ((/* implicit */short) (((((_Bool)0) && (((/* implicit */_Bool) (unsigned short)896)))) ? (((((/* implicit */int) (unsigned short)896)) / (-924852737))) : (((/* implicit */int) (unsigned char)143))));
                    arr_10 [i_2] = ((/* implicit */unsigned char) arr_4 [i_3 + 2] [i_1 - 3]);
                }
                var_15 *= ((/* implicit */short) ((unsigned short) var_9));
                var_16 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned short i_4 = 2; i_4 < 12; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned char) var_0);
                            arr_18 [i_6] [i_5] [i_5] [(short)2] = var_10;
                            arr_19 [i_0] [i_5] [i_4] [i_5] [i_5] = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), ((short)32758))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    arr_22 [i_0] [i_0] [i_7] [i_7] [i_4] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
                    arr_23 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)63886), (((/* implicit */unsigned short) ((_Bool) var_6)))))) ? (((/* implicit */int) (short)27142)) : (((((/* implicit */int) var_3)) | (((((/* implicit */int) (unsigned short)885)) & (((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_7]))))))));
                    arr_24 [i_0] [(unsigned char)11] [i_7] [i_1] [(unsigned char)1] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)32765)) || (((/* implicit */_Bool) (short)-4)))))));
                }
            }
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)68))))) + (2043710701U))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1 - 1] [i_1 + 2] [11] [11] [11])) ? ((~(var_1))) : (((/* implicit */int) ((unsigned char) arr_12 [(unsigned char)2])))))) ? (((((/* implicit */int) ((unsigned char) (short)(-32767 - 1)))) / (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))) : ((((~(var_1))) + (((/* implicit */int) arr_8 [i_1 - 2] [i_1]))))));
                arr_28 [(unsigned char)7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) arr_2 [5] [5] [5]))), (((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)31889))))))) ? (((/* implicit */int) (unsigned short)63886)) : ((-(max((var_1), (var_1)))))));
            }
            for (short i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                arr_32 [i_0] [(short)6] [i_9] = ((/* implicit */int) (unsigned char)255);
                var_20 = ((/* implicit */unsigned char) arr_2 [(short)11] [i_1 - 1] [i_9]);
                var_21 = ((/* implicit */short) ((min((((/* implicit */unsigned int) arr_4 [3] [i_1 + 1])), (arr_15 [i_1 + 1] [i_1 - 2] [0U] [i_1]))) / ((-(arr_9 [i_9] [(unsigned char)10] [8] [i_9])))));
            }
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)27156)) & (-554508958))))) != (min((((((/* implicit */int) (unsigned char)234)) + (((/* implicit */int) (short)-12699)))), (((/* implicit */int) (short)12699)))))))));
                var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)243))));
                arr_37 [(unsigned char)0] [i_0] [i_1] [i_10] |= var_7;
            }
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_42 [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] = ((/* implicit */short) ((((/* implicit */int) max(((short)-31897), ((short)31882)))) >= (((/* implicit */int) var_5))));
            arr_43 [i_0] [10U] [10U] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9899)) ? (((/* implicit */int) arr_33 [i_0] [i_0])) : (((((/* implicit */_Bool) (short)12695)) ? (((/* implicit */int) (short)31879)) : (((/* implicit */int) (short)-32759)))))))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)9])) ? ((~((~(((/* implicit */int) (unsigned char)0)))))) : (((/* implicit */int) var_9))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (unsigned char i_13 = 1; i_13 < 12; i_13 += 1) 
                {
                    {
                        arr_49 [i_0] [i_11] [(short)11] [i_13 + 1] = ((/* implicit */unsigned char) (+((((-2147483647 - 1)) + (((/* implicit */int) arr_45 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1]))))));
                        var_25 = ((/* implicit */unsigned int) max((((/* implicit */int) (short)-12695)), ((-(((/* implicit */int) arr_21 [i_13] [i_11] [i_12] [i_12] [i_11] [i_0]))))));
                    }
                } 
            } 
        }
        for (unsigned int i_14 = 2; i_14 < 12; i_14 += 3) 
        {
            var_26 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)31627))));
            /* LoopNest 3 */
            for (unsigned int i_15 = 2; i_15 < 9; i_15 += 2) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned char i_17 = 2; i_17 < 12; i_17 += 2) 
                    {
                        {
                            var_27 ^= (unsigned short)48616;
                            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_54 [i_14] [i_15 + 3] [i_17 - 2])))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_18 = 0; i_18 < 13; i_18 += 3) 
        {
            var_29 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [2U] [i_18] [i_18] [(_Bool)1] [i_18])))))));
            arr_63 [i_0] [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)175)) && (((/* implicit */_Bool) arr_40 [i_0] [i_18] [i_18]))));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-25178)))))));
        }
        var_31 += ((/* implicit */short) ((((((/* implicit */_Bool) min(((short)26613), (((/* implicit */short) arr_51 [i_0]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_62 [i_0] [i_0])))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_7))))));
        arr_64 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_16 [i_0]))) ? (((arr_46 [i_0] [i_0] [i_0] [(_Bool)1]) % (var_1))) : (arr_46 [i_0] [i_0] [i_0] [i_0])))) != (arr_27 [i_0] [i_0] [i_0])));
        var_32 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64641))) >= ((~((~(2043710690U)))))));
    }
    /* vectorizable */
    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 4) 
    {
        var_33 = var_0;
        arr_67 [i_19] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_66 [(unsigned char)19] [i_19])))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_65 [i_19]))))) : ((+(((/* implicit */int) (_Bool)1))))));
    }
    var_34 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (2456449542U)))) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))));
}
