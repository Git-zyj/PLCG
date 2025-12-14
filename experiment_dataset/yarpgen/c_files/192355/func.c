/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192355
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) max((6216041588293589401ULL), (((/* implicit */unsigned long long int) (!((_Bool)0))))))) && (((/* implicit */_Bool) ((-6000208106082856974LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61627)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(max(((+(((/* implicit */int) (unsigned short)61626)))), (((/* implicit */int) (unsigned short)65526))))));
                            arr_13 [i_0] [i_2] [i_2] [7] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42477))) & (var_3))) > (((/* implicit */unsigned int) max((((/* implicit */int) (short)-18473)), ((~(((/* implicit */int) (signed char)122)))))))));
                            arr_14 [i_0 + 3] [i_2] [i_2] [i_3] [(signed char)0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)10)) / (((/* implicit */int) (short)20462))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned long long int) (short)18472);
        arr_18 [i_4] [i_4] = min(((-(var_5))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) var_6))))))));
        arr_19 [i_4] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)10))))))) && (((((/* implicit */int) (!(((/* implicit */_Bool) 503206273U))))) < ((-(((/* implicit */int) var_10))))))));
    }
}
