/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226388
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
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_12)), (((unsigned short) ((((/* implicit */int) (short)12587)) | (-1408947114))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0 + 2] [i_0] [i_1] = ((/* implicit */unsigned char) min((((long long int) (unsigned char)143)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (~(var_11)))))))));
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((signed char) var_11)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_3] [i_3 - 1] = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned int) var_10)), (470077931U))));
                arr_13 [(unsigned char)12] [i_3] = ((/* implicit */unsigned char) ((_Bool) ((14311946205677225269ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))))));
                arr_14 [i_2] [i_3] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)100)), ((unsigned char)118))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-3324855912432533641LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))) : (((/* implicit */int) ((signed char) ((unsigned long long int) var_12))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) (short)-8618)) : (((/* implicit */int) (signed char)-95)))) : (614050500)));
}
