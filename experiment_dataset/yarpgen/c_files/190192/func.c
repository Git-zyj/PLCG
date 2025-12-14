/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190192
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
    var_15 = var_12;
    var_16 = ((/* implicit */int) (((-(((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) : (var_10))))) * (((/* implicit */unsigned int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 = max((((/* implicit */int) (unsigned char)153)), (max((arr_11 [i_2] [i_2] [i_2 - 2] [i_2] [i_2]), (((/* implicit */int) arr_5 [i_2] [i_2] [i_2 - 1])))));
                                var_18 = ((/* implicit */signed char) (~(((1138544140U) % (1257567510U)))));
                            }
                        } 
                    } 
                    var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0])) | (((unsigned int) 3037399764U))))) ? (((unsigned int) -1315313277)) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [i_1 + 1] [(signed char)10] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_19 [i_5] [i_1 - 1] [i_2] [13] [i_6] = 1073741820;
                                arr_20 [i_6] [i_6] [i_5] [i_2] [i_6] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) -1730208304)), (((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_5 - 2] [i_2 - 1])) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_1 - 2]) : (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) var_12)))))))));
                                arr_21 [i_6] [(signed char)0] = ((/* implicit */unsigned int) var_13);
                                arr_22 [i_6] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) max((max((var_9), (var_9))), (((int) var_11)))))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (~(((unsigned int) (~(3148323399U)))))))));
                arr_23 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_1 - 1] [i_1] [i_1])), (arr_17 [i_1 - 1] [i_1]))))));
            }
        } 
    } 
}
