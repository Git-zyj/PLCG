/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215065
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))));
    var_18 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */_Bool) var_16);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1225107779U)))))));
                                arr_15 [i_1] [i_4] [i_4] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) (unsigned char)187)))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (((((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) && ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (arr_0 [i_0]))))))));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((6460553491601675756LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33895)))))) ? ((~(((/* implicit */int) (unsigned char)74)))) : ((~(((/* implicit */int) arr_13 [i_0 - 2] [i_0] [i_0 + 2])))))))));
            }
        } 
    } 
}
