/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36574
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
    var_15 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 10; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) 575897802350002176ULL))));
                    arr_8 [i_0] [i_1 + 2] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 575897802350002176ULL)))))));
                }
                for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) ((short) 575897802350002176ULL));
                    var_18 = arr_0 [i_0] [i_0];
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned short) 17870846271359549418ULL)))));
                }
                /* vectorizable */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 1) 
                {
                    arr_17 [(signed char)10] [(signed char)10] [i_4 - 1] = ((/* implicit */unsigned char) -6473983861764428428LL);
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-93)))))));
                }
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (~((-9223372036854775807LL - 1LL)))))) ? (17870846271359549439ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
            }
        } 
    } 
}
