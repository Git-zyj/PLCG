/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/487
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) /* same iter space */
        {
            var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            var_12 = ((/* implicit */unsigned char) var_0);
            arr_4 [i_0] |= ((/* implicit */unsigned int) var_0);
        }
        for (unsigned int i_2 = 1; i_2 < 8; i_2 += 3) /* same iter space */
        {
            arr_7 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-5955))));
            var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_1), (((((/* implicit */unsigned int) 1721415992)) - (4262296490U))))))));
            arr_8 [i_0 + 1] |= ((((/* implicit */_Bool) var_2)) ? ((((!(((/* implicit */_Bool) arr_3 [i_2 - 1])))) ? (max((arr_6 [i_0]), (arr_2 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)3] [i_0]))))) : (4294967290U));
            /* LoopNest 3 */
            for (unsigned char i_3 = 2; i_3 < 7; i_3 += 3) 
            {
                for (unsigned int i_4 = 2; i_4 < 7; i_4 += 2) 
                {
                    for (unsigned int i_5 = 2; i_5 < 7; i_5 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */short) min((2097152U), (((/* implicit */unsigned int) (short)13046))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) 4292870162U)) ? (((/* implicit */unsigned int) var_6)) : (arr_16 [i_0 + 1] [i_0] [i_2 + 2] [i_4 - 2] [i_4]))) : (((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0] [i_2 - 1] [i_4 + 2] [(unsigned char)9])) ? (arr_16 [i_0 - 2] [i_2 - 1] [i_2 + 2] [i_4 + 1] [i_0 - 2]) : (var_3)))));
                        }
                    } 
                } 
            } 
        }
        var_16 -= ((/* implicit */unsigned int) (+(-1649244472)));
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((arr_16 [i_0 - 2] [i_0] [i_0] [i_0 - 1] [9U]) >> (((var_9) - (354538675))))))) & (((/* implicit */int) var_5))));
        arr_18 [(short)8] [i_0] = (((!(((/* implicit */_Bool) var_0)))) ? ((+(arr_6 [i_0 - 1]))) : (min((var_3), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))));
    }
    /* LoopSeq 2 */
    for (int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) min((min((arr_20 [i_6]), (arr_20 [4]))), (arr_19 [i_6])));
        arr_21 [0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)5)) ? (((((/* implicit */_Bool) 3281899652U)) ? (4262296490U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6]))))) : (((/* implicit */unsigned int) 1721415992))));
        var_19 = ((/* implicit */short) min((var_19), (var_7)));
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 2; i_10 < 10; i_10 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [(unsigned char)6] [i_10] [i_10] [i_10] [i_10 + 2] [(unsigned char)10])))))));
                            var_21 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_23 [(unsigned char)8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_30 [0U] [i_7] [11U] [i_9] [i_10 + 1] [i_10 + 2])))) : ((-(((/* implicit */int) (unsigned char)45))))))) % ((-(var_2)))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((((((/* implicit */_Bool) arr_26 [i_10 + 3])) ? (790088689U) : (arr_26 [i_10 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_6])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1721415991)) ? (0U) : (4294967279U))))))))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)46)), ((short)4400)))) != (((/* implicit */int) ((((/* implicit */int) arr_30 [i_9] [i_10 + 1] [i_10] [i_10] [i_10 - 2] [i_10 - 2])) != (((/* implicit */int) arr_30 [i_7] [i_10 + 1] [i_10 + 1] [i_10] [i_10] [i_10 - 1])))))));
                        }
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) 1721415992)) : (0U)));
                    }
                } 
            } 
        } 
        var_25 -= ((/* implicit */short) arr_26 [i_6]);
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            for (short i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                {
                    var_26 = ((arr_33 [i_13]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                    arr_42 [i_11] = ((/* implicit */unsigned char) (((~(var_1))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_35 [i_11] [10U])))))));
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_11] [i_12])) && (((/* implicit */_Bool) var_3))));
                    arr_43 [i_11] [(unsigned char)10] [i_13] = ((/* implicit */int) (-(785581524U)));
                }
            } 
        } 
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) 2741242221U))));
    }
}
