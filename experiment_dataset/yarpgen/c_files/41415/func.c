/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41415
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)34)) ? (min(((~(15633821991195521946ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)36))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_1))))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_1] [i_0])))) ? (max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (0ULL) : (arr_1 [(_Bool)0] [(unsigned char)8]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_1] [(unsigned char)15] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)51))) : (10935411623002232539ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_1])), (arr_0 [i_0] [i_1]))))) : (arr_1 [i_1] [i_0])));
            }
        } 
    } 
}
