/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233108
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
    var_12 = ((/* implicit */int) var_2);
    var_13 = ((/* implicit */short) var_2);
    var_14 -= ((/* implicit */short) ((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) (signed char)(-127 - 1))) + (144)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    arr_7 [i_1] [i_1] [i_1] [i_2] = arr_0 [i_0];
                    var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_2] [i_2 + 4] [i_2 - 1] [i_2]))) ? (((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 2] [i_2] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(unsigned short)5] [i_2 - 1] [(unsigned short)5] [(unsigned short)5])))))));
                }
                for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 12; i_4 += 4) 
                    {
                        for (int i_5 = 2; i_5 < 11; i_5 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] = ((/* implicit */int) (+(((long long int) 18136084903898097191ULL))));
                                var_16 = ((/* implicit */unsigned long long int) (-(((int) (signed char)127))));
                            }
                        } 
                    } 
                    arr_15 [i_1] = ((/* implicit */_Bool) var_1);
                    arr_16 [i_1] [i_1] = ((/* implicit */short) (-(2537999234U)));
                }
                arr_17 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((var_11) || (((/* implicit */_Bool) arr_1 [i_1]))))))) | ((+(((/* implicit */int) (_Bool)0))))));
                var_17 = ((/* implicit */long long int) max((max((2147483640), (((/* implicit */int) (signed char)-117)))), (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) (unsigned short)60174)))))));
            }
        } 
    } 
}
