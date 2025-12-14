/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225399
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
    var_16 = ((/* implicit */int) max((var_16), (((((((/* implicit */_Bool) max((18128638657520549282ULL), (((/* implicit */unsigned long long int) 1681763731))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) ((signed char) -1095255800))))) >> ((((((_Bool)1) ? (max((318105416189002334ULL), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) min((var_1), (var_3)))))) - (318105416189002308ULL)))))));
    var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_10)) ? (1628347380U) : (((/* implicit */unsigned int) 534773760))))))), (((((/* implicit */_Bool) max((((/* implicit */int) var_15)), (var_4)))) ? (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (318105416189002334ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -534773770)) ? (var_3) : (var_4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -534773756)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_11)))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (4801494256542423563LL) : (((/* implicit */long long int) 4191673312U)))) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) (+(var_3))))));
                arr_5 [i_0] [i_1] [i_0] = (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (-534773760)))) : (((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            {
                arr_11 [6] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((318105416189002346ULL) == (((/* implicit */unsigned long long int) var_6))))), (var_1)))), (max((((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_2] [i_3]))), (318105416189002346ULL)))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_12))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_4 = 4; i_4 < 13; i_4 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((int) ((int) var_7))))));
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [15LL] [15LL] [i_4])) ^ (((/* implicit */int) var_14))))) ? (((/* implicit */int) (unsigned char)172)) : (-534773770));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 11; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_19 [(unsigned char)11] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) (unsigned char)255)) | (var_1))) : (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) arr_3 [17U] [i_5])) : (var_4)))));
                                arr_20 [(_Bool)1] [i_2] [i_4] [i_2] [1] [i_6] [3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((+(var_4))) : ((-(((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                    var_23 = var_1;
                }
            }
        } 
    } 
}
