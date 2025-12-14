/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22509
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
    var_17 = var_13;
    var_18 = ((/* implicit */long long int) (((+(var_12))) - (min((((/* implicit */unsigned int) (~(-1479222354)))), (var_12)))));
    var_19 = (+(((/* implicit */int) var_7)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((arr_1 [i_0]) != ((+(((/* implicit */int) var_10))))));
        var_21 = ((/* implicit */short) arr_1 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 11; i_3 += 3) 
            {
                {
                    arr_11 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_1]))));
                    arr_12 [i_3] [i_1] [i_1] [9] = ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_7 [i_3 - 2] [i_2] [i_1])));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_3] [i_2])) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_1]))) == (arr_9 [i_1] [4LL] [4LL] [i_1]))))));
                }
            } 
        } 
        arr_13 [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
        arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_2 [i_1] [i_1])))) == (((/* implicit */int) arr_2 [i_1] [i_1]))));
        arr_15 [i_1] = ((/* implicit */unsigned char) arr_3 [i_1]);
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
    {
        var_23 ^= ((/* implicit */signed char) (short)22738);
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
        {
            arr_22 [i_4] [i_5] [(short)8] = ((/* implicit */short) ((int) arr_5 [i_4] [i_4]));
            var_24 = arr_3 [i_4];
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (short)8551)) ? (590084701U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116)))))))));
            arr_23 [i_4] = ((((/* implicit */_Bool) ((short) (short)(-32767 - 1)))) ? ((-(((/* implicit */int) var_0)))) : ((~(arr_1 [i_4]))));
            arr_24 [i_4] [i_5] |= ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (signed char)0))));
        }
        for (long long int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
        {
            arr_27 [i_4] [i_4] = ((/* implicit */short) (((_Bool)1) ? (arr_16 [i_4]) : (((/* implicit */unsigned long long int) (~(var_12))))));
            var_26 = ((/* implicit */long long int) (-(arr_19 [i_4])));
        }
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            arr_31 [i_4] [i_7 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7 + 1])) || (((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7 + 1]))));
            /* LoopSeq 2 */
            for (unsigned int i_8 = 4; i_8 < 9; i_8 += 1) 
            {
                arr_34 [i_4] [(short)4] [i_4] = ((/* implicit */unsigned int) ((1484200119449064446LL) + (((/* implicit */long long int) ((/* implicit */int) (short)240)))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (int i_10 = 2; i_10 < 9; i_10 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_0))) >= (((/* implicit */int) arr_29 [i_4]))));
                            var_28 = ((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_8 + 3] [i_8] [i_7 + 1] [i_4]))));
                        }
                    } 
                } 
            }
            for (long long int i_11 = 3; i_11 < 10; i_11 += 2) 
            {
                var_29 = ((/* implicit */_Bool) ((short) arr_2 [i_4] [i_11 + 2]));
                arr_41 [i_4] [i_7] [i_4] = arr_3 [i_11];
                arr_42 [i_4] [i_4] [i_7 + 1] [i_4] = ((/* implicit */_Bool) ((int) (~(arr_26 [i_4] [i_7]))));
                var_30 = ((/* implicit */unsigned long long int) ((short) arr_25 [i_4] [i_4]));
            }
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                for (signed char i_13 = 2; i_13 < 10; i_13 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            arr_49 [i_4] [i_7] [i_12] [i_4] [i_7] = var_3;
                            var_31 = ((/* implicit */short) (-(((/* implicit */int) arr_21 [i_13 - 2] [i_13 + 2]))));
                        }
                        var_32 = ((((/* implicit */_Bool) (~(arr_47 [i_4] [i_7] [i_7] [i_12] [i_13])))) ? (((/* implicit */unsigned int) var_1)) : (arr_40 [i_4] [i_7] [i_4]));
                    }
                } 
            } 
            arr_50 [i_4] [i_4] [i_4] = (+(30720));
        }
        arr_51 [i_4] = ((/* implicit */_Bool) 144106391982833664LL);
    }
    for (int i_15 = 4; i_15 < 19; i_15 += 1) 
    {
        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_54 [i_15 - 4]) | (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)21833)), (var_3))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(var_1)))) || (((/* implicit */_Bool) arr_52 [i_15]))))) : (arr_1 [6])));
        /* LoopNest 3 */
        for (unsigned int i_16 = 3; i_16 < 20; i_16 += 4) 
        {
            for (long long int i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                for (unsigned int i_18 = 1; i_18 < 18; i_18 += 1) 
                {
                    {
                        var_34 = ((/* implicit */short) arr_55 [i_15] [i_15 + 1]);
                        arr_62 [i_16] [i_17] [i_16] [i_16] = ((/* implicit */_Bool) max((min((min((4294967295LL), (((/* implicit */long long int) (short)-241)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_16])) || ((_Bool)1)))))), (((/* implicit */long long int) var_11))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */signed char) (-((-(min((91481159410527260LL), (((/* implicit */long long int) arr_52 [i_15]))))))));
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)31))))) ? (((/* implicit */int) arr_57 [(short)18])) : (((/* implicit */int) arr_61 [i_15] [i_15] [(signed char)14]))));
    }
    var_37 = ((/* implicit */short) var_11);
}
