/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245095
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
    var_13 = ((/* implicit */short) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_10)))))))));
        arr_5 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)17423)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))))) : (((((/* implicit */_Bool) ((short) (short)24980))) ? (((((/* implicit */_Bool) (short)21613)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32750)))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_3))))))) ? ((+((~(((/* implicit */int) var_5)))))) : ((((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) (short)14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) var_5))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                    var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((~(var_2))) : (((((/* implicit */_Bool) var_10)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                    arr_10 [i_0] [i_2] [5U] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) (short)29815))))))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_17 *= 4294967295U;
            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (457490789U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)24630)))))) ? ((+(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)21613)) : (((/* implicit */int) var_1))))));
        }
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            arr_20 [i_3] [i_3] |= ((/* implicit */unsigned int) var_4);
            var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7038))) : (2929999896U)))))))));
            var_20 ^= var_9;
            arr_21 [i_3] [i_3] = ((/* implicit */short) var_11);
            var_21 -= ((/* implicit */short) (+((+(((/* implicit */int) (short)721))))));
        }
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            var_22 = (~(((unsigned int) var_3)));
            var_23 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 2986445757U))) ? (((/* implicit */int) ((short) var_12))) : (((/* implicit */int) var_3)))))));
            /* LoopNest 3 */
            for (short i_7 = 1; i_7 < 9; i_7 += 3) 
            {
                for (short i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        {
                            arr_31 [i_3] [i_6] [i_3] [i_3] [(short)1] [i_9] [(short)0] = ((/* implicit */unsigned int) var_4);
                            var_24 *= var_5;
                            var_25 = ((/* implicit */short) (~(((unsigned int) (~(((/* implicit */int) var_0)))))));
                            arr_32 [i_6] [i_6] [i_6] [i_9] = ((/* implicit */short) (~(((((/* implicit */_Bool) (+(var_10)))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29621)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))));
                        }
                    } 
                } 
            } 
            arr_33 [i_3] [i_6] [i_6] = (+(((unsigned int) (+(var_2)))));
        }
        for (short i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            var_26 = var_4;
            arr_37 [i_3] [i_10] = ((/* implicit */short) (+(((/* implicit */int) var_7))));
        }
        arr_38 [i_3] = ((/* implicit */unsigned int) (short)23445);
        var_27 = ((((/* implicit */_Bool) (~((~(((/* implicit */int) (short)1))))))) ? (((/* implicit */unsigned int) (+((+(((/* implicit */int) (short)22376))))))) : (((unsigned int) var_3)));
        var_28 = ((/* implicit */short) (~((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)1310))))))));
    }
}
