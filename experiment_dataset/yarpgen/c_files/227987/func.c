/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227987
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((unsigned int) ((unsigned char) min((4294967295U), (((/* implicit */unsigned int) (short)-16808))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)52427)) ? (var_6) : (((/* implicit */long long int) var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_0)))) || (((/* implicit */_Bool) arr_2 [i_1])))))) : ((-(var_1)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min(((short)29163), ((short)16808)));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    var_16 -= ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) / (-486781272855397335LL))) * (var_4))) * (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)37)), (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
                    var_17 -= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)234))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 3879345295421193038ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)55))) : (-501408748151505828LL)))))) : (((max((var_9), (((/* implicit */unsigned long long int) var_8)))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (var_4))))))));
}
