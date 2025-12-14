/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31769
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_2 - 1]))));
                    arr_10 [i_0] [i_1] [3LL] [i_2] = (-(((/* implicit */int) arr_4 [16ULL] [i_1] [i_2 - 1])));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2 + 1] [i_3] [i_4 + 1] [i_0] [i_3] = ((/* implicit */signed char) arr_8 [i_3] [i_2 - 1] [(unsigned short)13] [i_0]);
                                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_2 - 1] [i_3] [i_4 + 1]))));
                                var_18 = ((/* implicit */_Bool) arr_8 [i_4] [(short)11] [i_4 + 1] [i_4 - 1]);
                                arr_20 [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [(signed char)3] [i_3 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_3] [i_3 - 1] [i_2 - 1])) : (((/* implicit */int) (signed char)-46))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) 319520971);
        /* LoopSeq 2 */
        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            var_20 -= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_16 [i_0] [i_5] [i_5 + 1] [18ULL] [i_5 + 2])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [(unsigned short)19] [i_5 + 1]))));
            arr_24 [i_5] [i_5] [0ULL] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) / (arr_2 [i_0] [i_0] [(unsigned char)9])));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                var_21 &= ((((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [i_5] [i_6])) <= (16140645285501756440ULL));
                var_22 = ((/* implicit */signed char) (+(arr_14 [i_5])));
                arr_28 [i_0] [i_0] [i_6] [i_6] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_5 - 1] [i_5 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (arr_23 [i_5 - 1] [i_5 + 2])));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 18; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        {
                            arr_38 [i_7] [7U] [i_7] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_8 + 1] [2])) ? (((/* implicit */int) arr_1 [(short)16])) : ((+(-1033365804)))));
                            var_23 = ((/* implicit */unsigned short) (unsigned char)89);
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(arr_29 [i_0] [i_8 - 1]))))));
                            var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) arr_31 [i_0] [i_7] [i_8 + 1] [i_9]))));
                        }
                    } 
                } 
                arr_39 [i_0] [i_5] [(short)7] [(unsigned char)11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [(unsigned char)7] [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))) : (arr_22 [(_Bool)1])));
            }
        }
        for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            var_26 = ((/* implicit */short) (+(arr_14 [i_10])));
            var_27 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [8LL] [14LL] [i_10] [(unsigned char)19])))))));
            arr_43 [i_0] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5234513540062603128LL)) && (((/* implicit */_Bool) arr_18 [17U] [9ULL] [i_10] [i_10] [i_10]))));
            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0]))));
        }
        arr_44 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)123))));
    }
    /* LoopNest 3 */
    for (unsigned int i_11 = 2; i_11 < 23; i_11 += 4) 
    {
        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
        {
            for (short i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 2; i_15 < 22; i_15 += 4) 
                        {
                            {
                                arr_57 [i_12] [i_14] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_56 [(short)0] [i_12] [19U] [i_12])) ? (-1LL) : (((/* implicit */long long int) -2147483633)))) * (((/* implicit */long long int) min((8U), (3115419394U)))))) / (((/* implicit */long long int) ((max((3510443724U), (((/* implicit */unsigned int) (unsigned char)143)))) * ((+(1179547902U))))))));
                                var_29 = (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_15 + 2] [i_15 + 2] [i_15 - 1] [19U] [i_15 + 1]))) >= (3941722487662733190LL)))));
                                var_30 |= ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_46 [i_11 - 2] [i_11 - 2]))))));
                                var_31 = ((/* implicit */short) (-((+(((/* implicit */int) arr_53 [i_11 - 2] [i_11 - 1] [i_11 + 1] [i_11 - 1]))))));
                            }
                        } 
                    } 
                    arr_58 [i_12] = ((/* implicit */unsigned char) (signed char)107);
                    var_32 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_12] [12ULL] [i_11])) ? (arr_55 [i_12] [i_11] [i_11 + 1] [i_11 - 1]) : (((/* implicit */int) (_Bool)1))))))))) : ((+(((((/* implicit */_Bool) 2959264487U)) ? (1179547901U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max(((short)(-32767 - 1)), (((/* implicit */short) var_2)))))))));
    var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
}
