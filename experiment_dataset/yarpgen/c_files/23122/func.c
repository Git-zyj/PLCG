/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23122
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
    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2438964990U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
    var_19 *= ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) var_9)))));
    var_20 = ((/* implicit */long long int) (+(var_14)));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0 - 2] [i_4] &= ((/* implicit */int) (+(min((arr_14 [i_0] [i_0 - 3] [i_1] [i_4] [i_1] [i_4] [i_4]), (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [i_0 - 1] [i_4] [i_4])))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_4]), (((/* implicit */short) (unsigned char)30)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-57)), (10673346784950171445ULL)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) : (18446744073709551605ULL))) : (((/* implicit */unsigned long long int) 1856002305U))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+(min((arr_1 [i_0 - 3]), (arr_1 [i_0 - 3]))))))));
            }
        } 
    } 
}
