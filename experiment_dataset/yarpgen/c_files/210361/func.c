/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210361
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
    var_10 = ((/* implicit */short) ((min(((-(((/* implicit */int) var_4)))), ((+(945251135))))) << (((((((/* implicit */_Bool) var_3)) ? (((unsigned int) 140737354137600ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_6))))))) - (4160749565U)))));
    var_11 = ((/* implicit */unsigned short) ((_Bool) var_8));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)167)) ? (18446603336355414030ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                arr_5 [i_0] [i_0] [i_0 - 3] = ((/* implicit */signed char) max(((short)1486), (((/* implicit */short) (((((_Bool)1) ? (arr_2 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) == (arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_6)))), ((-(((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) ((int) (short)-14449))) ? ((+(618363945330067779ULL))) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)0)))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_9);
                arr_12 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -1133723042)) ? (((((/* implicit */_Bool) (short)-22944)) ? (320420539U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((3167889725278976110LL) - (((/* implicit */long long int) arr_10 [i_2] [i_3] [i_3]))))) ? (arr_10 [i_2] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2])))))));
            }
        } 
    } 
}
