/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205293
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
    for (int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_6))));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((((((/* implicit */_Bool) min(((unsigned short)2047), ((unsigned short)53456)))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_13))))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) != (-1)))))) : ((-(((/* implicit */int) var_12)))));
                    arr_8 [i_1] [i_1] [i_2] [i_1] |= ((/* implicit */short) ((int) 1073600100));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_10);
    var_18 = ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (signed char i_4 = 2; i_4 < 19; i_4 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (5929864268131544755LL) : (((/* implicit */long long int) 1073600100))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_4])) - (9618163)))) : (((long long int) var_3))))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) arr_4 [i_4] [i_4 - 1] [12ULL])))), (((((/* implicit */_Bool) arr_0 [i_4 + 1] [i_4 - 2])) ? (((((/* implicit */int) (unsigned short)3950)) * (((/* implicit */int) (short)5010)))) : (((/* implicit */int) ((signed char) -5303770308220397768LL))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_4))))) ? ((-(9618163))) : (-1586406626))));
}
