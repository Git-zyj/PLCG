/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50056
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
    var_16 *= var_6;
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) (+(var_1)));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = 7039735320219259423ULL;
            var_19 = ((((/* implicit */_Bool) var_8)) ? (arr_3 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))));
            arr_4 [i_0] [i_1] &= ((/* implicit */unsigned short) 7039735320219259423ULL);
            var_20 = ((var_12) >> (((11407008753490292195ULL) - (11407008753490292163ULL))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            arr_7 [i_2] [i_2 + 3] = (-(11407008753490292179ULL));
            arr_8 [i_2] = arr_6 [i_2] [i_2 + 4] [i_2 + 1];
        }
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_21 = (!(((/* implicit */_Bool) 7039735320219259432ULL)));
        arr_12 [i_3] [7LL] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_9 [i_3] [i_3])))), (((((/* implicit */int) (unsigned short)45817)) >> (((7039735320219259425ULL) - (7039735320219259414ULL)))))));
        arr_13 [i_3] = ((/* implicit */unsigned char) arr_6 [i_3] [i_3] [i_3]);
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
    {
        var_22 ^= ((/* implicit */int) var_12);
        arr_17 [i_4 + 1] [i_4 + 1] = ((unsigned long long int) ((((((/* implicit */_Bool) 1695118443)) ? (7039735320219259407ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) ^ (((unsigned long long int) (short)127))));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max(((~(arr_16 [i_5 + 1] [i_5 + 1]))), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_15 [i_5] [i_5]) : (((/* implicit */long long int) -1995991884)))))))))));
        var_24 = ((/* implicit */long long int) 7039735320219259425ULL);
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) 
            {
                {
                    arr_26 [8U] [i_6] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) -1995991884)) && (((/* implicit */_Bool) arr_19 [i_5])))))));
                    arr_27 [i_5] [i_6] [i_5] = (i_5 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_6] [i_6])), (var_3))))))) << (((max((((/* implicit */unsigned long long int) arr_21 [i_7 - 1] [i_5])), (((var_14) ? (arr_16 [i_6 - 1] [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [i_6 - 1] [i_7 - 1] [i_7]))))))) - (12748ULL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_15 [i_6] [i_6])), (var_3))))))) << (((((max((((/* implicit */unsigned long long int) arr_21 [i_7 - 1] [i_5])), (((var_14) ? (arr_16 [i_6 - 1] [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [i_6 - 1] [i_7 - 1] [i_7]))))))) - (12748ULL))) - (18446744073709549181ULL))))));
                    arr_28 [i_5] [i_5] [i_5] [i_5 + 1] = (((~(arr_16 [i_6 + 1] [i_5 + 1]))) & (((/* implicit */unsigned long long int) var_0)));
                    arr_29 [i_7 + 1] [i_5 + 1] [i_6 + 1] [i_5] = ((/* implicit */int) ((long long int) (unsigned short)1));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */short) ((((var_3) << ((((~(var_11))) - (473463793735114810LL))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_13) + (13804627125485512944ULL)))) ? (((3682219566717942680LL) << (((((-630184112) + (630184160))) - (48))))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)45817)), (var_2)))))))));
}
