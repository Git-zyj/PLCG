/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199922
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
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2467819835561236030ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 438676512U))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_11 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3856290812U)) ? (arr_6 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 2]))) : (max((12547516017878103137ULL), (((/* implicit */unsigned long long int) (unsigned short)46380))))))) ? ((~(((((/* implicit */_Bool) 8588413530644299799ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (8588413530644299799ULL)));
                        var_12 = ((/* implicit */unsigned int) (+(((((((/* implicit */unsigned long long int) var_2)) * (arr_4 [i_3] [i_2] [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [14ULL]))) > (var_3)))))))));
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(8588413530644299778ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((unsigned long long int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((max((((/* implicit */unsigned int) (short)-28081)), (438676512U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29629))) != (var_2))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 1313314706U))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) >= (var_9))))) < (((unsigned int) (unsigned char)220)))))));
}
