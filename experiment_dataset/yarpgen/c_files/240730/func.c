/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240730
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) 2357461692638604545ULL);
                    var_10 = ((((((/* implicit */int) (!(((/* implicit */_Bool) 16089282381070947071ULL))))) != (var_8))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)28990))))), ((+(16089282381070947055ULL))))) : (((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22137))) % (16089282381070947071ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16089282381070947067ULL)))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)17669)) : (((/* implicit */int) var_5))))) ? ((-(var_9))) : (min((((/* implicit */int) var_2)), (var_1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */int) var_2)), (var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7)))))))) : (min((((((/* implicit */_Bool) var_1)) ? (16089282381070947071ULL) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_4))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            {
                arr_15 [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16089282381070947067ULL))));
                var_12 |= ((/* implicit */unsigned int) var_3);
                var_13 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_4))))))) == ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) >= (var_7))))))));
            }
        } 
    } 
}
