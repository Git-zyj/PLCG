/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249828
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) var_11);
                var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (arr_1 [i_0] [i_1])))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_1])))));
                var_22 |= ((/* implicit */_Bool) var_16);
                var_23 = ((/* implicit */unsigned char) var_12);
                arr_7 [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) (_Bool)0)), (((unsigned short) 1020478109)))), (((/* implicit */unsigned short) (_Bool)0))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_3)) << (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_14))))))), ((+(((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                var_25 = ((_Bool) (unsigned short)45328);
                arr_16 [i_2 - 1] [i_2] [(signed char)0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_11 [(unsigned char)0]) ? (((/* implicit */int) arr_11 [(unsigned short)6])) : (((/* implicit */int) arr_11 [(_Bool)1]))))) ? (arr_9 [(unsigned char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)175))))))));
                var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (632305697725470675ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)131)) ? (arr_0 [i_3]) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_13 [i_2] [(_Bool)1])), (((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (arr_6 [i_2]) : (((/* implicit */int) (unsigned char)175)))))))));
            }
        } 
    } 
    var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? ((~(((/* implicit */int) (unsigned short)20207)))) : (((/* implicit */int) ((unsigned short) var_8)))))) ? (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)20207))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (min((((/* implicit */unsigned long long int) var_2)), (var_5)))))));
}
