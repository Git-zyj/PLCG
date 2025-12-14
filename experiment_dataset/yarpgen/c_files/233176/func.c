/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233176
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
    var_18 = ((/* implicit */unsigned short) (~(var_13)));
    var_19 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) (unsigned char)126)))));
        arr_4 [i_0] = (~(((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) : (451236269663465555ULL))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)142)) ? (16887893873195904717ULL) : ((+(12824765677120767108ULL)))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (~(2521030122U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 16887893873195904717ULL)))) : (((((/* implicit */_Bool) 4293203959U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))) : (-1211050050275627316LL))))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~((~(2485815423U)))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */short) 4194303);
    var_23 = ((/* implicit */_Bool) var_3);
}
