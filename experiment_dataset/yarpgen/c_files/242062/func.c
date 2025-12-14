/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242062
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
    var_12 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_10 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */short) (+(arr_0 [i_0 + 2])));
                            arr_11 [i_2] [i_2] [i_0] = ((/* implicit */signed char) 31ULL);
                            var_13 = ((/* implicit */short) ((((((/* implicit */long long int) ((-1376444487) % (((/* implicit */int) (short)-3324))))) > (min((var_0), (((/* implicit */long long int) arr_0 [(_Bool)1])))))) ? (3556813086U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [18ULL])))))))));
                            arr_12 [i_0] [i_3] [(signed char)0] [i_2] [i_3] |= ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) > (4194303ULL))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11523))) : (arr_4 [i_1] [i_1] [i_0])))))) : (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (524288U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (min((4194303ULL), (9607873727939273919ULL))))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_5 [i_1] [(signed char)18])) ? (((/* implicit */long long int) ((/* implicit */int) (short)896))) : (var_0))))), (((max((596768598U), (((/* implicit */unsigned int) arr_1 [i_1])))) << (((arr_5 [i_0 - 1] [i_1 + 4]) - (3744075988U)))))));
            }
        } 
    } 
}
