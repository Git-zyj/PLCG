/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215824
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
    var_12 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)-44)))) & (((/* implicit */int) ((((unsigned int) arr_1 [i_0])) <= (((((/* implicit */_Bool) -1862368024)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) arr_0 [i_0])))))))));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))) < (((/* implicit */int) var_9))));
        var_13 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) ((arr_0 [i_0]) >= (((/* implicit */int) var_1))))) : (((/* implicit */int) ((arr_0 [i_0 + 1]) < (arr_0 [10U]))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_7 [i_0 - 1] = ((/* implicit */unsigned long long int) max(((~((+(-1998049982973101778LL))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-78))))) << (((((/* implicit */int) arr_6 [i_0 + 1])) - (47))))))));
            var_14 = (signed char)34;
        }
    }
    for (unsigned int i_2 = 1; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) (+(max((arr_9 [4ULL] [i_2 + 1]), (arr_9 [(short)11] [i_2 + 1])))))))))));
        arr_11 [i_2 + 1] |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-55))))) ? (((unsigned int) ((var_2) >> (((((/* implicit */int) (signed char)113)) - (77)))))) : (((/* implicit */unsigned int) max((var_11), (((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2 - 1])))))));
        arr_12 [i_2] = max((((((/* implicit */_Bool) -1862368011)) ? (max((var_4), (((/* implicit */unsigned long long int) arr_0 [i_2 - 1])))) : (((/* implicit */unsigned long long int) arr_0 [i_2])))), (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) (signed char)118)), (1862368003)))))));
    }
    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((arr_8 [i_3]), (((/* implicit */int) var_9))))) >= (min((((/* implicit */unsigned long long int) arr_1 [i_3])), (17533634548935581035ULL)))))), (max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3] [i_3])) ? (((/* implicit */long long int) var_11)) : (arr_14 [i_3])))))))))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            arr_18 [i_4] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (11804340446700605560ULL))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3])) | (((/* implicit */int) var_0))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)8)), (var_8)))) : ((~(((/* implicit */int) arr_10 [i_3])))))) : (((((/* implicit */int) var_10)) & (arr_15 [i_3] [i_4])))));
            var_17 = -4911439436523843681LL;
        }
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((_Bool) var_6)))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_5 + 3])) ? (((/* implicit */int) arr_20 [i_5 - 1])) : (-10)));
        arr_22 [5] = ((/* implicit */_Bool) (-(arr_19 [i_5 + 2])));
        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_6))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19310)) ? (arr_21 [i_5 + 2]) : (((/* implicit */unsigned long long int) arr_19 [i_5 + 2]))));
    }
}
