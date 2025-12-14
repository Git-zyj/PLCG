/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226667
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
    for (int i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */int) ((unsigned char) (((-(var_6))) / ((-(((/* implicit */int) (unsigned char)25)))))));
        var_13 = ((/* implicit */int) (short)32767);
        var_14 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)18))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_1 + 1] [i_0] [i_1] = ((/* implicit */_Bool) (-((+(arr_10 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 2])))));
                        var_15 = ((/* implicit */unsigned int) var_1);
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */int) (((-(((/* implicit */int) arr_6 [10U])))) >= (-1)));
    }
    for (int i_4 = 1; i_4 < 21; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_5 = 4; i_5 < 21; i_5 += 2) 
        {
            for (short i_6 = 2; i_6 < 21; i_6 += 2) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) 1766229070)) % (var_9))))));
                        var_18 = ((/* implicit */unsigned int) arr_4 [i_6] [i_5]);
                        arr_22 [(unsigned char)5] [i_5 - 3] [i_6] [i_7] = ((/* implicit */short) arr_3 [i_4]);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */int) arr_5 [(unsigned char)16] [(unsigned char)16]);
        arr_23 [i_4] = var_4;
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 10; i_8 += 2) 
    {
        arr_28 [i_8] = ((/* implicit */short) (-(arr_10 [i_8] [i_8] [i_8 + 1] [i_8])));
        arr_29 [i_8] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 23LL))))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_8])) <= (((/* implicit */int) arr_8 [i_8] [i_8 - 1] [i_8 + 2] [i_8]))));
        var_21 = ((/* implicit */unsigned char) var_9);
    }
    /* LoopSeq 4 */
    for (unsigned char i_9 = 4; i_9 < 9; i_9 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((short) (-(arr_10 [i_9] [i_9] [i_9 - 1] [i_9]))));
        /* LoopSeq 2 */
        for (short i_10 = 1; i_10 < 7; i_10 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) (((~(arr_31 [i_9]))) | (((((/* implicit */int) arr_4 [i_9 - 1] [i_9 - 4])) & (((/* implicit */int) arr_4 [i_9 - 4] [i_9 - 4]))))));
            arr_34 [(unsigned char)1] [i_9] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_15 [i_9 - 4])) < (((/* implicit */int) arr_15 [i_9 - 3])))))));
            var_24 = ((/* implicit */_Bool) var_6);
            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)18)) & (((/* implicit */int) var_7)))) >> (((var_5) - (6347740808302983191LL)))));
        }
        for (unsigned char i_11 = 1; i_11 < 7; i_11 += 2) 
        {
            var_26 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_38 [i_11])))) && (((/* implicit */_Bool) 1555208074))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned short)31277))))))) * ((+(arr_20 [i_9 - 3] [i_9] [i_11 + 1] [i_9] [i_11] [i_11 + 1])))));
        }
        arr_39 [i_9] [6U] = ((/* implicit */unsigned int) var_8);
    }
    for (unsigned char i_12 = 4; i_12 < 9; i_12 += 3) /* same iter space */
    {
        arr_42 [i_12] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_8)))) & (((((arr_31 [i_12]) + (2147483647))) >> (((((/* implicit */int) var_10)) - (4553)))))));
        arr_43 [i_12] = ((/* implicit */unsigned char) (((((~(939524096U))) + ((~(arr_16 [i_12] [i_12]))))) | (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)20433)))))));
        var_28 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) var_6)) / (arr_25 [i_12])))));
        var_29 = ((/* implicit */_Bool) 2660849673U);
    }
    /* vectorizable */
    for (unsigned char i_13 = 4; i_13 < 9; i_13 += 3) /* same iter space */
    {
        arr_46 [i_13] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)242))));
        var_30 = ((/* implicit */short) (+(var_9)));
        var_31 = ((/* implicit */short) (!(((((/* implicit */int) var_8)) < (((/* implicit */int) var_3))))));
    }
    /* vectorizable */
    for (unsigned char i_14 = 4; i_14 < 9; i_14 += 3) /* same iter space */
    {
        var_32 = ((((/* implicit */int) arr_45 [i_14 + 1])) >> (((arr_3 [i_14 - 3]) - (358766472U))));
        arr_50 [i_14] = ((/* implicit */unsigned char) (-(-744814937)));
    }
    var_33 = ((/* implicit */unsigned char) (~(8619175952150629808ULL)));
}
