/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222502
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((828611230U) / (((/* implicit */unsigned int) 153456565))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((806520046U) != (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)107))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_0] = ((((/* implicit */int) (signed char)105)) - (arr_4 [i_0]));
                        var_18 = ((/* implicit */short) arr_4 [i_0]);
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-108))))) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 1] [i_0] [i_2 - 2] [i_3 - 2]))));
                        arr_12 [i_0] [i_1] [i_2] [i_0] [2] [i_0] = ((/* implicit */unsigned int) (~(10ULL)));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_4 + 1] [i_3] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_10 [i_4] [i_3] [i_0] [i_1] [(signed char)4]))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((((/* implicit */int) (signed char)-82)) + (2147483647))) >> (((/* implicit */int) (unsigned char)14)))) & (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1] [i_3 - 1])))))));
                        }
                        for (short i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_1] [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_3]))) / (3414635170U)))) : (((long long int) (signed char)21))));
                            arr_21 [i_0] [i_0] [i_0] = (+(((/* implicit */int) (short)0)));
                        }
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_21 &= ((/* implicit */unsigned int) ((unsigned char) 1553002760U));
                            arr_25 [i_0] [i_6] [i_2] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_24 [i_0] [i_1] [i_2] [i_0] [i_6])) != (18446744073709551606ULL)));
                        }
                    }
                    for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)109))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned short) (signed char)-82)))));
                        arr_29 [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]));
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
        {
            arr_33 [i_0] [i_0] [i_0] = (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_8] [i_8])));
            var_24 ^= ((/* implicit */long long int) arr_4 [i_8]);
        }
        for (int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
        {
            var_25 ^= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
            var_26 = ((/* implicit */unsigned int) ((arr_5 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_35 [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_9])) : (((/* implicit */int) arr_0 [i_9] [i_0]))))));
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned int i_11 = 4; i_11 < 18; i_11 += 3) 
                {
                    {
                        arr_41 [i_0] [i_9] [i_9] [i_0] [i_9] [i_11] = ((/* implicit */signed char) (+(arr_39 [12U] [i_11 - 4] [(short)16] [i_11])));
                        arr_42 [i_0] = ((/* implicit */_Bool) ((arr_23 [i_11 - 2] [i_11] [i_11 + 1] [i_11 - 1] [i_11] [i_11] [i_11 + 1]) ^ (arr_23 [i_11 - 4] [i_11 - 3] [i_11] [i_11 - 1] [i_11 - 2] [i_11] [i_10])));
                        var_27 = ((/* implicit */int) (unsigned short)17066);
                        arr_43 [i_9] [i_11 - 4] [i_9] [i_9] &= ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_0] [i_9] [i_9] [i_10] [i_11 - 3])) > (((/* implicit */int) arr_10 [i_0] [i_11 - 4] [i_9] [i_0] [i_11]))));
                    }
                } 
            } 
        }
        for (short i_12 = 2; i_12 < 18; i_12 += 1) 
        {
            arr_48 [i_0] [i_0] [i_0] = arr_8 [i_0] [i_12];
            /* LoopNest 2 */
            for (unsigned int i_13 = 1; i_13 < 18; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    {
                        arr_55 [i_0] [i_0] [i_13 + 1] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_3 [i_12] [i_14]));
                        arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_30 [i_0] [i_0] [i_0]);
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_12 + 1] [i_0])) ? (arr_14 [i_12 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_14] [i_12] [i_0] [i_13 - 1] [i_0])))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 1093309857)) <= (18446744073709551574ULL)))) - (((/* implicit */int) (short)(-32767 - 1)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (signed char i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    {
                        var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_12 - 2] [i_12] [i_12 + 1] [i_12 - 1])) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31452)) / (((/* implicit */int) arr_49 [i_0] [(signed char)0] [i_15] [i_16])))))));
                        var_31 = ((/* implicit */short) arr_14 [i_0] [i_0]);
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_12] [i_15] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_60 [i_0] [i_16] [15LL] [i_15])))) ? (1099511627775ULL) : (((/* implicit */unsigned long long int) (~(0U))))));
                    }
                } 
            } 
            var_33 |= arr_9 [i_0] [i_0] [4] [i_12 - 2] [i_0];
        }
    }
    var_34 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)36638))));
}
