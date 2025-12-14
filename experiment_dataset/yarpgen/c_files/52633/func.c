/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52633
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
    var_19 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 3383717509U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (911249787U)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((arr_1 [i_0 + 1]) - (arr_1 [i_0 - 1])));
        var_21 = ((/* implicit */unsigned char) var_3);
        var_22 = ((/* implicit */unsigned short) (-(arr_1 [i_0 - 1])));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [i_1] = (~(((/* implicit */int) var_13)));
            var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 3383717509U)))))));
            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1]))));
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_9 [i_0] [i_0 + 1] [i_2] = ((/* implicit */int) ((arr_1 [i_2]) != (((/* implicit */int) (unsigned char)32))));
            var_25 = ((/* implicit */unsigned short) (-(arr_4 [i_0 + 1] [i_2])));
            var_26 = ((/* implicit */unsigned char) 911249786U);
            var_27 = ((/* implicit */unsigned long long int) 3383717510U);
        }
        for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 1) 
        {
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) arr_5 [i_0 - 2]))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    for (unsigned int i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_3 - 1] [i_4])) ? ((~(63LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_6] [i_3 - 4] [i_6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [i_0 - 2] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_6 + 1])))))));
                            arr_20 [i_0 - 1] [i_3 - 2] [i_3] [i_5] [i_6 - 2] = ((/* implicit */unsigned short) ((short) 911249786U));
                        }
                    } 
                } 
            } 
            arr_21 [i_3] [i_0] [i_3 - 3] = ((/* implicit */_Bool) 3383717509U);
            var_30 &= ((/* implicit */unsigned short) ((unsigned char) var_3));
        }
        var_31 = ((/* implicit */signed char) (((+(((/* implicit */int) (short)2884)))) == ((~(((/* implicit */int) (short)2884))))));
    }
    for (short i_7 = 2; i_7 < 10; i_7 += 3) 
    {
        var_32 = ((/* implicit */unsigned long long int) arr_3 [i_7] [i_7 - 1]);
        var_33 = ((/* implicit */short) arr_4 [i_7 + 1] [i_7 + 1]);
    }
    for (unsigned short i_8 = 1; i_8 < 12; i_8 += 1) 
    {
        arr_26 [i_8] = (~(min((((/* implicit */long long int) (-(911249786U)))), (-64LL))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_31 [i_9] [i_8] = (!(((/* implicit */_Bool) var_15)));
            var_34 += ((/* implicit */unsigned char) ((8821722549267341455LL) < (63LL)));
            var_35 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_23 [i_8])) <= (((/* implicit */int) arr_29 [i_8] [i_9]))))) > (((((/* implicit */_Bool) arr_24 [i_9])) ? (460422933) : (((/* implicit */int) (signed char)18))))));
            var_36 = ((/* implicit */signed char) ((((64LL) << (((3383717509U) - (3383717494U))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))));
        }
        var_37 = ((/* implicit */unsigned int) (+(((632469433074568861ULL) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)27037)))))))));
        arr_32 [i_8] = (short)-2885;
        var_38 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) 2733744912U)))));
    }
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_11 = 2; i_11 < 9; i_11 += 2) 
        {
            for (short i_12 = 1; i_12 < 8; i_12 += 2) 
            {
                for (short i_13 = 2; i_13 < 6; i_13 += 2) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        arr_46 [i_10] [i_11] [i_12 + 1] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_38 [i_11 - 1] [i_11 + 1] [i_11 + 1]))));
                    }
                } 
            } 
        } 
        arr_47 [i_10] [i_10] = ((/* implicit */short) arr_28 [i_10] [i_10]);
        arr_48 [i_10] = ((/* implicit */unsigned char) var_17);
    }
}
