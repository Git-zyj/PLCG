/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51797
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */unsigned char) max((-1580618127), (((/* implicit */int) (short)-11750))));
                    var_15 = ((((/* implicit */int) ((max((var_12), (((/* implicit */long long int) var_5)))) > (((/* implicit */long long int) ((1580618117) + (((/* implicit */int) arr_1 [i_1] [i_1])))))))) != (((/* implicit */int) ((max((1162891975620119562ULL), (((/* implicit */unsigned long long int) (unsigned char)102)))) != (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) * (arr_4 [i_0 + 2] [i_0 + 2] [i_2]))))))));
                    arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) <= ((-(((/* implicit */int) (short)11750))))))) * (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])) / (7012995298444650886ULL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 24; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (~(max((arr_10 [i_3 - 1]), (((/* implicit */unsigned int) (short)-16822))))));
                var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_4])) / (((/* implicit */int) arr_11 [i_4] [i_4] [i_3]))))) != (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-113))) / (var_7)))))), (((min((arr_12 [i_4]), (arr_12 [i_3]))) << (((((/* implicit */int) arr_11 [i_3 + 1] [i_4 + 1] [i_4])) - (44424)))))));
                arr_13 [i_3 - 1] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_8 [i_3] [i_4 + 1]), (arr_8 [i_3] [i_4 + 1])))) >= (min((-1), (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
