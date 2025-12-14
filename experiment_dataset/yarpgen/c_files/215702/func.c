/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215702
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) arr_2 [(unsigned short)4] [i_1] [(unsigned short)4]);
                            arr_9 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_17)))))) != (((/* implicit */int) (!(((/* implicit */_Bool) 3237709284U)))))));
                            var_20 = ((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) & (1057258012U));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] = (+(1374233336U));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_14);
}
