/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54840
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
    var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1494460625)) / (750020206U)))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) (short)-31692)))) : (1494460624))), (((/* implicit */int) var_8))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (var_6)))) ? (((/* implicit */int) (short)-26995)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-18074)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)18073)) || (((/* implicit */_Bool) -1494460639)))))))));
    var_18 = min((((/* implicit */unsigned long long int) ((long long int) (short)-18074))), (((((/* implicit */_Bool) min((3544947089U), (((/* implicit */unsigned int) -1494460625))))) ? ((~(var_9))) : (var_13))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) ((-4587039011336848281LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_2 [i_0] [i_2])))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_3 + 1] [i_2] [i_1] [7LL])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                                var_20 = ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (unsigned char i_7 = 3; i_7 < 16; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((unsigned long long int) var_3));
                                var_22 = ((/* implicit */long long int) var_7);
                                var_23 = ((/* implicit */unsigned long long int) (+(4587039011336848280LL)));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) -3798225342389195334LL)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)18074)))));
                }
            } 
        } 
    } 
}
