/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216445
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)246))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (3686782980126910618ULL)))))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-119)) ? ((-(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) (signed char)-96))))));
                    var_12 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (short)15060)) >= (((/* implicit */int) (short)15068)))));
                    arr_11 [i_0] [(short)8] [i_2] = ((/* implicit */signed char) var_11);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_13 = ((/* implicit */_Bool) arr_1 [i_3]);
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((10520209479917019246ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_5 [14LL] [i_3] [i_4])))))))))));
            /* LoopSeq 3 */
            for (signed char i_5 = 2; i_5 < 10; i_5 += 2) 
            {
                var_15 = (_Bool)1;
                arr_19 [i_3] [i_4] [i_3] = ((/* implicit */short) var_2);
            }
            for (signed char i_6 = 3; i_6 < 10; i_6 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */signed char) ((_Bool) 2147483648U));
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_6 - 3] [i_6 - 2] [i_6 + 1])))))));
                arr_22 [i_4] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1))));
            }
            for (signed char i_7 = 3; i_7 < 10; i_7 += 1) /* same iter space */
            {
                arr_26 [i_3] [i_7 - 2] = ((/* implicit */signed char) (_Bool)1);
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28)))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (signed char i_9 = 2; i_9 < 9; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_28 [i_3] [7U] [i_8] [i_3])) : (((/* implicit */int) var_11)))) <= (((arr_30 [i_3] [i_7] [i_8] [i_3]) & (((/* implicit */int) var_9))))));
                            arr_32 [i_3] [i_9] [4LL] [i_8] [i_8] [i_9] = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
            }
            arr_33 [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)15048)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3]))) : (((((/* implicit */_Bool) (signed char)-28)) ? (2085543785U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        }
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_12 = 1; i_12 < 10; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        var_20 = var_0;
                        arr_44 [i_3] [i_10] [(_Bool)1] [i_12] [i_12] [i_12] [(signed char)7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (2883383513514128898ULL)));
                    }
                    arr_45 [(_Bool)1] [i_11] [i_12] = ((/* implicit */long long int) (+(arr_31 [i_12 + 1] [i_12])));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_21 [i_3] [i_10] [(_Bool)1]))));
                }
                for (unsigned int i_14 = 1; i_14 < 10; i_14 += 1) /* same iter space */
                {
                    var_22 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_3] [i_10] [(_Bool)1] [(signed char)5])))) : ((-(((/* implicit */int) (signed char)-8))))));
                    var_23 = ((/* implicit */unsigned long long int) ((signed char) arr_42 [i_10] [i_10] [i_11] [i_14 - 1] [i_14 - 1] [(_Bool)1] [i_14]));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) 2789884);
                        var_25 = ((/* implicit */_Bool) var_7);
                    }
                    var_26 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_3] [i_10] [i_11])) - (((/* implicit */int) (short)14173)))))));
                arr_52 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_3] [i_3] [(short)2]))) : (var_1)))) && (((/* implicit */_Bool) var_5))));
                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)5737)) || (((/* implicit */_Bool) 21U)))) ? (((/* implicit */unsigned long long int) 4294967278U)) : (var_8))))));
                arr_53 [i_3] [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (short)15048)))));
            }
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (-(16U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (17360131052384303085ULL)))));
            arr_54 [(_Bool)1] = ((/* implicit */signed char) (_Bool)1);
        }
    }
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        var_30 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_1 [i_16 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((2514417059U) < (((/* implicit */unsigned int) 601741926)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-86))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-91)) * (((/* implicit */int) (short)-28715))))) : (((((/* implicit */_Bool) var_8)) ? (arr_56 [i_16]) : (((/* implicit */long long int) 1415726299U))))))));
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned long long int) 2514417059U)) / (((/* implicit */unsigned long long int) (+(var_10))))))) ? (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (_Bool)0))))) ? (min((((/* implicit */long long int) var_6)), (15LL))) : (((/* implicit */long long int) 3559186581U)))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)-15049), (((/* implicit */short) (_Bool)0))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_17 = 3; i_17 < 11; i_17 += 1) 
        {
            for (long long int i_18 = 4; i_18 < 12; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 1; i_19 < 12; i_19 += 4) 
                {
                    {
                        arr_64 [i_18] [2] = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) (short)5737)))));
                        arr_65 [(signed char)5] [i_18] [(signed char)4] [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-28715)) - (max((((/* implicit */int) (_Bool)0)), (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_2 [i_19]))))))));
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_3))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_0 [i_16 + 1])))) ? (((7U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (0U)));
                        arr_66 [i_16] [i_17 - 2] [i_18] [i_18] [i_19 + 1] = 2147483648U;
                    }
                } 
            } 
        } 
    }
}
