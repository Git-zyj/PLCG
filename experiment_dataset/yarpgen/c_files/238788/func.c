/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238788
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_7 [i_1] [i_1] &= ((/* implicit */short) (+(((/* implicit */int) var_3))));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (-(var_6))))));
                arr_8 [i_0] = ((/* implicit */short) var_14);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_12 [(unsigned short)6] |= ((/* implicit */long long int) (_Bool)1);
        var_16 = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned long long int) var_11)), (var_1))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1936746952944081483ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)50)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))) : (((var_2) ? (1516638409U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)26)))))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_2))))), (max((2123222682), (((/* implicit */int) var_11))))))) ? (max(((~(7400822616302738664ULL))), (((/* implicit */unsigned long long int) (unsigned char)184)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (16319746447397988821ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52)))));
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        for (short i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            {
                arr_18 [i_3] = ((/* implicit */_Bool) (unsigned char)230);
                arr_19 [i_3] = ((/* implicit */signed char) min((((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)26))))), (((/* implicit */unsigned long long int) (~((-(var_6))))))));
                arr_20 [i_3] = ((/* implicit */long long int) 428781772);
            }
        } 
    } 
}
