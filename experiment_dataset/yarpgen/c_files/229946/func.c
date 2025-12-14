/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229946
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) ((((unsigned long long int) arr_1 [i_0 + 3])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) (signed char)121)), ((unsigned char)8))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) | (max((((/* implicit */int) arr_8 [i_0] [i_2] [i_0 + 2] [i_0 + 2])), ((+(((/* implicit */int) var_4))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_0 + 3] [i_0 - 2] [i_0] = ((/* implicit */unsigned short) max((-2066364489554367043LL), (((/* implicit */long long int) ((short) arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] [i_0])))));
                                var_14 = ((/* implicit */long long int) (((_Bool)1) || ((!(((/* implicit */_Bool) (~(var_2))))))));
                                var_15 = min((((/* implicit */unsigned long long int) arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0])), (var_0));
                                var_16 = ((/* implicit */signed char) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (15741797479002456587ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_2) : (((/* implicit */int) var_5))))));
                                var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)37071))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_18 = ((/* implicit */short) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1970061124)))));
    var_19 -= ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned char)222))))));
    var_20 = ((/* implicit */unsigned int) var_3);
}
