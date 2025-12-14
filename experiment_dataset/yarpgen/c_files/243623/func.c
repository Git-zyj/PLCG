/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243623
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((long long int) 4123168604160LL));
                        arr_9 [i_3] [i_1 + 1] [i_3] &= ((/* implicit */signed char) var_6);
                    }
                } 
            } 
        } 
        arr_10 [14] &= ((/* implicit */int) ((((/* implicit */_Bool) (~((~(var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : (arr_1 [14])));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775807LL))));
    }
    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_5 = 4; i_5 < 14; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 12; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    {
                        var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)241)) : ((-(((/* implicit */int) var_8))))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (signed char)-118))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_8 = 3; i_8 < 11; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (unsigned char i_10 = 2; i_10 < 13; i_10 += 1) 
                    {
                        {
                            arr_28 [i_4] [i_10] [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)235))));
                            var_23 ^= (+(var_7));
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (signed char)-118))));
        var_25 |= ((/* implicit */long long int) (unsigned char)253);
    }
    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            var_26 = ((/* implicit */long long int) ((signed char) ((var_15) & (arr_4 [i_11] [i_12]))));
            /* LoopNest 2 */
            for (long long int i_13 = 2; i_13 < 19; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    {
                        var_27 ^= ((/* implicit */unsigned char) var_3);
                        var_28 = ((/* implicit */unsigned char) arr_6 [i_14] [i_14]);
                    }
                } 
            } 
            arr_38 [i_11] [i_12] [i_12] = ((/* implicit */unsigned int) arr_7 [i_11] [i_11] [i_12] [i_11] [i_11]);
            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_12]))));
        }
        for (int i_15 = 1; i_15 < 18; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                for (long long int i_17 = 3; i_17 < 16; i_17 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) var_11);
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) 2147483640))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 20; i_18 += 4) 
            {
                for (unsigned char i_19 = 0; i_19 < 20; i_19 += 3) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) 65520);
                        var_33 = ((/* implicit */long long int) var_9);
                        arr_51 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_11] [i_15 - 1] [i_11] [i_19] [i_15])) || (((/* implicit */_Bool) 1015808))));
                        var_34 += ((/* implicit */unsigned char) arr_50 [i_19] [i_18] [i_15] [8]);
                        arr_52 [i_19] [i_18] [i_15] [i_11] = ((/* implicit */signed char) (((+(-29LL))) | (((/* implicit */long long int) 0))));
                    }
                } 
            } 
        }
        for (long long int i_20 = 3; i_20 < 17; i_20 += 1) 
        {
            arr_55 [i_20 + 2] [(signed char)15] [i_11] = ((/* implicit */long long int) ((int) (signed char)-112));
            var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((4123168604146LL) ^ (((long long int) (signed char)-102))))) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (unsigned char)231))));
            var_36 = ((/* implicit */signed char) min((var_36), (var_2)));
        }
        for (unsigned int i_21 = 0; i_21 < 20; i_21 += 1) 
        {
            arr_58 [i_21] [i_21] [i_21] = 133693440U;
            var_37 |= var_12;
        }
        var_38 = ((/* implicit */unsigned char) min((var_38), (arr_41 [i_11] [i_11] [i_11] [i_11])));
    }
    for (long long int i_22 = 2; i_22 < 23; i_22 += 2) 
    {
        var_39 = ((/* implicit */unsigned char) arr_6 [i_22 + 1] [i_22]);
        var_40 = ((((/* implicit */_Bool) arr_62 [i_22 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)99))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) | (arr_7 [i_22] [i_22 - 1] [i_22] [i_22 + 1] [i_22]))));
    }
    var_41 = ((/* implicit */long long int) ((var_15) >> (((((((/* implicit */_Bool) -3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : ((~(var_12))))) - (242LL)))));
    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) var_0))));
    /* LoopNest 2 */
    for (long long int i_23 = 0; i_23 < 10; i_23 += 3) 
    {
        for (signed char i_24 = 1; i_24 < 6; i_24 += 2) 
        {
            {
                arr_68 [i_24] [i_24] = ((/* implicit */unsigned char) var_1);
                var_43 = ((/* implicit */long long int) arr_15 [i_23] [i_23] [i_23]);
            }
        } 
    } 
}
