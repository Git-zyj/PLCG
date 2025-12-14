/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225994
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) / (((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) : (var_8)))));
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_3), (((/* implicit */signed char) (!(var_10))))))) <= (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (unsigned short)58083))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_17 [i_2 + 3] [i_2] [i_4] = ((/* implicit */int) var_4);
                    arr_18 [i_2] [(unsigned short)13] [i_2 + 4] [i_2] = (signed char)-120;
                    arr_19 [i_2] [i_2] = ((/* implicit */int) 1073741823U);
                    arr_20 [10] [i_4] = ((/* implicit */int) ((min((1863043496417875937ULL), (((/* implicit */unsigned long long int) -1871501773146952053LL)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        arr_24 [16ULL] [16ULL] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */int) (unsigned short)0)) | (var_0))) : (((/* implicit */int) max((((/* implicit */short) var_16)), (var_5))))));
                        arr_25 [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_2] = (-((-(((/* implicit */int) var_10)))));
                        arr_26 [i_2] [(unsigned char)7] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (unsigned short)18);
                        arr_27 [i_2] [i_3] [i_2] [15] = ((/* implicit */unsigned char) -1108288338);
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_7);
}
