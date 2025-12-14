/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192644
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)45)) ? (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) ^ (var_13)))) : (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) var_10);
        var_16 = ((((_Bool) 3368970486U)) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (max((arr_1 [i_0]), (arr_1 [i_0]))));
        var_17 = ((/* implicit */signed char) (-(((long long int) ((8326487177657901264LL) ^ (((/* implicit */long long int) arr_1 [(signed char)21])))))));
    }
    for (unsigned short i_1 = 2; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned long long int) (((-(arr_4 [i_1] [i_1 - 1]))) >> (((((/* implicit */int) (unsigned char)90)) - (89)))));
            arr_7 [i_1] [i_2] = ((/* implicit */unsigned char) max((arr_4 [i_1 + 1] [i_1]), (((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned short)51690), (((/* implicit */unsigned short) (_Bool)1))))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
        {
            arr_11 [i_1 - 1] [i_1 - 1] = ((/* implicit */signed char) (-(arr_5 [i_1 + 1] [i_1 - 2] [i_1 - 2])));
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_3] [i_3])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1]))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1 + 1] [i_1])) + (((/* implicit */int) (_Bool)0)))))));
        }
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */int) (-(max((max((var_10), (0U))), (((/* implicit */unsigned int) ((arr_10 [i_1] [i_1 - 2] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [i_1]))))))));
            var_20 ^= ((/* implicit */int) ((arr_15 [i_1 + 1] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U))))))));
            var_21 = ((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) arr_2 [i_1] [i_4]))));
        }
        for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
        {
            var_22 -= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55556)) | (((/* implicit */int) min((((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_1])) || (((/* implicit */_Bool) (unsigned short)9980)))), ((!(((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_1])))))))));
            arr_18 [(_Bool)1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1] [i_5])) ? (arr_15 [i_1 - 2] [i_1 - 1]) : (arr_15 [i_1 + 1] [i_1 - 1])))) ? ((((+(arr_5 [i_1] [i_1] [i_1]))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7331230277264829870ULL)) ? (((/* implicit */long long int) -1927128075)) : (-3590124294295841345LL)))))) : ((-(((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16320))) : (arr_5 [i_1] [i_1] [i_1 - 1])))))));
            var_23 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)13845))))));
            var_24 = ((((arr_5 [16] [i_1 + 1] [i_1]) ^ (arr_5 [i_1 - 2] [i_1 - 1] [i_1]))) - (((/* implicit */unsigned long long int) arr_9 [i_1])));
        }
        arr_19 [i_1] = ((/* implicit */unsigned short) arr_14 [i_1]);
        arr_20 [i_1] [i_1] = ((/* implicit */_Bool) ((3590124294295841344LL) - (((/* implicit */long long int) ((/* implicit */int) min((arr_16 [i_1 + 1] [i_1 + 1]), (arr_16 [i_1 + 1] [i_1 + 1])))))));
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)0)))) ^ (((int) arr_9 [i_1 + 1])))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                {
                    var_26 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_1] [i_1 - 2] [i_1 - 2] [i_7])) << (((unsigned int) arr_6 [i_1 - 2] [i_1 + 1] [i_1 - 2]))));
                    arr_29 [i_1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_26 [i_1 - 2] [12U] [i_1 - 2] [i_7]), (((((/* implicit */_Bool) arr_13 [i_1] [i_6] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2835098863747136574ULL)))))) ? (((/* implicit */long long int) arr_4 [i_1] [i_1 + 1])) : (max((((3590124294295841368LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))), ((-(-8599691160342497658LL)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) 6752826686840467497ULL);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            var_28 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16320)) || (((/* implicit */_Bool) 4294967295U))));
                            var_29 = (((!(((/* implicit */_Bool) arr_9 [(unsigned char)4])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_9])) ? (((/* implicit */int) (short)7277)) : (((/* implicit */int) arr_31 [i_9] [i_7] [i_1]))))));
                        }
                        arr_34 [i_8] [i_7] [i_6] [i_1] = ((/* implicit */int) (-(-3590124294295841344LL)));
                    }
                }
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
}
