/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36733
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_3 [i_0])))) ? ((+(-1015702961))) : (((/* implicit */int) var_12))));
                    var_14 &= ((/* implicit */signed char) (unsigned short)55408);
                    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) (~(var_2)))) ? (((10458281970529777669ULL) >> (((((/* implicit */int) (signed char)-104)) + (148))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (18446744073709551615ULL))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 21)) ? (2800134815U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))));
        var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) 1494832480U))))), (min((((/* implicit */unsigned long long int) 2147483647)), (15346328511591973519ULL)))))) ? (max((5861327764822148233LL), (((/* implicit */long long int) arr_3 [i_0])))) : (((/* implicit */long long int) ((arr_3 [i_0]) / (arr_3 [i_0]))))));
        arr_9 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (signed char)-117))));
        var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [i_3])) ? (-1280291175) : (((/* implicit */int) arr_4 [i_3]))))));
        var_19 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) 2573429798U)) ? (((/* implicit */unsigned long long int) arr_3 [i_3])) : (arr_0 [i_3] [(unsigned short)18]))), (((/* implicit */unsigned long long int) (~(1494832480U)))))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), (var_7))))));
    }
    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */signed char) 4160412687U);
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50393))) : (3100415562117578101ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_15 [i_4])))))))) ? ((-(((/* implicit */int) (signed char)-64)))) : ((~((((_Bool)1) ? (arr_13 [i_4]) : (((/* implicit */int) (unsigned short)7637))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_5))))))));
}
