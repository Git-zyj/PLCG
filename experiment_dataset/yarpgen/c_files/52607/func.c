/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52607
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (_Bool)1))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) / (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_4 [(unsigned char)2] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)8)) ? (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_3 [i_0])))) : (((((/* implicit */_Bool) arr_2 [(_Bool)0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))));
        var_15 -= (((~(((/* implicit */int) (unsigned char)183)))) >= (((/* implicit */int) ((short) (unsigned char)55))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) (unsigned char)235)))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9412)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)16384))));
            var_18 ^= ((/* implicit */short) (-((((_Bool)1) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_0 [i_1]))))));
            arr_8 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-32752))))) >> (((((/* implicit */int) (short)5500)) - (5481)))));
        }
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_19 -= ((/* implicit */short) max(((~(((/* implicit */int) arr_7 [i_2] [i_2] [i_2])))), (((((((/* implicit */int) arr_10 [i_2])) / (((/* implicit */int) var_8)))) / (((/* implicit */int) ((short) (short)32767)))))));
        arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (((((/* implicit */_Bool) (short)-26730)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-3170)))) : (((/* implicit */int) ((short) (short)-26624)))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)102)), ((short)-3159)))) : (((/* implicit */int) (((~(((/* implicit */int) (short)32762)))) == ((((_Bool)1) ? (((/* implicit */int) arr_2 [(unsigned char)20])) : (((/* implicit */int) arr_1 [(_Bool)1] [(short)8])))))))));
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (short i_6 = 3; i_6 < 18; i_6 += 2) 
                {
                    {
                        arr_21 [i_3] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] = max((((/* implicit */short) ((_Bool) (_Bool)1))), (max((var_5), (var_3))));
                        var_20 -= ((/* implicit */short) min((((((/* implicit */int) (short)32767)) + (((/* implicit */int) (short)-1)))), (min((((((/* implicit */_Bool) (short)-19362)) ? (((/* implicit */int) arr_15 [i_5] [(unsigned char)4])) : (((/* implicit */int) (short)-8137)))), (((/* implicit */int) var_0))))));
                        arr_22 [i_4 - 1] [i_5] [i_3] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_15 [i_3] [i_3])))) + (2147483647))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)134))))) ? (((/* implicit */int) ((short) (short)-18227))) : (((/* implicit */int) ((unsigned char) var_8))))) + (18254)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            arr_27 [i_3] [i_4] [i_4] [i_5] [i_5] [i_7] &= ((/* implicit */short) max((((((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 + 2])) >> (((((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1])) - (54))))), (((/* implicit */int) ((((/* implicit */int) (short)-16385)) >= (((/* implicit */int) (short)-15793)))))));
                            var_21 = ((short) ((((((/* implicit */int) arr_23 [i_3] [i_3])) << (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */int) (short)9411)) - (9402)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_22 += ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (short)-26740)));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)2))))))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */_Bool) min((((/* implicit */int) (short)-2960)), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) (unsigned char)168)))) : (((/* implicit */int) var_5))))));
                            var_25 = arr_1 [i_3] [i_3];
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) ((short) (unsigned char)107));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            var_26 = (!(arr_7 [i_3] [i_10] [i_10]));
                            var_27 ^= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))));
                        }
                        var_28 ^= ((/* implicit */unsigned char) (_Bool)1);
                    }
                } 
            } 
        } 
        var_29 = ((_Bool) var_9);
    }
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) (short)19357)) : (((/* implicit */int) var_7)))) ^ (((/* implicit */int) min(((short)32764), (var_0)))))) : (((/* implicit */int) (short)-23687))));
}
