/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197198
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_8)) >= (var_7))))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (var_7)))))) : (((/* implicit */int) var_1))));
    var_13 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(((/* implicit */int) arr_0 [(unsigned short)13])))) : ((~(((/* implicit */int) arr_0 [(_Bool)1])))));
        arr_3 [(_Bool)1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (7790548608339994333ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                arr_15 [i_1] [6] [i_3] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) (+((-(arr_6 [i_3] [i_5])))));
                                var_14 = ((/* implicit */unsigned short) arr_13 [i_1] [i_2] [i_3] [(unsigned short)10] [i_3]);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_2]))))))));
            }
        } 
    } 
}
