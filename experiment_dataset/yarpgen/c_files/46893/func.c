/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46893
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (((~(((/* implicit */int) min(((unsigned short)36591), (arr_1 [(unsigned char)1] [(unsigned char)1])))))) & (((/* implicit */int) max((min((var_15), ((unsigned short)57213))), (max((arr_0 [i_0]), (arr_3 [i_0]))))))));
                var_17 = ((/* implicit */unsigned char) var_11);
                arr_4 [i_0] [i_0] [(unsigned short)17] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_0 [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                arr_11 [i_3] = (((+(((/* implicit */int) arr_0 [(unsigned short)3])))) == (((/* implicit */int) (unsigned short)28954)));
                var_18 *= ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))));
                var_19 = ((/* implicit */unsigned char) var_1);
                var_20 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_8 [i_2] [i_3] [i_3])))))), ((-(((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) var_11)))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
}
