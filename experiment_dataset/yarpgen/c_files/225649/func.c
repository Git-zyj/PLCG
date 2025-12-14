/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225649
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
    var_15 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_16 &= ((/* implicit */long long int) (+((-(((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1] [(short)4] [i_0]))))));
                            var_17 = ((/* implicit */unsigned long long int) (+(2800990211U)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_4 = 3; i_4 < 14; i_4 += 3) 
                {
                    arr_14 [i_0] [i_0] [i_1] [(signed char)14] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1493977084U)), (9253502047974169542ULL)));
                    arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) -1396403946))) ? (((/* implicit */int) ((signed char) ((signed char) (short)-1)))) : ((+(-1530202262)))));
                }
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18585)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)63))));
            }
        } 
    } 
}
