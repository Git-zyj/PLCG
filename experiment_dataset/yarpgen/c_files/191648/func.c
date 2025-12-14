/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191648
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_2 + 3] [4LL] [i_1] = ((/* implicit */_Bool) ((((_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (unsigned short)18588)) ? (arr_3 [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_1] [i_2] [i_2 + 1])))))));
                        arr_11 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_9 [i_3 - 1] [i_1] [i_1] [i_1 + 2])), (max((var_10), (((/* implicit */short) (signed char)-90))))))) ? (((/* implicit */int) var_6)) : (max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)26))) < (arr_1 [i_3] [i_2])))), ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 4] [i_3]))))))));
                        var_11 &= ((/* implicit */unsigned short) (((((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)47)))))) + (2147483647))) << (((((arr_3 [i_0 + 1]) << (((arr_3 [i_0 + 1]) - (2345331546U))))) - (2931187712U)))));
                        arr_12 [i_1] [i_1 - 3] [i_2 + 3] [(unsigned short)4] [i_3] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) / (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0 - 1])))) / (((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0])) * (((/* implicit */int) arr_9 [i_0 - 2] [i_1] [(short)9] [i_3]))))));
                        arr_13 [i_3] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)6] [i_2] [i_3])) ? ((-(arr_1 [i_2] [i_2 + 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_6)))))))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((short) ((arr_3 [i_0 + 1]) | (arr_3 [i_0 - 2])))))));
    }
    var_13 = ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) 1766157171419085050LL)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_2))))))));
}
