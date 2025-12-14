/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214889
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
    var_15 = var_2;
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((signed char) arr_6 [i_1] [i_1] [i_1 - 2] [i_0]);
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_1] [(_Bool)1] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */signed char) ((arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 - 1]) && (arr_11 [i_1] [i_4] [i_2] [(unsigned char)0] [i_2] [i_4 + 4])));
                            arr_14 [i_3] [i_4] [i_2] [i_3] [i_4] [i_3] = arr_11 [i_0 + 4] [i_4] [i_2] [i_3] [i_4] [i_4];
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (arr_7 [i_0 - 2] [i_0 - 1])));
                        }
                        var_18 = arr_3 [i_3] [i_1] [i_3];
                    }
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((unsigned long long int) ((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (arr_7 [(_Bool)1] [i_1]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 17937752362218993486ULL)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (unsigned char)158))))))) : (max((((/* implicit */unsigned long long int) var_12)), (max((15079291564808724349ULL), (((/* implicit */unsigned long long int) 736145322U))))))));
}
