/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39020
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
    var_10 -= (!(((/* implicit */_Bool) ((unsigned int) var_2))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned short)53916)))))) == ((-(((/* implicit */int) ((signed char) var_0)))))));
                arr_4 [i_0] = ((/* implicit */_Bool) (short)8160);
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)53896)) + (((/* implicit */int) (unsigned short)53946)))), (((((/* implicit */_Bool) 5894436494093961145ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) var_0)) ? ((~(1966080U))) : (((/* implicit */unsigned int) (+(2147483647)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_9)))))));
                var_12 -= ((_Bool) ((signed char) var_9));
                var_13 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_1]))) : (((((/* implicit */_Bool) 660432470880983773LL)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_2);
    var_15 = (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (-7825390387827406267LL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */short) max((4294967285U), (var_7)));
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_2])))))));
            }
        } 
    } 
}
