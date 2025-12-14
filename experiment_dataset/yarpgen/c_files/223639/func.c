/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223639
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2] = min((((/* implicit */int) var_4)), (min((((((/* implicit */int) (unsigned short)56927)) | (arr_0 [i_0]))), (((/* implicit */int) min(((unsigned short)56934), (((/* implicit */unsigned short) arr_2 [i_0]))))))));
                    var_10 -= ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)65535)))) > ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1]))))));
                }
            } 
        } 
    } 
    var_11 = var_1;
    /* LoopSeq 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [4ULL] |= ((/* implicit */int) (((!(((/* implicit */_Bool) -4652067224280049209LL)))) ? ((~(((long long int) arr_11 [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(574777650573064368ULL)))) || (((/* implicit */_Bool) ((unsigned long long int) var_1)))))))));
        var_12 = ((/* implicit */int) arr_11 [i_3]);
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        arr_15 [i_4] = ((/* implicit */long long int) ((unsigned short) (unsigned short)8610));
        arr_16 [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) ((_Bool) var_1))), (((arr_10 [i_4]) + (arr_11 [i_4])))));
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) || (((/* implicit */_Bool) ((int) -1LL)))));
        var_14 = ((/* implicit */unsigned short) ((int) (unsigned short)56936));
        var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 16804969261933753314ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45369))) + (var_5))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_18 [i_5])) < (((/* implicit */int) arr_18 [i_5])))))))), (((/* implicit */long long int) var_4))));
    }
}
