/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3783
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
    var_20 = ((/* implicit */unsigned int) (short)14351);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((_Bool) (short)14351)) && (((/* implicit */_Bool) ((((/* implicit */int) (short)14378)) ^ (((/* implicit */int) (short)-14352)))))));
                arr_5 [i_1] = ((/* implicit */int) (_Bool)1);
                arr_6 [i_0] = ((/* implicit */_Bool) max((((max((((/* implicit */unsigned int) (unsigned short)65535)), (2296909366U))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))))), (((/* implicit */unsigned int) 15))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) (_Bool)0);
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_9 [4ULL] [(unsigned short)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)62901)) << (((((/* implicit */int) ((short) min(((short)-32759), (((/* implicit */short) (_Bool)1)))))) + (32769)))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14352)) && ((_Bool)1)));
        var_23 += ((/* implicit */short) 1001156041);
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) 15);
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)15)) || (((/* implicit */_Bool) (short)14355))))) & (min((-16), (((/* implicit */int) (short)14352))))));
    }
    var_24 = ((/* implicit */unsigned short) (short)(-32767 - 1));
}
