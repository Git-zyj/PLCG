/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249078
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
    var_15 += ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) min((var_1), ((short)19524)));
                var_17 = ((/* implicit */unsigned int) 15231192608813829259ULL);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 10; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (4276105016564604885LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3]))))))) && (((/* implicit */_Bool) ((unsigned long long int) ((arr_8 [i_2 + 2] [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2])))))))));
                    /* LoopSeq 2 */
                    for (short i_5 = 3; i_5 < 11; i_5 += 3) 
                    {
                        var_18 ^= ((/* implicit */unsigned char) arr_14 [2LL] [(unsigned char)10]);
                        arr_17 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) var_6);
                    }
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */_Bool) max((var_19), (((arr_2 [i_4]) <= (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                        var_20 &= ((/* implicit */_Bool) arr_6 [i_2]);
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_8);
}
