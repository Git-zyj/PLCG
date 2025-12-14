/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230816
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
    var_18 = ((/* implicit */unsigned int) ((min((((/* implicit */int) var_10)), ((+(((/* implicit */int) var_9)))))) >> ((((((+((-2147483647 - 1)))) - (-2147483623))) + (40)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_1))))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)124)), (var_8)))) ? ((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) : (((/* implicit */int) var_0))));
                arr_6 [i_0] = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_10))))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), (var_5)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        arr_12 [i_2] [i_2] = ((((/* implicit */_Bool) ((unsigned short) (unsigned short)13))) ? (((/* implicit */int) arr_11 [(unsigned char)8])) : (((/* implicit */int) ((unsigned char) arr_10 [i_2] [i_2]))));
        arr_13 [i_2] [i_2] = ((/* implicit */long long int) ((_Bool) (unsigned short)65525));
    }
    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        arr_17 [i_3] [(unsigned short)12] |= ((/* implicit */unsigned char) (~(((unsigned int) (+(((/* implicit */int) arr_14 [i_3] [i_3])))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (unsigned short i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    {
                        var_20 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_21 [i_4] [i_4] [2ULL] [i_6 - 1]))))) ? (((/* implicit */int) min(((signed char)-100), ((signed char)123)))) : (((/* implicit */int) (unsigned char)250)))))));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((3404454182U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_6 + 3])) + (((/* implicit */int) (_Bool)0))))))))));
                    }
                } 
            } 
        } 
        arr_27 [i_3] = ((/* implicit */_Bool) var_15);
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            for (short i_8 = 2; i_8 < 21; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    {
                        arr_37 [i_3] [i_7] [i_3] [i_8 - 1] [i_9] = ((/* implicit */signed char) ((int) ((int) 1867386718U)));
                        arr_38 [4ULL] [i_7] [i_8] [i_9] [i_8] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                        arr_39 [i_9] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
                        arr_40 [i_3] [i_8] = ((/* implicit */unsigned int) arr_22 [i_8] [i_8 - 2] [i_8] [i_8 + 1]);
                        arr_41 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((int) (-(arr_28 [i_3])))) != (((/* implicit */int) ((_Bool) (-(arr_34 [i_3])))))));
                    }
                } 
            } 
        } 
        arr_42 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_3] [i_3] [i_3] [i_3])) ? ((-(((/* implicit */int) (signed char)-118)))) : (((((/* implicit */_Bool) arr_32 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_32 [(_Bool)1] [i_3] [4] [i_3])) : (((/* implicit */int) arr_32 [i_3] [i_3] [i_3] [i_3]))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 3; i_10 < 19; i_10 += 1) 
    {
        var_22 += ((/* implicit */int) arr_43 [i_10] [i_10]);
        /* LoopSeq 1 */
        for (unsigned short i_11 = 1; i_11 < 22; i_11 += 4) 
        {
            arr_48 [(unsigned short)18] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_12))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)6))))) : (((var_15) * (var_15)))));
            var_23 ^= ((/* implicit */unsigned char) ((arr_46 [(unsigned short)14]) ? (((((/* implicit */_Bool) var_5)) ? (-1305335186) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_7))));
            arr_49 [i_10] [i_10] = ((/* implicit */_Bool) (+((~(-1305335202)))));
        }
    }
}
