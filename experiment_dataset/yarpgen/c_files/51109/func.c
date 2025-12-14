/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51109
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((long long int) ((arr_4 [i_0]) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_1] [(unsigned char)2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) + (arr_8 [i_0] [i_1] [i_0]))) < (((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_5)))))) - (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_3 [i_0] [(unsigned char)12] [i_0]))))))));
                            arr_14 [i_0] [i_1] [7LL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((arr_11 [i_0] [i_1] [i_3] [i_3] [13LL]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174)))))))) ? (((/* implicit */unsigned long long int) ((((4294967283U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)12] [i_2]))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1] [i_2] [i_0])))))))) : (((((/* implicit */unsigned long long int) arr_12 [i_3 + 2] [i_3] [i_3 + 3] [i_3] [i_3 + 1])) * (arr_11 [11LL] [i_3] [i_3 + 2] [i_3 + 1] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((unsigned char) 178436697829971519LL));
    var_18 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_5)) ? ((-(14134839501193752589ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) / (((/* implicit */int) (unsigned char)174))))))));
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))), (var_8)));
}
