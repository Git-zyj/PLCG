/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235421
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) arr_3 [i_0]);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_13 -= ((((((/* implicit */int) (signed char)59)) >= (((/* implicit */int) arr_14 [i_2] [i_3] [i_4] [i_4 + 1] [i_4 + 1])))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (1645430692))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_3] [i_2] [(unsigned short)2] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)680)) : (((/* implicit */int) var_8))))) ? (max((arr_4 [i_1] [(signed char)9] [i_3] [i_4]), (arr_3 [i_3]))) : (((/* implicit */int) ((signed char) arr_9 [i_4 + 1] [i_1] [i_3] [i_2] [i_1] [i_0]))))));
                                var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_14 [i_0] [i_3] [i_2] [i_1] [i_0])) * (((/* implicit */int) arr_14 [i_0] [i_1] [(unsigned short)7] [i_3] [i_4]))))));
                                var_15 |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)7274)) - (((/* implicit */int) (unsigned short)5594))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */int) arr_0 [i_0]);
                var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)36627)) == (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_1)))) / (((/* implicit */int) (unsigned short)65533))))) ? ((~(((((/* implicit */int) var_9)) % (((/* implicit */int) var_9)))))) : (((((/* implicit */int) (unsigned short)20)) | ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)15315))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            {
                var_18 |= ((/* implicit */signed char) ((((arr_7 [i_5] [i_5] [(_Bool)1]) <= (((/* implicit */int) var_4)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_5 [i_5] [i_5] [i_5])))) ? (((/* implicit */int) ((unsigned short) arr_8 [i_5]))) : ((-(((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_5] [i_5])))))) : (((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))));
                arr_21 [(signed char)2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)3)), (var_11)))) ? (((/* implicit */int) ((_Bool) var_9))) : (((arr_3 [i_6]) / (((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_12 [i_5] [i_5] [i_5]) : (((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_5] [i_5] [i_5]))))));
                arr_22 [(unsigned short)3] [i_5] [i_5] = ((/* implicit */signed char) ((_Bool) (_Bool)1));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_2);
    var_20 = ((/* implicit */unsigned short) min((var_20), (var_3)));
}
