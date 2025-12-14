/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30319
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 += ((/* implicit */int) ((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_6 [i_1])))) && (((/* implicit */_Bool) ((int) ((unsigned char) var_12))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 375194549601595913LL)) ? (max((2199023222784LL), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_1] [(unsigned char)12] [i_1]))))))) ? (((arr_5 [i_1] [(_Bool)1] [i_2]) ? ((~(var_9))) : (((/* implicit */unsigned long long int) ((var_1) % (var_1)))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) : (var_10)))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((unsigned int) -375194549601595914LL))))) ? (2070194330765755271ULL) : (((/* implicit */unsigned long long int) ((unsigned int) max((6972230658127919823LL), (arr_3 [i_0])))))));
                    arr_8 [i_0] [i_0] [16U] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) var_11))) != (((unsigned long long int) arr_3 [i_2]))))), (arr_3 [i_2 + 2])));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (short i_4 = 1; i_4 < 12; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (short)-13057);
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((-5391831578803433336LL) / (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */long long int) 2460400570U)) != (var_1)))))))))));
                }
            } 
        } 
    } 
}
