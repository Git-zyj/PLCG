/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236835
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)144))) + (8808112717566137683LL)));
                        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((unsigned char) 8808112717566137694LL)))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 3; i_4 < 17; i_4 += 1) 
                    {
                        var_12 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)14298))) > (8808112717566137683LL)));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_13 = ((/* implicit */unsigned int) ((short) (unsigned char)224));
                            var_14 = ((/* implicit */int) ((long long int) 8808112717566137683LL));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) 8808112717566137683LL))));
                            var_16 ^= ((/* implicit */unsigned int) ((-8808112717566137683LL) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)2))))));
                            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) / (-8808112717566137668LL)));
                        }
                    }
                    var_17 = ((/* implicit */_Bool) ((unsigned short) ((int) ((signed char) -8808112717566137683LL))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-64)) && (((/* implicit */_Bool) (signed char)127)))))) << (((max((((int) (signed char)51)), (((/* implicit */int) var_0)))) - (32)))));
}
