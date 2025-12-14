/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44423
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
    for (short i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_11 |= ((/* implicit */_Bool) ((unsigned short) (unsigned char)0));
                                arr_15 [i_0 - 1] [i_1] [i_1] [i_2] [i_0 - 1] [i_3 - 3] [i_3 - 3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [1ULL] [1ULL] [i_2] [i_3 + 1])) || (((/* implicit */_Bool) arr_9 [i_3] [i_3] [5U] [i_3 - 4])))))) >= (((((/* implicit */_Bool) var_0)) ? (((unsigned long long int) arr_5 [i_0 - 4])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24576))))));
                            }
                        } 
                    } 
                    var_12 -= ((/* implicit */unsigned char) -1743818469143712995LL);
                    arr_16 [i_0] [i_1] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (unsigned char)0))))) < ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255))))))) & (((((/* implicit */int) (unsigned char)0)) & ((-2147483647 - 1))))));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (signed char i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_23 [i_5] = (((+(((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_2] [i_1])) : (arr_19 [i_0] [i_1] [i_0] [i_0]))))) << (((((((/* implicit */_Bool) 2147483643)) ? (((133169152U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)29335))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned char)2)))))))) - (4500U))));
                                var_13 = 1591260203U;
                                arr_24 [i_0 + 2] [i_1] [i_2] [i_6 + 1] [i_6 + 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) (unsigned char)1))), (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : (3541162798U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 18; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            {
                arr_30 [i_8] = ((/* implicit */signed char) max(((~(((((/* implicit */_Bool) arr_29 [(unsigned short)11] [i_7])) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) var_0)))))), ((+(max((((/* implicit */int) (unsigned char)255)), (var_7)))))));
                var_14 = ((/* implicit */unsigned int) (unsigned char)6);
                /* LoopNest 3 */
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (unsigned short i_10 = 2; i_10 < 16; i_10 += 4) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_6))));
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) 4186112ULL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) 1829774765U);
    var_18 = (unsigned short)9712;
}
