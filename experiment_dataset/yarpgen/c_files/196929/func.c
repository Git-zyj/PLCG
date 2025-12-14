/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196929
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
    var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_16)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)32487)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))), (13124404622842691816ULL)));
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((((((/* implicit */int) arr_7 [i_0] [i_1] [i_3 + 3] [i_3 + 3])) | (((/* implicit */int) (signed char)74)))), (((/* implicit */int) (!(arr_7 [i_2] [i_2] [i_3 + 3] [i_3])))))))));
                    }
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) (+(((((_Bool) 1678384852)) ? (((/* implicit */unsigned long long int) (-(9223372036854775803LL)))) : (((((/* implicit */unsigned long long int) 2981789567U)) % (var_6)))))));
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 14441196493277742021ULL)) ? (((/* implicit */long long int) 148418076)) : (var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */unsigned int) 1462146137)) : (arr_5 [i_2] [i_0])))))) ? (((/* implicit */int) (unsigned short)32767)) : (((((13124404622842691816ULL) >= (((/* implicit */unsigned long long int) 3276455803152252560LL)))) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)5] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65535)))) | ((~(-1678384853)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_4)));
}
