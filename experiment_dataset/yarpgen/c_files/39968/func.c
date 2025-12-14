/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39968
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
    var_20 = ((/* implicit */unsigned short) var_18);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) arr_4 [(unsigned short)2] [(signed char)5] [(unsigned char)11]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_4] [i_4] = ((/* implicit */int) 2230456506354330676LL);
                                var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_3 - 1] [i_2] [i_2] [i_2] [i_1])) <= (((/* implicit */int) arr_7 [i_3 - 1] [i_3] [i_3] [i_3 - 2] [i_3])))) ? (((/* implicit */int) (unsigned short)22075)) : ((~(((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_3] [i_4]))))));
                                arr_12 [i_4] [i_1] [i_2] [i_4] [i_3] [i_2] [i_4] = ((/* implicit */int) (_Bool)1);
                                var_23 = ((/* implicit */_Bool) ((((-506417020047279671LL) + (9223372036854775807LL))) << (((long long int) ((((/* implicit */_Bool) arr_1 [0])) ? (((/* implicit */int) arr_6 [i_0] [i_4])) : (((/* implicit */int) arr_3 [i_0])))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) -506417020047279673LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_4);
    var_26 = ((/* implicit */short) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_12))));
}
