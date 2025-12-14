/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222412
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
    var_16 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_8))))))) ? (var_7) : (((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) var_0)) : (((var_5) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((var_15) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) var_9)) << (((((/* implicit */int) var_8)) - (181)))))));
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_11)), (arr_1 [i_0]))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((min((var_10), (var_8))), (var_8))))));
                arr_7 [i_1] = ((unsigned char) ((max((((/* implicit */unsigned int) var_11)), (var_4))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                /* LoopNest 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_12)))))) : (min((((/* implicit */unsigned int) var_15)), (var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))))), (var_13)))))));
                                var_21 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) var_5)))));
                            }
                        } 
                    } 
                } 
                arr_17 [3U] = min((arr_9 [i_1] [i_2] [i_1] [i_2]), (var_2));
            }
        } 
    } 
}
