/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237337
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
    var_15 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [10ULL] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-26866))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (arr_1 [i_0] [i_0])));
        var_17 |= ((/* implicit */unsigned long long int) ((int) arr_1 [i_0] [i_0]));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-26867))) - (((unsigned int) -1085671966))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 4; i_4 < 18; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((unsigned char) arr_3 [(signed char)19])), (max((arr_9 [i_1] [i_2]), (((/* implicit */unsigned char) (signed char)-107))))))))))));
                                arr_18 [2] [i_4] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) arr_14 [i_4 - 1] [i_4 - 1] [i_4] [i_4]);
                                var_21 = min((((/* implicit */unsigned char) ((signed char) arr_3 [i_3 - 1]))), (max((arr_9 [i_5] [i_2]), ((unsigned char)223))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
