/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19632
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
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), ((~(((/* implicit */int) min((var_3), (((arr_2 [16LL] [i_0] [(_Bool)1]) == (((/* implicit */unsigned int) -956892937)))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_3 [(unsigned short)3]) < (((/* implicit */int) var_6)))) ? (((/* implicit */long long int) ((arr_0 [i_0]) ? (arr_3 [i_0]) : (((/* implicit */int) var_5))))) : (arr_6 [i_0 + 1] [i_4 - 1] [i_2 + 1])))) ? (((((var_11) % (((/* implicit */int) arr_1 [i_4])))) << (((((unsigned long long int) arr_9 [14])) - (15081171849954053564ULL))))) : (((/* implicit */int) var_17))));
                                arr_13 [13ULL] [13ULL] [17] [(_Bool)1] [i_4 + 2] [21U] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((arr_5 [i_2] [13U]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) -6378862362917410735LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64)) ? (((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) / (-3477745045072898084LL)))) : (-3477745045072898103LL)));
                                var_21 |= ((/* implicit */unsigned char) 463222252);
                            }
                        } 
                    } 
                } 
                arr_14 [5LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_2)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_11 [i_1] [(_Bool)1] [i_0] [i_0] [(_Bool)1])) ? (arr_9 [14]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [(_Bool)1] [(_Bool)1] [4U]))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) (signed char)9)) << (((((/* implicit */int) arr_1 [i_0])) - (140))))) : ((~(((/* implicit */int) arr_7 [i_0] [i_0] [0LL] [i_1])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((unsigned long long int) (+(((((/* implicit */_Bool) var_15)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_7 [5ULL] [(signed char)23] [22U] [(signed char)15]))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    var_24 = ((/* implicit */int) arr_22 [8LL] [i_5] [i_5] [i_5]);
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        arr_25 [i_5] [i_6] [i_7] [i_7] [4LL] = ((((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_5]))))));
                        var_25 = var_12;
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (+(arr_10 [i_5] [i_8]))))));
                            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9U))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            arr_32 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) * (((((/* implicit */long long int) arr_18 [i_7] [i_5])) & (arr_9 [(signed char)14])))));
                            var_28 -= ((/* implicit */signed char) ((((long long int) arr_27 [i_7] [i_10] [i_11] [i_10] [i_11])) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6] [i_6]))) >= (3477745045072898103LL)))))));
                        }
                        var_29 = ((/* implicit */unsigned int) var_9);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) arr_10 [i_5] [i_7]);
                            arr_37 [14ULL] [i_5] [14ULL] [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) -3477745045072898103LL);
                        }
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) arr_24 [i_5] [i_6] [i_12] [(_Bool)1]))));
                    }
                    arr_38 [(signed char)5] [i_6] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                    arr_39 [9LL] [5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) != (var_1)))) << (((((arr_23 [i_5]) / (((/* implicit */int) arr_11 [i_5] [i_5] [i_7] [i_7] [i_5])))) - (328537)))));
                }
            } 
        } 
    }
}
