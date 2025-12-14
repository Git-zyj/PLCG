/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36102
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
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1115253982576929414LL))));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((var_7) >> (((3794850336U) - (3794850310U))))))) ? (((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (var_7))) : (((((/* implicit */_Bool) 1626611575)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))) : (500116954U)))));
    var_19 = var_12;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            var_20 = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1]))));
            var_22 |= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0] [6U])) <= (((/* implicit */int) (short)-14710)))))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 9; i_2 += 1) 
        {
            var_23 += ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_5 [(short)1] [i_2] [i_2])) ? (((/* implicit */int) arr_6 [(short)10])) : (((/* implicit */int) arr_0 [i_2] [i_2 + 3])))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((short) (unsigned short)49622))) > (((/* implicit */int) ((signed char) (short)(-32767 - 1))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_10 [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0 - 2]), (arr_1 [i_0] [i_3])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)20209)) : (var_12)))) : (((unsigned int) arr_7 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3548455953U)) ? (9945589200084256001ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10449)))))) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))) : (((/* implicit */long long int) ((int) arr_3 [6LL] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_3])))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [(short)3] [(short)3] [i_3])) >= (((/* implicit */int) arr_0 [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_0] [i_0] [6])) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_2 [i_0] [i_3] [5LL])))))) : (max((((/* implicit */unsigned long long int) arr_8 [i_3])), (var_5)))))));
            arr_11 [i_0] [6LL] [10U] |= ((/* implicit */signed char) var_9);
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) var_12);
        }
        var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0])))))))));
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) (+(arr_3 [i_0] [i_0 + 1])));
        arr_14 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) arr_6 [i_0]))), (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        var_27 = ((/* implicit */short) arr_17 [i_4]);
        arr_18 [i_4] [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_4])) <= (((/* implicit */int) arr_17 [i_4]))))) >> (((((/* implicit */int) arr_16 [i_4] [i_4])) + (131)))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) (~(arr_23 [5ULL] [5ULL] [12ULL] [i_4])));
                    arr_25 [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_4] [i_6] [i_6]))));
                    arr_26 [i_4] [i_6] = arr_21 [i_4] [i_5] [i_6];
                    arr_27 [i_6] [i_6] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_4])) ? (arr_20 [i_4]) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) arr_24 [i_4] [i_4] [4LL])) <= (((/* implicit */int) arr_19 [i_4]))))) : ((~(((/* implicit */int) (signed char)3))))));
                    arr_28 [i_4] [5LL] [i_6] = ((/* implicit */int) ((unsigned int) 2787950352U));
                }
            } 
        } 
    }
}
