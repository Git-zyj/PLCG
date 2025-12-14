/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27903
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 += ((/* implicit */unsigned long long int) min(((signed char)21), (((/* implicit */signed char) (_Bool)0))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)37106)))) << (((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-3358)))) - (208)))))) : (var_3)));
                    arr_7 [i_2] = (-(min((((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0]))), (max((10292549170517828394ULL), (((/* implicit */unsigned long long int) (short)3358)))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] |= var_12;
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */short) arr_1 [i_3]);
        /* LoopNest 2 */
        for (signed char i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-22))));
                    arr_20 [i_3] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)28430);
                    var_17 = ((/* implicit */unsigned short) arr_0 [i_4 - 2] [i_5]);
                }
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            var_18 = ((/* implicit */int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3358))) : (3701564336U)))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) ((unsigned long long int) (short)-3358));
                        arr_32 [i_6] [i_7] [i_8] [i_8] = ((/* implicit */_Bool) var_1);
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            var_20 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_33 [i_10 + 1] [i_7] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1])) ? (arr_28 [i_10 + 1] [(short)13] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10 + 1] [i_10 + 1] [(signed char)7] [14U] [i_10 + 1]))))) / (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_10 [(signed char)16] [(signed char)16]))))))))));
                            arr_35 [i_6] [i_6] [i_10] [i_9] [i_10] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)12)) | (((/* implicit */int) (short)8192))))) ? (((((/* implicit */_Bool) arr_10 [i_10 + 1] [i_10 + 1])) ? ((~(((/* implicit */int) arr_16 [12ULL] [12ULL] [i_9])))) : (((/* implicit */int) var_10)))) : (((((/* implicit */int) ((((/* implicit */int) (short)3347)) == (((/* implicit */int) (signed char)-4))))) + (((/* implicit */int) ((unsigned short) arr_1 [i_6])))))));
                            var_21 &= ((/* implicit */short) (-(((unsigned int) arr_14 [i_7] [i_10 + 1]))));
                            var_22 = ((/* implicit */unsigned long long int) arr_9 [i_7]);
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) arr_1 [i_6]);
        }
        arr_36 [(unsigned short)12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((arr_6 [i_6] [i_6] [(short)4] [i_6]) + (9223372036854775807LL))) << (((((arr_6 [i_6] [(unsigned char)12] [i_6] [i_6]) + (4001941960634945794LL))) - (56LL))))))));
        var_24 |= ((/* implicit */signed char) arr_27 [(_Bool)1] [i_6]);
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))) >= (((unsigned int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_13)))))));
}
