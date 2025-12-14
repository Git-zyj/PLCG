/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20335
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) (unsigned short)64102);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            var_15 = ((/* implicit */_Bool) (unsigned char)218);
            arr_5 [(_Bool)0] [i_1 + 1] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) > (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 2] [i_1 + 1])) ? (var_5) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
            var_16 -= (+(((/* implicit */int) (((~(2871654080U))) > (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
        }
        for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])), (((((/* implicit */int) var_0)) + (((/* implicit */int) (_Bool)1))))))));
            var_18 = ((/* implicit */_Bool) var_5);
            arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) var_5)) : (((unsigned int) arr_0 [i_2] [i_0]))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_11 [(unsigned short)21] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_5)) : (arr_6 [i_3])))) ? (((/* implicit */unsigned long long int) 4001998497U)) : (var_9))) >> (((arr_1 [i_3]) - (1646891604U)))));
        arr_12 [5U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)25414)) ? (1031477324006111048LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)109)))));
        arr_13 [i_3] |= ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)197));
        var_19 = ((/* implicit */unsigned long long int) 262143);
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_3] [i_4] [i_3])))))));
            arr_16 [10ULL] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_3])) || (((/* implicit */_Bool) arr_6 [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3])) ? (arr_6 [i_3]) : (arr_6 [i_3]))))));
            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_3] [i_3] [i_3]) > (arr_7 [i_3] [i_3] [i_4]))))) > ((+(arr_7 [i_3] [i_3] [i_4])))));
            /* LoopNest 2 */
            for (signed char i_5 = 3; i_5 < 20; i_5 += 2) 
            {
                for (unsigned short i_6 = 2; i_6 < 20; i_6 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 3; i_7 < 21; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) (~(((arr_22 [i_5 + 2] [i_6] [i_6 + 2] [i_7 + 1] [i_6 + 2]) | (arr_22 [i_5 + 1] [i_6] [i_6 + 1] [i_7 - 3] [i_6 + 1])))));
                            arr_23 [3ULL] [i_4] [i_6] [i_6 + 1] [i_4] [i_6 - 2] [i_5 - 2] = ((/* implicit */unsigned short) arr_20 [2] [(signed char)0] [7ULL]);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            arr_26 [i_3] [i_6] = ((/* implicit */signed char) (_Bool)1);
                            arr_27 [i_3] [i_4] [(unsigned short)21] [i_5] [i_6 - 2] [i_8] [i_6] = ((/* implicit */unsigned char) ((var_3) > (((/* implicit */unsigned long long int) (~(((unsigned int) 3991679854U)))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_23 *= ((/* implicit */unsigned long long int) var_7);
                            var_24 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_30 [i_5 - 2] [i_5 + 1] [i_5 - 3] [i_6 - 1])) > (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6] [(unsigned char)9]))) | (var_9)))))) > ((+(((/* implicit */int) arr_14 [8U]))))));
                            arr_31 [i_6] [i_4] [i_4] [i_6 - 1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */_Bool) ((unsigned int) ((_Bool) min((((/* implicit */unsigned char) arr_3 [i_6])), (arr_4 [i_6] [i_9])))));
                        }
                        arr_32 [i_5] [i_6] = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))) > (arr_28 [i_5 - 3] [i_5 - 1] [i_5 + 2] [i_5 - 1])))), (arr_28 [i_3] [i_3] [i_3] [i_3]));
                        arr_33 [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_29 [14LL] [17LL] [i_6] [i_6 - 2] [(unsigned char)1] [i_5]) ? (((((/* implicit */_Bool) 9945985851879282796ULL)) ? (8308389867213688916ULL) : (arr_0 [i_3] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_18 [i_3]))))))))) ? (3073591833U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((9498285621429229067ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                    }
                } 
            } 
        }
    }
    var_26 = ((/* implicit */unsigned char) 18446744073709551615ULL);
    var_27 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (var_11) : (((unsigned long long int) var_3))))));
}
