/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36571
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
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_0 [i_2])), (arr_4 [i_0 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) ? (max((3894873447U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))))));
                    var_15 += ((/* implicit */unsigned int) (_Bool)1);
                    arr_8 [i_2] [(signed char)3] [9LL] [9LL] = ((/* implicit */_Bool) 8U);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_3 = 2; i_3 < 10; i_3 += 2) /* same iter space */
        {
            var_16 &= ((/* implicit */unsigned int) ((arr_9 [(signed char)2]) % (((/* implicit */unsigned long long int) 3894873447U))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_14 [i_3 - 2] [i_0 + 1] [i_3]))));
                /* LoopSeq 1 */
                for (unsigned int i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    arr_18 [8U] [(signed char)6] [i_5] [(_Bool)1] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18362))) | (arr_9 [i_0])))));
                    var_18 += ((/* implicit */_Bool) (~(((/* implicit */int) (!(var_7))))));
                    arr_19 [i_4] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)18362)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 400093849U)) ? (((/* implicit */int) var_8)) : (var_1)))) : (arr_5 [i_3 - 2])));
                    var_19 -= ((400093865U) << ((((((_Bool)1) ? (3894873447U) : (((/* implicit */unsigned int) var_1)))) - (3894873442U))));
                }
            }
            arr_20 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_15 [i_3] [i_3] [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) > (((/* implicit */int) var_7)))))) ^ (arr_6 [i_3] [i_3 - 1] [i_3 + 1])))));
        }
        for (int i_6 = 2; i_6 < 10; i_6 += 2) /* same iter space */
        {
            arr_24 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_12))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) (unsigned short)65517))))) ? ((~(((/* implicit */int) var_13)))) : (arr_22 [i_0 + 1] [i_6 + 1] [i_6 - 2])))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 3; i_7 < 10; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            arr_31 [i_0 + 1] [i_0] [7LL] [11ULL] [i_0 + 1] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_28 [i_8] [i_8] [i_8] [i_8])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                            arr_32 [i_7] = ((unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (_Bool)0))));
                            arr_33 [i_9] [i_9] [i_8] [i_8] [i_7 - 1] [6ULL] [i_0 + 1] = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (arr_28 [i_0] [i_6] [i_8] [9U]))));
                            arr_34 [10U] [i_9] [10U] [i_8] [i_9] [i_6 + 2] [10] = arr_16 [i_9];
                        }
                        for (unsigned short i_10 = 1; i_10 < 9; i_10 += 4) 
                        {
                            var_20 = (!(((/* implicit */_Bool) ((((var_3) <= (6U))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (arr_13 [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned int) (+(arr_36 [i_0 + 1] [i_6 + 2] [i_7 - 1] [i_8] [i_10]))))))));
                            arr_37 [0ULL] [i_6 - 1] [(_Bool)1] [i_8] [i_10] [i_7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_7] [i_10 + 2]))) : (-943349357156658098LL))) : (((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */long long int) -67108864)) : (-943349357156658098LL)))))) >= ((+(max((((/* implicit */unsigned long long int) var_11)), (arr_25 [i_0] [i_0] [i_7])))))));
                        }
                        /* vectorizable */
                        for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) var_6);
                            arr_40 [i_0] [i_6] [i_11] [4ULL] [4ULL] [4ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_11] [i_6 + 2] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15837)) << (((((/* implicit */int) var_5)) - (82)))))) : (((unsigned long long int) arr_3 [i_8] [i_6 + 2]))));
                        }
                        arr_41 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_26 [3U] [i_8] [i_8])) : (((/* implicit */int) (!(((379348337U) < (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                    }
                } 
            } 
        }
    }
    var_22 &= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_6)))))))) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)23)))) : ((~(var_3)))))));
    var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967269U)))) ? (379348337U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) max(((+((+(((/* implicit */int) var_7)))))), ((+(((/* implicit */int) (unsigned short)18251)))))))));
}
