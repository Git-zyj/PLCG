/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222048
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) min(((unsigned short)8191), (((/* implicit */unsigned short) var_6)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_10 [i_0 - 1] [i_0 - 1] [i_2] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) -667237631);
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */_Bool) arr_1 [i_2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 3; i_7 < 21; i_7 += 3) 
            {
                {
                    arr_19 [i_5] [i_5] [i_7] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned int) var_4))), (((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)57345)), ((-2147483647 - 1))))) * (((((/* implicit */_Bool) var_3)) ? (12860320589818005305ULL) : (((/* implicit */unsigned long long int) -646930318))))))));
                    var_15 = ((/* implicit */int) (-(1976890789U)));
                    var_16 += ((/* implicit */_Bool) (-(max((5586423483891546310ULL), (((/* implicit */unsigned long long int) arr_18 [i_6] [i_6] [(unsigned short)7]))))));
                    arr_20 [i_7 - 1] [i_5] [i_5] [i_5] = ((unsigned int) var_8);
                }
            } 
        } 
    } 
}
