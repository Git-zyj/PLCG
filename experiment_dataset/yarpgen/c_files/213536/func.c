/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213536
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
    var_16 |= ((/* implicit */unsigned char) -1LL);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((-3LL) | (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-119)), (1884004383U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)57), (((/* implicit */unsigned char) (_Bool)0)))))) : (((min((((/* implicit */unsigned int) -1290917330)), (4294967291U))) | (((/* implicit */unsigned int) ((/* implicit */int) min(((short)1022), ((short)-27671)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_18 |= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))) / (18446744073709551615ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4)))));
                                var_19 = ((/* implicit */_Bool) ((((1884004383U) / (2715067641U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127)))))));
                                arr_13 [(unsigned short)15] [i_1] [14U] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((-1) == (((/* implicit */int) (short)8987))))) == (min((((((/* implicit */_Bool) (short)8987)) ? (((/* implicit */int) (unsigned short)9123)) : (0))), (((/* implicit */int) (short)0))))));
                            }
                        } 
                    } 
                    arr_14 [(signed char)21] [(signed char)21] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)70)) || (((/* implicit */_Bool) 2808827314857992172ULL)))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -1482243284))))) : (((/* implicit */int) ((((/* implicit */_Bool) 8386560U)) || (((/* implicit */_Bool) (signed char)-102)))))));
                    arr_15 [i_1] = ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) ((9007199254740991LL) >= (-3LL))))) : (-34LL));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) min((8386560U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 262208332U)) : (min((11436605006906498119ULL), (((/* implicit */unsigned long long int) -3LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}
