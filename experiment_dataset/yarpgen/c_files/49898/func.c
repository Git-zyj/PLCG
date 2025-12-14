/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49898
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
    var_16 |= ((/* implicit */int) ((unsigned char) 0U));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (unsigned char)255);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((-8437610484257639144LL) & (((/* implicit */long long int) 1130494273U))))))), (max((((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */unsigned long long int) 8437610484257639144LL)) : (var_13))), (((/* implicit */unsigned long long int) (short)22213))))));
                        arr_10 [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))) | (((((/* implicit */_Bool) (signed char)75)) ? (arr_0 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)77)))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_4] [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
                        var_19 = ((/* implicit */signed char) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) ((-8633019313935136009LL) | (((/* implicit */long long int) ((/* implicit */int) var_3)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-8437610484257639137LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_1))));
                    }
                }
            } 
        } 
    } 
}
