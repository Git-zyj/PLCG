/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224760
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
    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) 125792467))), (((4294967295U) << (((var_2) - (7566544761078893494ULL)))))))) ? (max((min((var_2), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))));
    var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))) ? ((~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)1)) : (var_0))))) : (((/* implicit */int) ((signed char) ((unsigned int) (unsigned char)255))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_19 = ((/* implicit */int) max((var_19), (min((((/* implicit */int) ((_Bool) (signed char)127))), ((~(((/* implicit */int) var_10))))))));
                    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) (signed char)127)) - (124)))))), (((((/* implicit */_Bool) -1565344803145603305LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))) : (0U)))));
                }
                arr_8 [i_0] &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) var_8)) ^ (arr_5 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) (_Bool)1);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((var_14) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) min((var_0), (var_16))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_23 = var_11;
                                arr_23 [i_3] [i_5] [i_6] = ((/* implicit */unsigned int) var_7);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
