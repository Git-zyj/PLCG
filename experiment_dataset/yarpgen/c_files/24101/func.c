/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24101
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
    var_12 = ((/* implicit */int) max((0U), (((/* implicit */unsigned int) -268435456))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0 - 1]);
        arr_4 [i_0 + 4] [i_0] = ((/* implicit */_Bool) ((unsigned char) (-(9470781709301614069ULL))));
        arr_5 [i_0] = ((/* implicit */unsigned char) -699799552);
    }
    var_13 = ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        for (unsigned short i_2 = 4; i_2 < 10; i_2 += 2) 
        {
            for (int i_3 = 3; i_3 < 9; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [(unsigned char)5] [i_3 + 1] = ((/* implicit */unsigned char) var_3);
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_18 [i_3 - 3] [i_4] [i_4] [i_3 - 3] [i_2 - 4] [i_4] [(signed char)9] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_2 - 3])) && (((/* implicit */_Bool) arr_7 [i_2 - 4])))));
                                arr_19 [i_1] [i_2 - 4] [i_2 - 4] [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) ((((int) var_2)) % (((int) arr_10 [i_2 - 3] [(_Bool)1] [5]))));
                                arr_20 [i_1] [i_2] [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) ((signed char) 1956017010U));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = (~(((/* implicit */int) var_10)));
}
