/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193586
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                                arr_14 [i_2] [i_0] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_1)))))), (((((/* implicit */int) var_8)) + (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((((((/* implicit */_Bool) max(((signed char)-30), (var_12)))) ? (((/* implicit */int) (((_Bool)0) || (var_4)))) : (((/* implicit */int) max(((signed char)-39), (((/* implicit */signed char) var_6))))))), ((((~(((/* implicit */int) var_8)))) * (((/* implicit */int) (signed char)120)))))))));
                        arr_17 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */_Bool) min((((/* implicit */signed char) min(((_Bool)1), (min((var_11), ((_Bool)1)))))), (min((((/* implicit */signed char) ((var_7) || (((/* implicit */_Bool) (signed char)-16))))), (min(((signed char)(-127 - 1)), ((signed char)80)))))));
                        var_15 = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) << ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-64)))))) >> (((((/* implicit */int) min((var_1), (((/* implicit */signed char) (_Bool)1))))) + (115)))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_12)) : (((var_7) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((((/* implicit */int) (signed char)127)), (((((/* implicit */int) var_6)) * (((/* implicit */int) (signed char)-125)))))))));
        var_18 = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (signed char)124))))));
    }
    /* vectorizable */
    for (signed char i_9 = 2; i_9 < 8; i_9 += 1) 
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) var_11)))))));
        var_20 = ((/* implicit */signed char) min((var_20), ((signed char)-79)));
    }
}
