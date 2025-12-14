/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232042
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */int) min((var_10), (((((/* implicit */_Bool) min((min((4237238225U), (var_2))), (((/* implicit */unsigned int) max((((/* implicit */short) var_7)), (arr_0 [5LL]))))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) arr_2 [i_0]))))) | (((/* implicit */int) arr_3 [i_1 + 1]))))))));
                var_11 = ((/* implicit */int) arr_4 [11LL]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_2 - 1]), (((/* implicit */short) max((((/* implicit */unsigned char) arr_6 [3LL])), (var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)249)))) : ((~(arr_4 [(unsigned char)7]))))))));
                arr_12 [i_2] = ((/* implicit */_Bool) (((-((((_Bool)1) ? (57729090U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) + (((((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20))))) ? (((unsigned int) arr_5 [i_2] [i_3])) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_10 [i_2])), ((short)32756)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), (var_1))))) : (6527783948874563847LL)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_14 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-3349687594239644618LL));
}
