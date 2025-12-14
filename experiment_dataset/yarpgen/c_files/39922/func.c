/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39922
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (_Bool)1)))))))) ? (((((2814103530U) < (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) ? ((~(((/* implicit */int) var_0)))) : (max((1949433010), (((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 1949433010)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_11))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 += (+(max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(signed char)2] [i_1])) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (unsigned char)244)))), (((((/* implicit */_Bool) -2738910417876187204LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2 - 3] [(signed char)3] [i_4] [i_3] [(unsigned short)7] = ((/* implicit */long long int) var_2);
                                var_16 = ((/* implicit */signed char) 1949433019);
                                var_17 = ((((((((/* implicit */int) var_7)) * (((/* implicit */int) (signed char)-12)))) + (2147483647))) >> ((((+(arr_2 [i_0 + 4]))) - (3737156060U))));
                            }
                        } 
                    } 
                    var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) -1)))) * (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [(_Bool)1] [(_Bool)1] [i_2] [i_1] [i_2 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(short)10] [(_Bool)1] [i_1] [i_1] [i_2]))) : (((4294967295U) * (3703696220U))))));
                    var_19 -= 2311865935U;
                }
            } 
        } 
    } 
}
