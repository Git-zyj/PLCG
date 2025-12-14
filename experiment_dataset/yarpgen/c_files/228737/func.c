/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228737
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_0)) ? (8353826385762118118LL) : (((/* implicit */long long int) arr_5 [i_0] [2U] [i_0])))))))));
            var_14 = (+(var_8));
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0] [6]))) : (4517862770938278233ULL)));
        }
        for (short i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            var_16 = (((+(((/* implicit */int) var_3)))) * (((((/* implicit */int) arr_3 [i_2 - 1] [i_0])) * (((/* implicit */int) arr_3 [i_2 + 1] [i_0])))));
            arr_9 [i_0] = ((((/* implicit */_Bool) min((arr_4 [i_0 + 2] [i_0] [i_0]), (var_7)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0]))))));
            var_17 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_5)) ? (13928881302771273382ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                var_18 *= ((/* implicit */int) var_9);
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) (-(arr_10 [i_3 + 1] [i_0])));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_0] [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_0] [i_2 + 1])) : (((/* implicit */int) var_0))));
            }
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
            {
                arr_15 [i_0] [i_2 - 1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_11), (17592186044415LL))))));
                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(17592186044407LL))))));
                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(4517862770938278233ULL))))));
            }
        }
        arr_16 [i_0] = ((/* implicit */int) var_6);
    }
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(var_8)))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) min((arr_19 [i_5] [i_5]), (arr_19 [i_5] [i_5])))))))));
        var_23 -= ((/* implicit */unsigned int) min((((((/* implicit */int) arr_17 [i_5])) / (((/* implicit */int) arr_17 [i_5])))), (((/* implicit */int) max((arr_17 [i_5]), (arr_17 [i_5]))))));
    }
    for (int i_6 = 2; i_6 < 19; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            arr_27 [i_7] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65532)) / (((/* implicit */int) (signed char)-63))))) ? ((-(arr_21 [(short)18]))) : (((/* implicit */int) var_6))))));
            var_24 ^= ((/* implicit */signed char) ((max((((unsigned long long int) arr_20 [i_7])), (((((/* implicit */unsigned long long int) 17592186044410LL)) + (4517862770938278233ULL))))) == (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_26 [i_6 - 1] [i_7] [i_7])) : (arr_24 [i_6 - 2] [i_7]))))))));
        }
        arr_28 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_23 [i_6])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) (signed char)-23))), (((((/* implicit */_Bool) arr_21 [i_6])) ? (17592186044415LL) : (((/* implicit */long long int) arr_26 [i_6] [i_6] [i_6]))))))) : ((+(max((((/* implicit */unsigned long long int) -17592186044421LL)), (var_1)))))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (arr_22 [i_6 + 2] [i_6]) : (((/* implicit */unsigned long long int) var_11))))) ? (min((arr_22 [i_6 + 3] [i_6]), (13928881302771273382ULL))) : (arr_22 [i_6 + 2] [i_6])));
    }
}
