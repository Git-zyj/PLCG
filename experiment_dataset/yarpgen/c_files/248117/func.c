/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248117
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
    var_12 = ((/* implicit */int) max((var_6), (((/* implicit */long long int) var_8))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    var_13 -= ((/* implicit */unsigned int) arr_4 [i_2]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((((/* implicit */short) (unsigned char)115)), (max((arr_10 [i_2 + 1] [i_2 - 2] [20ULL] [(unsigned short)0] [(signed char)3]), (arr_10 [i_2 - 1] [i_2 - 3] [i_2 - 3] [i_2 - 1] [4ULL]))))))));
                                arr_13 [i_2] [1ULL] [i_1] [i_2] [(short)15] [i_4] = ((/* implicit */unsigned long long int) max((min((var_9), (((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])), (var_8)))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) 16375883836490744156ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-54))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 4; i_5 < 19; i_5 += 4) 
                    {
                        for (long long int i_6 = 3; i_6 < 21; i_6 += 1) 
                        {
                            {
                                arr_19 [i_2] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2 + 1] [i_1] [i_6]))) - ((~(arr_0 [i_0] [(_Bool)1])))));
                                var_15 *= ((/* implicit */short) arr_15 [i_0] [i_2] [9ULL] [i_6]);
                                var_16 = ((((/* implicit */_Bool) min(((signed char)89), (arr_17 [i_0] [i_1] [i_2] [i_2 + 1] [(_Bool)0] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [i_0]))))) | (min((var_10), (((/* implicit */unsigned int) arr_8 [i_2]))))))) : (15926658737252219728ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 2; i_7 < 16; i_7 += 4) 
    {
        for (short i_8 = 2; i_8 < 19; i_8 += 1) 
        {
            {
                var_17 ^= ((/* implicit */short) (~(((/* implicit */int) (signed char)1))));
                /* LoopNest 2 */
                for (signed char i_9 = 2; i_9 < 19; i_9 += 2) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1])) > (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_17 [i_7] [i_8] [i_8] [14ULL] [(signed char)2] [i_10])))))))) > (max((((((/* implicit */_Bool) arr_15 [i_7] [i_8] [i_9] [i_10])) ? (((/* implicit */int) arr_22 [i_7] [i_8] [i_9 - 2])) : (((/* implicit */int) var_8)))), (1862857228))))))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) (signed char)32)) <= (-493799381))))));
                            arr_29 [i_10] [i_8] [i_9] [i_10] = ((/* implicit */signed char) (((+(max((((/* implicit */long long int) arr_3 [i_8] [i_10])), (arr_21 [i_7] [i_9]))))) > (min((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_10]))) + (arr_21 [i_9] [i_10]))), (((/* implicit */long long int) max((var_1), ((_Bool)1))))))));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */int) arr_23 [17ULL] [i_7 - 1] [i_8]);
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((int) var_10)) != (((/* implicit */int) var_5))))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)99))))) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (unsigned char)91)))))))));
                var_22 -= ((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (short)17590))))) ? (((/* implicit */int) var_2)) : (var_9))));
}
