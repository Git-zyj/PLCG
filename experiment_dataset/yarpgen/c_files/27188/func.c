/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27188
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned int i_3 = 3; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_11 = (-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_0] [i_0] [i_0]))));
                        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (((!(((/* implicit */_Bool) 13ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : ((+(((/* implicit */int) arr_2 [i_0])))))))));
                        arr_10 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) arr_1 [i_1]))))) ? (26ULL) : (2622448088517408549ULL)));
                    }
                } 
            } 
            arr_11 [i_0] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)29666)))))));
            var_13 = (_Bool)1;
        }
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)7);
    }
    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */signed char) min((min((max((arr_5 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_7 [i_4] [i_4] [i_4] [(unsigned short)7])))), (((/* implicit */unsigned long long int) (-(3243949848U)))))), (min((((/* implicit */unsigned long long int) min((arr_0 [i_4]), (((/* implicit */unsigned short) (_Bool)1))))), (arr_14 [(unsigned char)20] [i_4])))));
        var_14 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) min((arr_3 [i_4] [(unsigned short)18]), (((/* implicit */signed char) arr_9 [i_4] [i_4] [i_4]))))), (arr_13 [i_4] [i_4])))) ? (min((((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */unsigned long long int) arr_7 [i_4] [i_4] [i_4] [i_4])) : (arr_5 [2] [i_4] [10ULL] [18ULL]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65532))))))) : (max((min((0ULL), (((/* implicit */unsigned long long int) (signed char)-108)))), (min((((/* implicit */unsigned long long int) (unsigned short)56416)), (arr_5 [i_4] [i_4] [9ULL] [i_4])))))));
        arr_16 [i_4] = ((/* implicit */short) arr_9 [i_4] [i_4] [i_4]);
        arr_17 [i_4] [(unsigned short)2] &= ((/* implicit */unsigned int) max((min((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_3 [i_4] [(signed char)14])))), ((~(((/* implicit */int) (short)-1739)))))), (max((((/* implicit */int) min(((short)-1), (((/* implicit */short) (signed char)-116))))), (max((arr_7 [i_4] [i_4] [(unsigned short)2] [i_4]), (arr_13 [i_4] [i_4])))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned int i_7 = 3; i_7 < 16; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-49))))), ((+(((/* implicit */int) (_Bool)1)))))))));
                                arr_30 [i_6] [i_7 + 3] [i_5] [i_6] [i_9] [i_5] [i_5] = ((/* implicit */signed char) (short)-3);
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) (unsigned short)65531);
                }
            } 
        } 
        arr_31 [i_5] = ((/* implicit */unsigned long long int) arr_8 [i_5] [i_5] [i_5]);
        arr_32 [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((min((((/* implicit */int) (signed char)99)), (-652913140))), (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_9 [6] [i_5] [i_5])) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_5]))))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_27 [i_5])))), (min((726525866292022511ULL), (((/* implicit */unsigned long long int) arr_27 [i_5]))))))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_35 [i_10] [i_10] = arr_0 [i_10];
        arr_36 [i_10] = ((/* implicit */unsigned int) 726525866292022524ULL);
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) 17720218207417529096ULL))));
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_39 [i_10] [i_11] = ((/* implicit */int) arr_1 [i_10]);
            arr_40 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_10] [i_10] [i_10] [(short)21])) ? (((/* implicit */unsigned long long int) (-(3243949859U)))) : (arr_24 [i_10] [i_10])));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_18 *= ((/* implicit */_Bool) (unsigned short)24333);
            arr_43 [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 726525866292022529ULL)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) arr_9 [i_12] [i_12] [9]))));
        }
        arr_44 [i_10] = ((/* implicit */unsigned char) arr_6 [i_10] [i_10] [i_10]);
    }
    var_19 = ((/* implicit */_Bool) max((max((8849563496411965743ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (750496112)))) ? (((/* implicit */int) min(((unsigned short)5226), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) var_1)))))));
}
