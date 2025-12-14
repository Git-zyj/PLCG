/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239965
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
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-93)) == (((/* implicit */int) (signed char)-98)))))) * (((arr_8 [(short)2] [i_0]) & (((/* implicit */unsigned long long int) 6540123568647244710LL)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)96)), ((unsigned short)13466))))));
                            var_17 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3707225023U))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 23; i_4 += 3) 
                {
                    for (short i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        {
                            arr_16 [i_1] [i_5] = ((/* implicit */signed char) arr_7 [i_4 - 1] [i_0 + 2] [i_4] [i_5 + 1]);
                            /* LoopSeq 3 */
                            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                            {
                                var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-27)))))));
                                var_19 = ((/* implicit */int) (-(((((/* implicit */_Bool) (signed char)96)) ? (arr_0 [i_1]) : (arr_0 [i_0 - 1])))));
                            }
                            for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((3932298635293978307LL) < (((/* implicit */long long int) 1136907980U)))))) * ((~(4323469957524986156LL))))) % (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) 655084635)) <= (2914452614U))))) & ((+(3707225023U))))))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((((/* implicit */int) (unsigned char)0)) + ((+(((/* implicit */int) arr_3 [i_0] [i_7])))))), (min((((/* implicit */int) (signed char)-89)), ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_19 [(_Bool)1] [i_7] [i_4 + 1] [i_0 + 2] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) 6540123568647244707LL)) ? (2107777089U) : (1103549064U))) : (3864842423U))), (max((25891158U), (2914452614U))))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                            {
                                arr_25 [i_0] [(short)12] [i_8] [i_8] [i_5] = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_5] [i_8]);
                                arr_26 [i_5] [i_5] = ((/* implicit */unsigned char) 4269076137U);
                                var_23 |= 3443807640U;
                            }
                            var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)49319)) << (((((((/* implicit */int) (short)-29927)) + (29955))) - (13)))))), (851159652U))) : (1479393485U)));
                            arr_27 [i_5] [i_4] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((4218700191651662833LL) % (((/* implicit */long long int) var_10)))), (min((arr_6 [0LL] [i_4] [i_5]), (((/* implicit */long long int) var_8))))))) ? (((/* implicit */unsigned int) (~(arr_24 [i_0 + 3] [i_4 - 1] [i_5 - 1])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_5])) ? ((-(1136907979U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4 + 1] [i_1] [i_1])))))));
                            var_25 = ((/* implicit */long long int) max(((-((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */long long int) 6144U)) < (arr_22 [i_0 - 1] [i_1] [i_5] [i_5] [15U] [i_5 + 1] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)15228)) ? (((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) (unsigned short)23223))))));
        arr_30 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3215480450U)) ? (1079486845U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77)))));
        /* LoopNest 2 */
        for (long long int i_10 = 3; i_10 < 18; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_27 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [(signed char)24] [i_10] [i_11] [i_11])) >= (18240382128925606423ULL)))) ^ (((/* implicit */int) (_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 19; i_13 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-10)))))));
                                var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_9])) ? (6166U) : (arr_1 [i_9])));
                                var_30 -= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_9] [i_9] [i_13])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) arr_24 [(signed char)2] [i_9] [i_9]);
    }
    var_32 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19250))) : (4213387860U))), (((/* implicit */unsigned int) (unsigned short)27332))))) : ((+(min((206361944783945179ULL), (((/* implicit */unsigned long long int) 3702537064U)))))));
}
