/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2407
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (unsigned short)57073))));
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) -702768584305621409LL)) ? (((/* implicit */int) (short)12098)) : (((/* implicit */int) (signed char)69))))))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) 5603442673757329927ULL))));
                                arr_13 [(_Bool)1] [i_2] [i_2 + 2] [i_2] [i_0 + 1] = ((/* implicit */unsigned short) ((unsigned long long int) max(((-(0LL))), (((18LL) & (((/* implicit */long long int) arr_2 [i_0 - 1] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_1] [i_5] [i_6] = ((unsigned char) max((6479568968618116771ULL), (((/* implicit */unsigned long long int) arr_3 [i_2 - 1] [i_0 - 1] [i_0 + 1]))));
                                var_17 = ((/* implicit */short) (~((((+(((/* implicit */int) (signed char)-42)))) & (((/* implicit */int) arr_0 [i_0 - 1]))))));
                                arr_19 [i_2] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */long long int) ((var_5) ? (max(((-(6396709011781934816ULL))), (((/* implicit */unsigned long long int) 0LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32736))))) ? (8LL) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_17 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 - 1])), ((unsigned char)131)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (short)32764))))))) : (max((((long long int) (signed char)-77)), (((/* implicit */long long int) arr_7 [i_0 + 1] [i_0 + 1] [i_0] [11ULL] [i_0]))))));
    }
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-((-(((/* implicit */int) ((unsigned char) -921407311))))))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((var_6) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)27223)) * (((/* implicit */int) var_5))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))))))));
}
