/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243852
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
    var_11 = ((/* implicit */long long int) max((((((/* implicit */int) var_1)) & (((/* implicit */int) var_10)))), (((/* implicit */int) var_2))));
    var_12 = ((/* implicit */unsigned char) (((+(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)34)), ((unsigned short)31865)))))) <= (max((max((1060353872), (((/* implicit */int) var_8)))), (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_7)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */short) max((((/* implicit */int) arr_3 [i_0] [i_1])), (((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
                    var_13 += ((/* implicit */unsigned char) (unsigned short)31881);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(7987520343544169047LL)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_8 [i_3 - 2]))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((((/* implicit */short) arr_7 [i_3 + 3])), (arr_9 [i_4] [(unsigned short)11])))) : ((+(((/* implicit */int) arr_7 [(unsigned short)2]))))))));
                var_15 -= ((unsigned short) arr_7 [(short)5]);
            }
        } 
    } 
}
