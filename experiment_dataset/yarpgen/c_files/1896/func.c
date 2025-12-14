/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1896
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */int) arr_0 [i_0] [i_1]);
            var_20 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1]))));
        }
        for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_3 = 4; i_3 < 16; i_3 += 4) 
            {
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 709974574))));
                var_22 = ((/* implicit */short) arr_6 [i_3 - 4] [i_2 - 3] [i_2 - 3] [i_2 - 3]);
            }
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((709974574) / (-709974579)))) ? (((unsigned long long int) (short)-32756)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))))));
            var_24 = ((/* implicit */unsigned int) arr_6 [i_2 + 1] [i_2 - 2] [i_2 - 3] [i_2 - 3]);
        }
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            var_25 |= (+(((/* implicit */int) (short)-1)));
            /* LoopSeq 1 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_26 += ((/* implicit */long long int) ((signed char) arr_9 [19U] [i_4] [i_5]));
                /* LoopSeq 3 */
                for (int i_6 = 3; i_6 < 16; i_6 += 3) 
                {
                    var_27 = ((/* implicit */unsigned long long int) arr_14 [i_6 - 1] [i_6 + 1] [i_5]);
                    var_28 &= ((/* implicit */short) arr_2 [i_5 - 1] [i_5 - 1]);
                }
                for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    var_29 = ((/* implicit */unsigned long long int) ((3699748741U) >= (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_5]))));
                    var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16256))))))));
                    var_31 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 709974578)) ? (506138721U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11)))));
                }
                for (long long int i_8 = 1; i_8 < 19; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) / (-5065652834724123010LL)));
                        var_33 = ((/* implicit */int) var_18);
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) 18446744073709551615ULL))));
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_5] [i_4])) <= (((/* implicit */int) var_6))));
                    }
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((unsigned long long int) arr_22 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1])))));
                }
            }
            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [i_4] [i_0] [i_4])) : (((/* implicit */int) arr_13 [i_4] [8U] [i_0] [i_0]))))) ? (((((/* implicit */int) arr_8 [(unsigned char)1] [i_0] [i_0])) & (var_0))) : (((((/* implicit */_Bool) arr_14 [i_4] [i_0] [i_4])) ? (((/* implicit */int) arr_14 [i_0] [i_4] [i_4])) : (((/* implicit */int) arr_8 [i_0] [i_4] [i_0]))))));
            /* LoopSeq 2 */
            for (int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                var_38 = ((int) arr_21 [i_0] [13ULL] [i_4] [i_10]);
                var_39 = ((/* implicit */signed char) ((int) (~(-709974604))));
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35))) > (arr_10 [i_10] [i_0])));
            }
            for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_11] [i_4] [i_0] [i_11])) ? (((/* implicit */int) (short)-18)) : (((/* implicit */int) arr_19 [i_11] [i_4] [i_11])))))));
                var_42 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_4] [i_4]))) - (((((/* implicit */_Bool) (short)7)) ? (3907464563U) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))))));
                var_43 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_16)) ^ (arr_21 [i_0] [i_0] [i_4] [i_11])));
                var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (5509135509714634563ULL)));
            }
        }
        var_45 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0]))));
    }
    for (short i_12 = 2; i_12 < 10; i_12 += 3) 
    {
        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) 709974578))));
        var_47 = ((/* implicit */short) max((arr_10 [i_12] [i_12]), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) | (arr_26 [i_12]))) ^ (var_8)))));
        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_26 [i_12])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7))))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 112438825)))))) : (((long long int) arr_3 [i_12 + 1])))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_24 [i_12 + 1] [(unsigned char)16] [i_12] [i_12])))))));
        var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) var_6))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) 
    {
        var_50 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_10 [i_13] [i_13])))))), (max((min((11125655386995722195ULL), (((/* implicit */unsigned long long int) (signed char)-45)))), (((/* implicit */unsigned long long int) (~(arr_17 [i_13] [i_13] [i_13] [i_13] [i_13]))))))));
        var_51 = ((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_13] [i_13] [i_13] [i_13]))));
        var_52 |= ((/* implicit */int) arr_24 [i_13] [i_13] [i_13] [i_13]);
    }
    for (int i_14 = 0; i_14 < 12; i_14 += 4) 
    {
        var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0)))))));
        var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -904971186)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96))) : (3768366994U)));
        var_55 = ((/* implicit */int) arr_21 [i_14] [i_14] [i_14] [i_14]);
        var_56 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_36 [i_14])), (arr_25 [i_14]))) >> (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 506138722U)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (short)-8446))))), ((+(arr_10 [i_14] [i_14]))))) - (3185035760689176132ULL)))));
    }
    var_57 = var_0;
    var_58 = ((/* implicit */int) var_8);
}
