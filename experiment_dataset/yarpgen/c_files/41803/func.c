/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41803
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
    var_13 = ((/* implicit */long long int) min((var_9), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_11)))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (short)16383)) | (-564949087)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((unsigned long long int) arr_0 [(_Bool)1])))));
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)15))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295LL)))))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) (((!(((((/* implicit */int) (unsigned short)55761)) > (((/* implicit */int) (unsigned char)28)))))) ? (((/* implicit */int) min(((short)7), (((/* implicit */short) arr_8 [i_1 - 1] [i_1 - 1] [i_1]))))) : (((/* implicit */int) arr_2 [i_2] [i_2]))));
                    /* LoopSeq 1 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_19 = 1423101855U;
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) (((~(max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), (arr_7 [i_4] [i_1] [i_1] [i_1]))))) <= (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)-8)))))))));
                            var_21 = ((/* implicit */unsigned short) (-(1205886036U)));
                            var_22 = ((/* implicit */_Bool) (~((+(((/* implicit */int) ((((/* implicit */_Bool) 2215533246U)) || (((/* implicit */_Bool) var_2)))))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) max((max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-1)))), ((unsigned short)9709)))) * ((+(((/* implicit */int) ((short) 4885469502983027868LL)))))));
                        }
                    }
                    arr_13 [i_1] [i_3] [i_1 - 1] [i_1] = ((/* implicit */short) -1);
                    var_24 = var_7;
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) (short)22891);
        var_26 = ((/* implicit */long long int) 3206089571U);
    }
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        for (int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            {
                var_27 &= ((/* implicit */unsigned int) (~((-(((/* implicit */int) (_Bool)1))))));
                arr_21 [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)7))))) ? (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) (short)-29452)))) : (((/* implicit */int) (unsigned short)6624))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_28 = ((unsigned int) (+(var_1)));
        /* LoopSeq 3 */
        for (unsigned int i_9 = 3; i_9 < 18; i_9 += 4) 
        {
            arr_27 [i_8] = ((/* implicit */short) var_0);
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                var_29 = ((/* implicit */int) ((unsigned int) (_Bool)1));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
                {
                    for (unsigned int i_12 = 1; i_12 < 18; i_12 += 1) 
                    {
                        {
                            arr_39 [i_8] [i_9 - 3] [i_8] [i_9 - 3] [i_8] = ((((/* implicit */_Bool) arr_6 [i_8 - 1] [14] [i_9 - 3])) ? (-881368180) : (((/* implicit */int) (_Bool)1)));
                            var_30 ^= ((/* implicit */int) var_12);
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) var_5))));
            }
            arr_40 [i_8] [i_8] [3U] = var_12;
        }
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_8 - 1] [i_8])) ? (((/* implicit */int) (short)-31)) : (((((/* implicit */int) (short)-475)) * (((/* implicit */int) (unsigned char)89))))));
            var_33 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1865))) : (274877906943ULL)));
        }
        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) -5688363664251111417LL))));
            var_35 = ((/* implicit */unsigned short) var_1);
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [(signed char)8]))) + (3206089571U))))));
        }
        arr_47 [i_8] = ((/* implicit */int) ((((var_5) != (((/* implicit */long long int) ((/* implicit */int) var_11))))) ? (arr_24 [i_8 - 1] [i_8 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130)))));
        var_37 = ((/* implicit */int) ((((var_1) < (((/* implicit */int) (unsigned char)202)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8 - 1] [i_8 - 1] [i_8 - 1]))) : (((107775657U) / (arr_10 [16] [i_8])))));
    }
}
