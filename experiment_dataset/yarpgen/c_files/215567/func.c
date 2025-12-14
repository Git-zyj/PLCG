/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215567
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
    var_20 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65355)) / (((/* implicit */int) max((arr_4 [i_1 - 2]), (arr_4 [i_1 - 2]))))));
                var_22 = ((/* implicit */unsigned long long int) ((arr_0 [i_1] [i_0]) % (arr_0 [i_0] [i_0])));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((var_23), (var_15)));
                                arr_15 [i_1] = ((/* implicit */int) (_Bool)1);
                                var_24 = ((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1]);
                                var_25 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (signed char)-1)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
    {
        arr_19 [i_5] = arr_6 [4U] [19LL];
        var_26 = (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_5))))));
        var_27 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (min((var_11), (((/* implicit */unsigned int) arr_16 [i_5] [i_5]))))));
        arr_20 [i_5] = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_6 [i_5 + 4] [i_5 + 3])) : (var_3))) - (((/* implicit */unsigned long long int) 2936335668U))));
        arr_21 [i_5] [i_5] = ((/* implicit */int) max((((/* implicit */long long int) ((arr_13 [i_5 + 2]) - (arr_13 [i_5 + 3])))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_5])) ? (arr_3 [2ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_5])))))), (max((((/* implicit */long long int) (unsigned char)63)), (var_15)))))));
    }
}
