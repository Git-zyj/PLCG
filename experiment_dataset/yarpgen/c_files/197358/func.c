/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197358
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
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        var_17 &= ((/* implicit */signed char) (+(2078637282)));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) | (((/* implicit */int) arr_0 [i_0] [i_0 - 4]))))) && ((!(((/* implicit */_Bool) (unsigned short)63143))))));
        arr_3 [i_0] [(signed char)0] |= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((min((1316171226U), (((/* implicit */unsigned int) (short)-26987)))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1316171225U))))))))), (var_6)));
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            var_19 |= ((/* implicit */unsigned char) var_3);
            var_20 = ((/* implicit */unsigned char) var_6);
        }
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_10 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1316171224U)) ? (((/* implicit */int) min(((unsigned short)63143), (((/* implicit */unsigned short) var_11))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)104))))))) * (((var_10) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
            var_21 = ((/* implicit */unsigned long long int) 1110083222);
        }
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_22 = ((/* implicit */short) 4162741148U);
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8020217574458921279LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40138))) : (2978796051U)))) ? (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_6)))))) ? (((/* implicit */int) (unsigned short)25398)) : (((/* implicit */int) ((var_15) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28877))))))));
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 18; i_4 += 4) 
            {
                for (int i_5 = 1; i_5 < 18; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) (short)28848);
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (short)-13081)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) - (1316171245U))))));
                            arr_22 [i_0] [i_3] [i_4 - 1] [i_4] [i_4] [i_0] = ((/* implicit */long long int) (((+(7824633778407258052ULL))) + (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_5)), (var_12))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) 10622110295302293590ULL)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) var_1))))))))));
                        }
                    }
                } 
            } 
        }
    }
    var_26 = ((/* implicit */signed char) var_11);
    var_27 = ((/* implicit */unsigned char) max((var_6), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -628767734488914568LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_16)))), (((var_1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
}
