/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232799
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
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */signed char) (-(var_10)));
    var_20 |= ((/* implicit */signed char) ((var_7) % ((~(14875371195365062340ULL)))));
    var_21 = ((/* implicit */unsigned long long int) (signed char)-7);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (signed char)85)))), (((/* implicit */int) (signed char)81))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_6 [i_0] [i_0 - 1] [i_0 + 2])))) ? ((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_0 [i_1]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-69)))))));
            var_23 = ((/* implicit */signed char) (-(984701684U)));
        }
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
        {
            arr_10 [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_0 [i_0 - 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 2] [i_0 + 3])))))) > (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 178176582U)) ? (((/* implicit */int) (unsigned short)14471)) : (((/* implicit */int) arr_4 [i_0 - 1]))))))));
            var_24 -= ((/* implicit */unsigned char) -2712847529415472244LL);
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_3] [i_4])) != (((/* implicit */int) (signed char)-3))));
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((((/* implicit */int) var_11)) << (((4997893218429907847LL) - (4997893218429907824LL))))) : (((((/* implicit */int) (unsigned short)59987)) | (((/* implicit */int) (unsigned short)5548))))));
            }
            for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-(((/* implicit */int) arr_18 [i_0 - 1] [i_3] [i_5] [i_0])))))));
                arr_20 [i_0] [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) 984701704U);
            }
            var_27 = ((/* implicit */signed char) ((arr_1 [i_0] [(signed char)3]) & (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            arr_24 [i_0] [i_6] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_7)) ? (arr_22 [i_0 - 1]) : (arr_22 [i_0 + 4])))));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)52219)) ? (var_9) : (1117548600705349268LL)))))) ? (((((/* implicit */_Bool) ((unsigned int) 17351936763939020929ULL))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2336843866U)) > (631512323734718935ULL))))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-17)))));
            var_29 -= ((/* implicit */long long int) (signed char)-107);
            var_30 = ((/* implicit */unsigned char) (-(3310265626U)));
        }
    }
}
