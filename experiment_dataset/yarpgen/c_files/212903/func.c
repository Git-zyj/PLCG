/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212903
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) (signed char)63);
        var_19 = (((-(((/* implicit */int) (_Bool)1)))) >= ((~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_20 -= ((/* implicit */unsigned short) arr_4 [i_0]);
                        var_21 = arr_8 [i_0] [i_2] [i_2];
                        var_22 = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
        var_24 += ((/* implicit */long long int) var_5);
        var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) : (((/* implicit */int) (short)13158))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                {
                    var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-13146)) && ((_Bool)1)));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (+(((/* implicit */int) arr_16 [4LL] [i_5] [i_6])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 3; i_7 < 21; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) arr_7 [i_5]);
                        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_4] [i_5] [i_5]))))) ? (var_10) : (((/* implicit */long long int) arr_12 [i_4]))));
                    }
                    var_30 = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_5])) & (((/* implicit */int) arr_15 [i_5]))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_6] [i_5] [i_4])) >= (((/* implicit */int) arr_8 [i_4] [i_5] [i_6]))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) min((((/* implicit */long long int) var_3)), (var_10))))));
    /* LoopNest 2 */
    for (unsigned short i_8 = 2; i_8 < 22; i_8 += 3) 
    {
        for (signed char i_9 = 2; i_9 < 22; i_9 += 4) 
        {
            {
                var_33 &= (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)-11)), ((-(((/* implicit */int) arr_25 [i_9] [i_9]))))))));
                var_34 = ((/* implicit */signed char) min((((/* implicit */long long int) arr_19 [(unsigned short)18] [i_9] [(_Bool)1])), (((((/* implicit */_Bool) 3814188836145811153LL)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8]))) / (-3814188836145811160LL))) : (((/* implicit */long long int) (-2147483647 - 1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (long long int i_11 = 4; i_11 < 10; i_11 += 4) 
        {
            {
                var_35 = ((/* implicit */_Bool) (unsigned short)50584);
                var_36 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_11]))));
                /* LoopNest 3 */
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        for (signed char i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) ((unsigned char) (short)13158));
                                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)13158)) && (((((/* implicit */_Bool) arr_9 [i_13] [i_11] [i_11] [i_13])) && (((/* implicit */_Bool) arr_9 [i_11] [i_11] [i_11 - 1] [i_11]))))));
                                var_39 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)210)) >> (((min((9223372036854775807LL), (((/* implicit */long long int) (signed char)-124)))) + (133LL)))));
                                var_40 = ((/* implicit */long long int) arr_23 [2]);
                                var_41 = ((/* implicit */_Bool) arr_17 [i_10] [i_11] [i_11] [i_14]);
                            }
                        } 
                    } 
                } 
                var_42 = ((/* implicit */_Bool) ((long long int) max(((~(((/* implicit */int) (signed char)-47)))), ((((-2147483647 - 1)) & (((/* implicit */int) (signed char)23)))))));
            }
        } 
    } 
}
