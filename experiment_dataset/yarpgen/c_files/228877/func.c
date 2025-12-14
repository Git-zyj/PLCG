/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228877
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
    var_18 = ((/* implicit */long long int) ((unsigned long long int) (unsigned short)948));
    var_19 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 += ((/* implicit */unsigned char) (_Bool)1);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((int) var_2)))));
            var_22 = ((/* implicit */unsigned int) (!((((+(arr_4 [i_1] [i_1] [i_1]))) != (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)60685)))))))));
            var_23 = ((/* implicit */unsigned short) var_12);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) (_Bool)1);
            var_25 &= ((/* implicit */unsigned int) ((_Bool) arr_8 [i_0]));
        }
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) var_12);
                    var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((5961787536388100236LL), (-6626459579938303882LL))))));
                    var_28 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) + (((/* implicit */int) (signed char)63))))), (((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_12 [i_4] [i_0]), (((/* implicit */unsigned long long int) var_14))))) ? (((((/* implicit */int) (signed char)-63)) ^ (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (signed char)0)))))))));
                    arr_15 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_12 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-87)) >= (((/* implicit */int) arr_5 [i_0] [i_4]))))) : (max((-1600048340), (((/* implicit */int) var_11))))))), ((-(arr_7 [i_0] [i_3])))));
                    var_29 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_4] [i_3] [i_4])) : (((/* implicit */int) (signed char)9))))) & (((10399130788443877648ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)636))))))) > (((/* implicit */unsigned long long int) arr_7 [i_3] [i_3]))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned short) var_5);
    }
    var_31 = ((/* implicit */_Bool) 4294967295U);
}
