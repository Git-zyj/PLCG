/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35698
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) ((short) arr_4 [i_0]))))));
                    arr_7 [i_1] [7LL] [7LL] [i_1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) (unsigned char)207))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10))));
                    arr_8 [i_0 - 1] [i_1] [i_2 - 1] [i_2 - 3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (max(((+(1842600906U))), (((/* implicit */unsigned int) arr_0 [i_1]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] [i_2] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (short)-10016))))) ? ((-(((/* implicit */int) (signed char)-30)))) : (((/* implicit */int) var_0))));
                                var_21 = ((/* implicit */unsigned char) (-(max(((-(var_15))), (((/* implicit */int) arr_5 [i_4 + 1] [i_4] [i_3 - 4] [i_2]))))));
                                var_22 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-36)) ? (8712876305247380903ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_4 - 1])))))) ? (((unsigned long long int) (unsigned char)39)) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9113977890437379050ULL))))));
                                arr_14 [(unsigned char)15] [i_3] [(unsigned char)15] [i_3] [i_4] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -9223372036854775804LL)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (short)8026))));
                                arr_15 [i_1] [i_2 - 1] [i_3] [i_4] = ((/* implicit */unsigned char) arr_6 [i_2] [(unsigned char)6] [i_2]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0 - 2] [i_0])), ((+(((/* implicit */int) var_11))))))) ? (((/* implicit */int) max((max((((/* implicit */short) var_4)), (var_18))), (((/* implicit */short) (!(((/* implicit */_Bool) -2147483645)))))))) : (((/* implicit */int) (unsigned short)65533))));
                }
            } 
        } 
    } 
    var_24 -= ((/* implicit */unsigned char) var_10);
}
