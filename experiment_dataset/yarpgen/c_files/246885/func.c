/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246885
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 = ((unsigned char) (~(((/* implicit */int) var_7))));
                    var_20 = ((/* implicit */short) (~((+(((((/* implicit */int) (unsigned char)41)) & (((/* implicit */int) (short)24057))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202))) / (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (349372319U)))))), (13184861446650557247ULL))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [12])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [9U] [(signed char)9]))))) ? (((((/* implicit */_Bool) var_2)) ? (16296918879916904341ULL) : (5261882627058994370ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-47)), (arr_6 [(signed char)6])))))))))));
        var_23 = ((/* implicit */int) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (12277489944272226465ULL))), (((/* implicit */unsigned long long int) (short)19998)))), (((/* implicit */unsigned long long int) (+(arr_5 [(short)6]))))));
    }
    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-65))));
}
