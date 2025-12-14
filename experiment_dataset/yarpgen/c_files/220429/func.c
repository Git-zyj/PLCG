/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220429
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
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */signed char) max((var_12), (var_4)));
                        arr_10 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0])), (976445035)));
                    }
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_13 = arr_0 [i_0];
                        var_14 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned char) 157365590))) ? (((/* implicit */unsigned int) max((-157365611), (((/* implicit */int) var_6))))) : (arr_9 [i_0] [i_0 + 2] [i_1] [i_0]))));
                    }
                    for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((int) 1937025075U));
                        var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((short) var_11))), (arr_6 [i_5] [i_2] [i_1] [i_0])));
                    }
                    arr_17 [i_0] [i_2] = (short)-24650;
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((unsigned int) 6500869797074147552ULL)), (((/* implicit */unsigned int) ((short) -157365605)))))) ? (((/* implicit */int) (short)-24650)) : (157365605)));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_10))));
                                arr_23 [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1]));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (arr_14 [i_2] [i_2] [i_2] [(_Bool)1])));
                                var_20 = ((/* implicit */long long int) arr_0 [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_3);
    var_22 &= ((/* implicit */signed char) -157365581);
    var_23 = min((((((/* implicit */_Bool) min((var_0), (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_9)))))), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (-157365590))), (((/* implicit */int) ((unsigned short) var_1))))));
    var_24 = ((/* implicit */unsigned char) ((unsigned long long int) var_8));
}
