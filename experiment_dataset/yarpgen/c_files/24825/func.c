/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24825
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_14 [i_3] [i_3] [23] [23] = ((/* implicit */int) var_18);
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((signed char)120), ((signed char)-120)))) | (((/* implicit */int) (signed char)120))));
                                var_20 *= ((/* implicit */signed char) (~(((/* implicit */int) min((arr_1 [i_4]), (((/* implicit */signed char) var_15)))))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_0] [(signed char)16] [(signed char)16] [i_2] [i_0] [i_0])))))));
                            }
                            var_22 += ((/* implicit */unsigned short) (((+(arr_11 [i_2] [(_Bool)1] [i_2] [i_0] [i_0] [i_0]))) / (((((/* implicit */int) var_16)) / (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                            var_23 = ((/* implicit */_Bool) ((short) (~(min((var_17), (var_17))))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) 5851024356889861294LL))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 18; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                {
                    arr_24 [i_5] [i_6] |= ((/* implicit */short) var_17);
                    var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_21 [i_6] [i_5]), (arr_21 [i_5 + 1] [i_5 - 1])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_5 + 1] [i_6])), (var_6)))) : (((/* implicit */int) arr_21 [i_6] [i_7]))));
                    var_26 = ((/* implicit */signed char) max((var_26), (arr_15 [i_5] [i_5] [i_5] [i_5] [i_6] [i_5])));
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                    {
                        var_27 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_6] [i_5])) ? (((/* implicit */int) arr_9 [i_8])) : (((/* implicit */int) (unsigned char)210))))))) && ((!(((((/* implicit */_Bool) -2147483637)) || (((/* implicit */_Bool) arr_8 [i_6] [i_7] [i_8]))))))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_5 + 1] [i_8])) ? (var_5) : (var_3)))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_5] [i_5 + 2] [i_5 + 2] [i_5])) ? (arr_23 [i_10] [i_7] [i_6] [i_5]) : (arr_23 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5 + 1]))))));
                            arr_32 [i_7] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) arr_15 [i_5] [i_6] [i_7] [i_7] [i_10] [i_10])) : (((/* implicit */int) (short)32123))))) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-28575)) + (28598))))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
                            var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)28574)) ? (((/* implicit */int) arr_12 [i_5 - 1] [i_5] [i_5] [i_6])) : (((/* implicit */int) arr_12 [i_5 + 2] [i_7] [i_9] [i_6]))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_7] [i_7])) ? (((/* implicit */int) var_12)) : (arr_28 [(short)18] [i_5 + 2] [(short)18] [i_5 + 2] [i_5 + 2])));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_12 [i_6] [i_7] [i_7] [i_6])) && (((/* implicit */_Bool) 1574540464U))))))));
                            var_33 = ((/* implicit */unsigned int) (+(min(((-(arr_11 [i_7] [i_9] [i_7] [i_7] [i_7] [i_7]))), (((/* implicit */int) arr_17 [i_5 - 1]))))));
                            arr_36 [i_5] [i_6] [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) arr_26 [i_5 - 1] [(signed char)13] [i_7] [i_9] [i_7]);
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_26 [i_5] [i_5 + 1] [i_5] [i_5] [i_7]), (((/* implicit */unsigned int) arr_9 [i_5]))))) ? (((unsigned long long int) arr_9 [i_5])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_5])), (arr_27 [i_5] [i_6]))))))))));
                            var_35 = ((/* implicit */unsigned char) max(((((+(((/* implicit */int) var_9)))) * (((/* implicit */int) min((arr_13 [i_7] [i_6] [i_6] [i_6] [i_6]), (((/* implicit */short) arr_16 [i_9] [i_9] [i_9] [i_9] [i_9] [(unsigned short)14] [i_9]))))))), (((/* implicit */int) (signed char)120))));
                            arr_39 [i_5] [i_5] [i_5] [i_5] [i_12] [i_5 - 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_20 [i_7] [i_7])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))))))) ? (((var_0) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_6] [i_6] [i_6])) * (((/* implicit */int) (unsigned char)22))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (short)28563)))) == (((/* implicit */int) arr_17 [i_5 + 1]))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_13 = 2; i_13 < 19; i_13 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned char) var_15);
                            arr_42 [i_13] [i_7] [i_7] [i_7] [i_13 - 2] [i_13 - 2] = (-(((/* implicit */int) (_Bool)1)));
                        }
                        var_37 = (i_7 % 2 == 0) ? (((/* implicit */_Bool) ((((var_0) >> (((((/* implicit */int) arr_10 [i_7] [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5])) - (29151))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_7] [i_5 + 2] [i_5 + 2] [i_7] [i_5 + 2])))))))) : (((/* implicit */_Bool) ((((var_0) >> (((((((/* implicit */int) arr_10 [i_7] [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5])) - (29151))) + (3380))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_7] [i_5 + 2] [i_5 + 2] [i_7] [i_5 + 2]))))))));
                        arr_43 [i_7] [i_7] = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */long long int) (unsigned char)216)), (-4767782569595087437LL))));
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                        {
                            var_38 &= ((/* implicit */signed char) (~(((max((((/* implicit */long long int) (signed char)-127)), (-7069335867855503701LL))) & (((/* implicit */long long int) ((arr_28 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_14]) ^ (((/* implicit */int) arr_20 [i_5] [i_5])))))))));
                            var_39 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (arr_29 [i_5] [i_6] [i_5 - 1])))) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) var_11))))));
                        }
                    }
                    for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
                    {
                        arr_49 [i_7] = ((/* implicit */unsigned char) max((((signed char) arr_1 [i_5])), (((/* implicit */signed char) ((_Bool) arr_11 [i_5] [i_5] [i_5 + 2] [i_5] [i_5] [i_5])))));
                        arr_50 [i_5] [7ULL] [i_7] [7ULL] [7ULL] [i_15] = ((/* implicit */long long int) ((unsigned short) (~(arr_18 [i_5]))));
                    }
                }
            } 
        } 
    } 
}
