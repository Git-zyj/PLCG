/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50011
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
    var_18 = (+(var_7));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] = max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) var_5))))) >> (((min((((/* implicit */long long int) (_Bool)1)), (-6601044360553622637LL))) + (6601044360553622646LL)))))), (((arr_0 [i_0]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)11]))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])) : (1111499741238557582LL))) - (var_14)))) || (((/* implicit */_Bool) ((unsigned short) arr_9 [i_4 - 2] [i_4] [i_4] [i_4 + 1] [i_2])))));
                                var_20 *= ((/* implicit */long long int) ((((arr_12 [i_0]) || (((/* implicit */_Bool) var_14)))) || (((/* implicit */_Bool) ((arr_12 [i_0]) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_8 [i_1] [i_1])))))));
                                arr_13 [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((long long int) 1455342907U)) % (arr_1 [i_0])))), (max((((/* implicit */unsigned long long int) var_4)), (18446744073709551603ULL)))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) 7632753953205898003LL);
                                var_21 -= ((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4 - 3]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
