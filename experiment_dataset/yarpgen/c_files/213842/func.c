/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213842
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((long long int) arr_0 [i_0 + 1])) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned long long int) (unsigned short)65520);
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) min(((signed char)62), ((signed char)-74)));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) / (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (13679837554058530979ULL)))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_4] [i_3] [i_0]))));
                            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) 67108860)))));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */unsigned short) var_3);
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) var_13);
                    arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [i_2])) && (((/* implicit */_Bool) var_8)))))));
                }
                for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) var_10);
                    var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_10 [5ULL] [i_1] [i_2] [i_6] [i_6]), (arr_10 [i_0] [i_0] [i_0] [i_2] [i_0])))) >> ((((~(((/* implicit */int) (unsigned short)4)))) + (34)))))), (((var_6) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) (~(var_14))))))));
                }
            }
        }
        arr_21 [i_0] = ((/* implicit */long long int) var_13);
    }
    /* LoopNest 2 */
    for (long long int i_7 = 1; i_7 < 18; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            {
                arr_26 [i_7] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) var_15))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (0U))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (var_13)))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (short)21982))));
                    arr_30 [(unsigned short)19] [i_8] [i_9] = ((/* implicit */unsigned char) (((((~(-8217733068426505535LL))) <= (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))) ? (((long long int) (+(((/* implicit */int) arr_28 [i_7] [i_8] [i_7] [i_9]))))) : (var_14)));
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((short) max((max((var_8), (((/* implicit */long long int) (short)21978)))), (var_10)))))));
                }
                for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    arr_34 [i_7] [i_7 + 2] = ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (4294967295U));
                    arr_35 [i_7] [i_7] [i_8] [i_10] = ((/* implicit */unsigned long long int) arr_28 [i_7] [i_8] [i_10] [i_8]);
                    var_26 = ((/* implicit */_Bool) (unsigned short)0);
                    /* LoopSeq 1 */
                    for (short i_11 = 3; i_11 < 18; i_11 += 4) 
                    {
                        arr_38 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((_Bool) (!((_Bool)1))));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_23 [i_7 - 1])))) >> (((max((((/* implicit */unsigned int) var_12)), (4294967294U))) - (4294967289U))))))));
                        arr_39 [i_11] [10U] [10U] [i_11] = ((/* implicit */short) ((unsigned short) arr_23 [i_10]));
                    }
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_29 [0U] [i_7] [i_8] [i_10]) ? (var_14) : ((-9223372036854775807LL - 1LL))))) ? (((int) arr_29 [i_7] [i_7 - 1] [i_10] [i_7 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || ((_Bool)1))))));
                }
            }
        } 
    } 
    var_29 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_14))));
    var_30 = ((/* implicit */unsigned char) var_12);
}
