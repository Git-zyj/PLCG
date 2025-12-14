/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31307
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_10);
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2]))))) != (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */unsigned int) 1087631400)) : (2948318286U))));
                    var_15 |= ((/* implicit */unsigned int) arr_5 [i_0] [i_0] [(_Bool)1]);
                    arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 2948318267U)), (var_9)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) (_Bool)1))));
                }
                for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)238)))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((unsigned int) 1346649006U))));
                }
                for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    arr_14 [i_4] [i_4] [1] [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [i_0]);
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1346648992U)) ? ((+(-671953653))) : (min((((/* implicit */int) ((28672) < (((/* implicit */int) arr_5 [i_0] [i_1] [i_4]))))), (var_8)))));
                }
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (((-(2948318279U))) << (((/* implicit */int) var_4)))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 1; i_5 < 19; i_5 += 1) 
                {
                    arr_18 [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_4)))));
                    arr_19 [(unsigned short)8] [i_5] [18] = ((/* implicit */short) (~((~(((unsigned int) (unsigned short)1))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_5))))));
}
