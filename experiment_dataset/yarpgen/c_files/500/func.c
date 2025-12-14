/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/500
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
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4796699733741557934LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8)))) ? (((/* implicit */int) var_7)) : (max((var_17), (((/* implicit */int) (unsigned char)193))))))), ((+(var_2)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) max((arr_1 [i_1]), (arr_1 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned long long int) max((arr_0 [i_1]), (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_2 [3] [i_0])) ? (((/* implicit */unsigned long long int) 2010370159)) : (arr_2 [(short)7] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2010370159)) ? (((/* implicit */int) (short)14937)) : (2010370159))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))))));
                arr_4 [i_0] [16LL] [i_0] = ((/* implicit */signed char) (+(-2974013410996966102LL)));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (((+((-(arr_2 [i_0] [(signed char)2]))))) * (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (short)14937)), (-4796699733741557934LL))), (((/* implicit */long long int) arr_1 [i_1]))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                {
                    var_22 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1538992308079901793LL)) ? (arr_11 [i_4]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((arr_11 [i_2]) > (arr_11 [i_3])))) : ((+(((/* implicit */int) (signed char)1)))));
                    arr_12 [i_2] [i_2] [12] [i_4] = ((/* implicit */_Bool) arr_10 [7ULL]);
                    arr_13 [i_3] [i_3] [i_2] |= (~(((((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) | ((~(7632935156323040604ULL))))));
                    var_23 -= ((/* implicit */short) (_Bool)0);
                    arr_14 [i_2] = ((unsigned int) arr_5 [7]);
                }
            } 
        } 
    } 
    var_24 *= ((/* implicit */signed char) ((((((var_8) == (var_2))) ? (((/* implicit */int) ((((/* implicit */int) (short)1912)) >= (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_11)) ? (var_17) : (((/* implicit */int) var_7)))))) - (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (482890827))) > (((/* implicit */int) (!((_Bool)0)))))))));
}
