/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31792
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) var_11)))) : ((+(((/* implicit */int) arr_2 [i_3])))))) % (((((/* implicit */int) min((arr_9 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */short) var_8))))) - (((((/* implicit */int) var_0)) / (((/* implicit */int) var_8)))))))))));
                            arr_12 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_2 [i_0])) - (arr_3 [i_0]))), (arr_3 [i_2])))) ? (max((arr_3 [i_0 + 4]), (arr_3 [i_0 + 4]))) : (((((/* implicit */int) (short)28814)) - (((/* implicit */int) (short)-28817))))));
                            var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_15)), ((~(249972291035507829ULL)))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 7014083062590355229ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5236)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (short)-3559))))) : (((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_2] [i_3])) ? (arr_5 [i_2 - 2] [i_3] [i_3]) : (arr_5 [i_2 - 2] [i_3] [i_3])))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 4]);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4]))));
        var_22 = ((/* implicit */unsigned char) ((unsigned int) -2818513143943965171LL));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) arr_9 [i_4] [i_4] [i_4] [i_5]);
            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5] [i_5] [i_4]))) : (arr_8 [i_4] [i_4] [i_4] [i_4] [i_5]))))));
        }
        var_25 = ((/* implicit */int) var_8);
    }
    for (int i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((249972291035507829ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6 + 1]))) : (arr_1 [i_6 - 1])));
        arr_21 [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_7 [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (249972291035507831ULL)))));
    }
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_7] [i_8])) ? (((/* implicit */int) arr_25 [i_8])) : (((/* implicit */int) arr_25 [i_7]))));
            var_28 *= ((/* implicit */short) arr_23 [i_7] [i_8]);
            /* LoopSeq 1 */
            for (long long int i_9 = 3; i_9 < 24; i_9 += 3) 
            {
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_7] [i_8] [i_9])) & (((/* implicit */int) (short)27427))))) ? (((((/* implicit */_Bool) 249972291035507829ULL)) ? (-268435456) : (((/* implicit */int) (short)-11313)))) : (((/* implicit */int) ((short) (_Bool)1)))));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((_Bool) (short)28814)))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */int) (short)28816)) < (((/* implicit */int) (short)28800))));
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (unsigned short)46955)) : (((((/* implicit */_Bool) arr_28 [i_7] [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [i_7]))))));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_29 [i_9 - 3] [i_9 - 3] [i_11])) <= (((/* implicit */int) arr_29 [i_9 - 1] [i_9 + 1] [i_11]))));
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_8] [i_11])) || ((!(((/* implicit */_Bool) arr_31 [i_7] [i_7] [i_9] [i_9] [i_8] [i_9])))))))));
                    }
                }
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                    arr_40 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */int) arr_22 [i_12])) : (((/* implicit */int) arr_22 [i_7]))));
                    var_35 = ((((/* implicit */_Bool) arr_35 [i_9 - 2] [i_9 - 3] [i_9 + 1])) ? (((/* implicit */int) arr_35 [i_9 - 2] [i_9 - 3] [i_9 + 1])) : (((/* implicit */int) arr_35 [i_9 - 2] [i_9 - 3] [i_9 + 1])));
                }
                for (short i_13 = 3; i_13 < 24; i_13 += 1) 
                {
                    var_36 = ((/* implicit */short) ((((/* implicit */int) arr_22 [i_7])) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9586)) && (((/* implicit */_Bool) (short)26006)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        var_37 = ((/* implicit */short) (((-(((/* implicit */int) arr_34 [i_7] [i_8] [i_9] [i_7] [i_14])))) & (((/* implicit */int) var_12))));
                        var_38 = ((/* implicit */int) (short)2);
                        var_39 = ((/* implicit */int) ((arr_30 [i_7] [i_9 - 1] [i_9] [i_13 - 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_7] [i_9] [i_8] [i_7])))));
                    }
                    for (short i_15 = 2; i_15 < 23; i_15 += 4) 
                    {
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28827)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (short)32579)))));
                        var_41 = ((/* implicit */short) (+(((/* implicit */int) arr_43 [i_15 - 1] [i_15] [i_15] [i_15] [i_15] [i_15]))));
                    }
                }
            }
        }
        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7])) ? (arr_47 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */int) arr_43 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */int) (unsigned short)46625)) & (((/* implicit */int) (unsigned short)55949))))))))));
    }
}
