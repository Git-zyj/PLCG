/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244183
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
    for (int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((var_7), ((signed char)-108)))), ((((!(((/* implicit */_Bool) 15670001224187344670ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_4]))) | (2776742849522206947ULL))) : (((/* implicit */unsigned long long int) ((var_11) + (((/* implicit */int) var_12)))))))));
                                var_17 ^= ((/* implicit */short) max((((int) (unsigned short)65524)), (((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_2 + 2] [i_4]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_0 [i_6]))) * (min((arr_0 [i_2]), (arr_0 [i_2])))));
                                var_19 = (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)0)), (2524341992U)))))));
                                var_20 = ((/* implicit */unsigned char) arr_5 [i_6] [i_5] [i_0]);
                                var_21 = ((/* implicit */signed char) (+((-(((/* implicit */int) ((((/* implicit */_Bool) 14400132705083239524ULL)) && (((/* implicit */_Bool) 3705630732U)))))))));
                                arr_20 [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3060166219915484632ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23596))))))) : (((unsigned int) var_10))))), (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])), (min((var_9), (15386577853794066984ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_7 = 1; i_7 < 22; i_7 += 2) 
    {
        for (int i_8 = 2; i_8 < 22; i_8 += 3) 
        {
            for (long long int i_9 = 3; i_9 < 22; i_9 += 3) 
            {
                {
                    var_22 *= ((/* implicit */_Bool) var_5);
                    var_23 = ((/* implicit */int) ((unsigned int) 7U));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(((var_14) ^ (((/* implicit */int) var_13)))))))));
                    var_25 ^= ((/* implicit */unsigned int) ((_Bool) 0ULL));
                }
            } 
        } 
    } 
}
