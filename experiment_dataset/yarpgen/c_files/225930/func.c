/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225930
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) max((((/* implicit */int) arr_0 [i_0] [i_1])), ((~(((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (arr_4 [(short)10] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 172816072)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) : ((-(arr_4 [0LL] [i_0] [i_0])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 2) 
                {
                    var_13 &= ((/* implicit */int) (unsigned short)2488);
                    var_14 |= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)167))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) (+(1203883716U))))), (max((((/* implicit */long long int) max((arr_10 [i_3]), (arr_10 [i_3])))), (((long long int) 1203883713U))))));
        var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) max((3081443109U), (1203883716U))))) ? ((-(((/* implicit */int) arr_10 [i_3])))) : (((/* implicit */int) min((arr_10 [i_3]), (arr_10 [i_3]))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) (~(((-2059974523) & (((/* implicit */int) var_9))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((long long int) var_4)) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))))))));
    }
    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) var_4);
        var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(max((((/* implicit */unsigned int) var_7)), (3091083580U)))))), (((long long int) (~(var_1))))));
        var_20 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned char) arr_9 [i_5 - 1] [i_5 - 1])), ((unsigned char)192))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_5 + 1])))))));
    }
    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)0)) ? (3091083563U) : (var_11)))))), (max((((/* implicit */unsigned long long int) var_1)), (12943733406672676693ULL)))));
}
