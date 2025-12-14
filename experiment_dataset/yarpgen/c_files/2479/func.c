/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2479
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) ((short) ((((14ULL) < (5495921864184380789ULL))) ? (((/* implicit */int) (unsigned short)2786)) : (((/* implicit */int) var_13)))));
        /* LoopSeq 4 */
        for (short i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                var_16 = ((/* implicit */_Bool) ((max((5495921864184380788ULL), (((/* implicit */unsigned long long int) var_13)))) - (min((arr_4 [i_0 + 2]), (arr_4 [i_0 + 1])))));
                var_17 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)244)), (var_4)))), (((unsigned long long int) 1328481184U)))) >= (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))) & (((((/* implicit */_Bool) 12950822209525170826ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6772))) : (var_9)))))));
                var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) ((_Bool) arr_4 [i_2])))))), (((((/* implicit */_Bool) 12950822209525170838ULL)) ? (((/* implicit */unsigned long long int) arr_2 [i_0 + 2])) : (arr_4 [i_0 + 1])))));
                var_19 = ((/* implicit */_Bool) ((unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_1])) ? (12950822209525170828ULL) : (arr_4 [i_0 - 1]))))));
            }
            /* vectorizable */
            for (short i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((4574976672515690096ULL) <= (((/* implicit */unsigned long long int) var_12)))))) - (5495921864184380788ULL)));
                            arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(var_1)))) > (var_9)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    var_21 -= ((/* implicit */_Bool) (short)-13443);
                    var_22 = ((/* implicit */unsigned short) ((unsigned long long int) (short)23930));
                }
                var_23 = (unsigned short)65535;
                arr_20 [i_0] [i_1] [i_3] = ((/* implicit */short) (~(((/* implicit */int) (short)4190))));
            }
            for (short i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-32)) ? (min((var_7), (((/* implicit */unsigned long long int) arr_19 [i_1] [i_7])))) : (((arr_5 [i_0]) ? (((/* implicit */unsigned long long int) var_3)) : (arr_4 [i_1 - 3]))))) > (((/* implicit */unsigned long long int) min((2303872232U), (((/* implicit */unsigned int) ((4574976672515690096ULL) <= (4574976672515690100ULL)))))))));
                arr_24 [i_0] [11] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned long long int) 2789432440U)), (((/* implicit */unsigned long long int) ((unsigned char) var_11)))))) ? (max((140737487306752ULL), (12950822209525170812ULL))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2699417002U)) ? (2230629303U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2047)))))), (((unsigned long long int) (short)-13457))))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                arr_27 [i_0] [(short)20] [10ULL] = ((/* implicit */int) 12950822209525170810ULL);
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) % (((/* implicit */int) (unsigned short)47075))))) ? (((unsigned long long int) arr_18 [i_0 + 2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_18 [i_0 + 2]), (arr_18 [i_0 + 1])))))));
                var_26 |= arr_14 [i_1] [i_0 + 1] [i_1 - 1];
            }
            /* vectorizable */
            for (unsigned int i_9 = 1; i_9 < 20; i_9 += 4) 
            {
                var_27 = ((/* implicit */short) ((((int) var_2)) > (((/* implicit */int) arr_23 [i_0 + 2] [i_1 - 1]))));
                arr_31 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((_Bool) (~(4294967295U))));
                var_28 = ((var_13) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_9 - 1])));
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_10 [i_9] [i_9 + 1] [i_0 + 1] [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    for (unsigned char i_11 = 1; i_11 < 18; i_11 += 1) 
                    {
                        {
                            arr_36 [i_11] [6U] [i_9] [i_1 - 2] [10ULL] [i_0] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_11 + 2] [i_11])) ? ((+(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38702)))));
                            var_30 = ((/* implicit */int) 12950822209525170828ULL);
                            var_31 = ((/* implicit */unsigned short) ((12950822209525170827ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) ^ (arr_29 [i_0] [i_11]))))));
                            var_32 ^= ((/* implicit */short) ((unsigned int) (_Bool)1));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                for (signed char i_13 = 1; i_13 < 19; i_13 += 1) 
                {
                    {
                        arr_42 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) 357845214U))) ? (2789432456U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48)))));
                        var_33 = ((/* implicit */short) (~(min(((~(((/* implicit */int) arr_21 [i_0] [i_12] [i_13])))), (((/* implicit */int) (short)32538))))));
                    }
                } 
            } 
        }
        for (unsigned int i_14 = 2; i_14 < 19; i_14 += 4) 
        {
            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_33 [i_14 + 2]) / (((/* implicit */int) (unsigned short)40240))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((36028797018963968ULL) - (((/* implicit */unsigned long long int) 0))))))) : (var_3)));
            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((((/* implicit */unsigned long long int) 462704489U)) != (max((5495921864184380793ULL), (((/* implicit */unsigned long long int) (short)6144)))))) || (((/* implicit */_Bool) 8191)))))));
        }
        /* vectorizable */
        for (signed char i_15 = 4; i_15 < 19; i_15 += 1) 
        {
            arr_49 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_38 [i_0] [i_0] [i_15])) : (var_5))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) 887541990U)) > (arr_26 [(short)16] [i_15] [i_15] [i_15]))))));
            arr_50 [i_0] = ((/* implicit */_Bool) (~((+(var_6)))));
        }
        /* vectorizable */
        for (unsigned short i_16 = 0; i_16 < 21; i_16 += 4) 
        {
            arr_53 [(unsigned short)14] = ((/* implicit */short) var_0);
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned char i_18 = 0; i_18 < 21; i_18 += 3) 
                {
                    for (short i_19 = 4; i_19 < 18; i_19 += 4) 
                    {
                        {
                            arr_61 [i_0 + 1] [i_16] [i_17] [i_17] [i_19] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 462704489U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4095))) : (1440716724996214444LL)))) ? (((((/* implicit */_Bool) 10762184818333703850ULL)) ? (((/* implicit */unsigned long long int) arr_30 [i_16] [i_16])) : (18446744073709551615ULL))) : ((+(arr_26 [i_16] [(unsigned short)7] [i_17] [i_18])))));
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) -1629290072)) || (((/* implicit */_Bool) arr_51 [i_19] [20U]))));
                        }
                    } 
                } 
            } 
            arr_62 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_0] [i_0 - 1] [(signed char)2])) ? (1995764654U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
        }
        var_37 = ((/* implicit */short) ((((arr_5 [i_0 - 1]) ? (((/* implicit */int) (short)960)) : (((/* implicit */int) ((signed char) 4574976672515690096ULL))))) != ((+(((((/* implicit */_Bool) 14)) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_38 = ((/* implicit */unsigned int) (signed char)-96);
    var_39 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) (((_Bool)1) ? (3832262806U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
}
