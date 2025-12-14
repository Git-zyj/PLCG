/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221362
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */int) var_10);
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((~(arr_2 [i_0]))) : (((((/* implicit */_Bool) 1533051429)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) var_14))))) : (((1125899906842623ULL) - (13674617426945646525ULL)))))));
                var_21 = ((/* implicit */_Bool) arr_3 [i_0]);
                var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)51985))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_23 = ((/* implicit */int) arr_9 [i_2]);
        arr_10 [16U] [16U] = ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_9 [i_2]) : (arr_9 [i_2]));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)227))));
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) var_10))))) : ((+(-3456886145467647689LL)))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_2])))))));
        var_27 = ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_2]))));
    }
}
