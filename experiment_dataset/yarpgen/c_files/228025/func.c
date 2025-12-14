/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228025
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(unsigned short)0] [8ULL] = ((/* implicit */unsigned short) 15499358873062047962ULL);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [(_Bool)1] [(_Bool)1] [4U] [i_1] = ((unsigned int) max((((/* implicit */int) var_0)), (var_7)));
                    arr_11 [4U] = ((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */short) (_Bool)0))))) ? (var_7) : (((/* implicit */int) (_Bool)0)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_17 [(_Bool)1] [(_Bool)1] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                                arr_18 [i_3] [i_2] [i_0] = ((/* implicit */unsigned int) (short)4095);
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) var_9);
                }
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned long long int) var_7);
    var_11 = var_6;
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (int i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 2380622173U)) ? (((/* implicit */int) (_Bool)1)) : (-578577161))), (((/* implicit */int) ((_Bool) 4978291636588843496ULL)))));
                /* LoopNest 2 */
                for (short i_7 = 4; i_7 < 10; i_7 += 2) 
                {
                    for (unsigned int i_8 = 2; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) var_5);
                            arr_29 [i_8] [i_8] [i_8] [i_8 - 1] = ((/* implicit */_Bool) min((var_2), (((/* implicit */short) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
}
