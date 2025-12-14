/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47477
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_10 = var_3;
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 + 1])) <= (((((/* implicit */int) (short)32761)) & (((/* implicit */int) arr_4 [i_0]))))));
        }
        for (short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_10 [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((((/* implicit */int) (short)-32760)) / (((/* implicit */int) (short)19395)))) : ((-(((/* implicit */int) var_2))))));
            var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) (short)28510)))))))));
            var_12 ^= ((/* implicit */short) (~(((/* implicit */int) var_5))));
        }
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) (short)-32762)))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_5 [i_0 - 4] [i_0 - 2] [i_0 + 3])) : ((+(((/* implicit */int) (short)-23))))));
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            var_15 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) < (((/* implicit */int) (short)31))))) >> (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) + (2890)))));
            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29108)) ? (((/* implicit */int) (short)13129)) : (((/* implicit */int) (short)-4954)))))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+((+(((/* implicit */int) arr_14 [i_3])))))))));
            arr_15 [i_0] [i_0] = arr_8 [i_0] [i_0] [i_0];
        }
        arr_16 [i_0 - 1] = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 3] [i_0 - 3]))));
    }
    for (short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (short i_6 = 3; i_6 < 8; i_6 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */short) ((((((/* implicit */int) arr_22 [i_6 + 1] [i_6 + 1] [i_6] [i_6])) / (((/* implicit */int) var_8)))) < (((/* implicit */int) ((((/* implicit */int) (short)23598)) == (((/* implicit */int) (short)31)))))));
                    var_19 ^= ((/* implicit */short) max((((((/* implicit */_Bool) arr_18 [i_6 - 3] [i_6 - 2])) ? (((/* implicit */int) (short)-9895)) : (((/* implicit */int) arr_8 [i_6 + 1] [i_6 + 1] [i_6 - 2])))), (((((/* implicit */_Bool) (short)-28106)) ? (((/* implicit */int) (short)32761)) : (((/* implicit */int) (short)0))))));
                    var_20 = ((/* implicit */short) (~(((/* implicit */int) ((short) (short)16907)))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)3715))))))));
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (short i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                {
                    arr_28 [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */int) (short)-15272)) - (((/* implicit */int) (short)-8119))));
                    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_8] [(short)9] [i_4])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_0)))) / ((~(((/* implicit */int) (short)-18720))))));
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_23 *= (short)-30410;
                                var_24 = ((short) ((((/* implicit */_Bool) max((arr_22 [i_10] [i_10] [i_8] [i_9]), ((short)9894)))) ? (((((/* implicit */_Bool) (short)4160)) ? (((/* implicit */int) arr_1 [i_10])) : (((/* implicit */int) (short)-1)))) : (((((/* implicit */_Bool) (short)-5325)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) var_1))))));
                                arr_35 [(short)2] [i_7] [i_8] [i_8] [(short)0] [i_10] [i_10] = ((/* implicit */short) ((min((((/* implicit */int) ((short) var_0))), ((~(((/* implicit */int) (short)23598)))))) ^ ((~((~(((/* implicit */int) arr_14 [i_4]))))))));
                                var_25 ^= ((short) (short)-18176);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) max((var_26), (arr_19 [i_7] [i_7] [i_4])));
                }
            } 
        } 
        arr_36 [i_4] = (short)28371;
        var_27 &= ((/* implicit */short) (!(((/* implicit */_Bool) (short)18720))));
    }
    for (short i_11 = 0; i_11 < 21; i_11 += 4) 
    {
        arr_40 [i_11] [i_11] = ((short) (-(((/* implicit */int) arr_38 [i_11]))));
        var_28 = (short)-1;
        arr_41 [i_11] [i_11] = var_1;
        var_29 = ((short) (!(((/* implicit */_Bool) arr_37 [i_11]))));
    }
    var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)26857)) ? (((/* implicit */int) (short)4156)) : (((/* implicit */int) (short)-1)))) ^ (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-5)))) | (((/* implicit */int) ((short) var_7)))))));
    var_31 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_2)))) : (((/* implicit */int) var_2)))) * (((/* implicit */int) (short)-102))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_12 = 4; i_12 < 18; i_12 += 1) 
    {
        var_32 = ((/* implicit */short) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_39 [i_12 - 2]))));
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) arr_38 [i_12 + 1])))))));
        var_34 = ((short) (+(((/* implicit */int) (short)(-32767 - 1)))));
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 15; i_13 += 2) 
    {
        arr_46 [i_13] = ((short) arr_38 [i_13]);
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */int) (short)511)) == (((/* implicit */int) (short)18089)))))));
        arr_47 [i_13] [i_13] = (short)14827;
        var_36 -= var_8;
        var_37 |= arr_45 [i_13] [i_13];
    }
}
