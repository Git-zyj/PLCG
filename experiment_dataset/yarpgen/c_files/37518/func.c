/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37518
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
    var_19 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (var_6)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_1);
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) var_5))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            arr_11 [i_0] [(signed char)18] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */int) min((var_18), ((unsigned short)7334)))) & ((~(((/* implicit */int) var_18)))))), (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_7)))))));
            arr_12 [(unsigned char)14] [i_0] [(unsigned char)14] = ((/* implicit */short) var_14);
        }
        /* vectorizable */
        for (short i_4 = 4; i_4 < 17; i_4 += 2) 
        {
            var_21 = ((/* implicit */int) var_15);
            var_22 *= ((/* implicit */_Bool) var_2);
            var_23 = ((/* implicit */unsigned long long int) var_9);
            var_24 = ((/* implicit */unsigned int) ((_Bool) var_18));
            var_25 = ((/* implicit */unsigned int) var_15);
        }
        arr_15 [(unsigned char)6] = ((/* implicit */signed char) (-(var_4)));
    }
}
