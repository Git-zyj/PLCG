/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228946
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
    var_13 = ((/* implicit */short) max((((((((/* implicit */_Bool) (unsigned short)11742)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28784))) : (17822733353690181003ULL))) << (((/* implicit */int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (var_2)))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) min((((/* implicit */short) var_4)), (var_11)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (~(min((((arr_1 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11)))))))));
        var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), ((-(17822733353690181003ULL)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_15 |= ((/* implicit */short) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_8 [i_0] [i_0] [i_1])))));
            var_16 = ((/* implicit */unsigned int) ((11678643571654890914ULL) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
            var_17 = ((/* implicit */unsigned short) arr_6 [i_1] [i_1] [i_0]);
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49209))) / (873933693661712919ULL)))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (10866396260263083968ULL)));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+((~(((/* implicit */int) var_8)))))))));
                var_20 -= ((/* implicit */unsigned short) ((int) (~(arr_10 [i_0]))));
            }
            for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 3) 
            {
                arr_14 [i_0 - 1] [i_3] = ((/* implicit */unsigned char) 12708949284821632302ULL);
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    arr_17 [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) arr_11 [i_3] [i_0 - 1] [i_0] [i_0]);
                    var_21 |= ((/* implicit */unsigned char) (-((~(3087370154U)))));
                }
            }
        }
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
        {
            arr_20 [i_0 + 2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0 + 1] [i_5])), (arr_8 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0])), (var_5))))))));
            arr_21 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */_Bool) (unsigned short)54625)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 14953275401901077766ULL))))))));
            var_22 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_6 [i_0] [i_0] [i_0])))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
        {
            arr_24 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) var_6);
            var_23 = (~(14953275401901077766ULL));
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0 + 2] [i_0 - 1])) ? (arr_18 [i_0 + 1] [i_0 + 2] [i_0 + 2]) : (arr_18 [i_0 - 2] [i_0 - 1] [i_0 + 2])))))));
        }
    }
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        arr_29 [i_7] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / ((+(15018861347090202337ULL)))))) ? (arr_23 [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_7]))) : (arr_13 [i_7]))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                {
                    var_25 = ((/* implicit */int) max((max((min((arr_28 [i_7]), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_27 [i_7] [i_7]))))))), ((+(((3177089520420705150ULL) * (14013882112275461553ULL)))))));
                    arr_36 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) (+((+(var_6))))));
                    var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) arr_2 [i_7]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7] [i_7] [i_9] [i_7])))))) : (0ULL)))) ? (((/* implicit */int) ((unsigned char) ((unsigned short) arr_19 [i_7] [i_8] [i_9])))) : (((/* implicit */int) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-30))))))))));
                    arr_37 [i_8] [i_8] = ((/* implicit */long long int) (-(var_2)));
                    arr_38 [i_9] [i_8] [i_7] = ((/* implicit */unsigned int) arr_23 [i_7] [i_7] [i_7]);
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12717)))) & (((/* implicit */int) min((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63065))), (((/* implicit */unsigned short) (short)12716)))))));
    }
}
