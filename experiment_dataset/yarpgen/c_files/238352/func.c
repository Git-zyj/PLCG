/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238352
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
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0 - 1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) 751963213U);
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_11 [(_Bool)1] [(_Bool)1] [i_2 - 3] [i_1] [i_3] &= ((/* implicit */_Bool) ((signed char) ((((((/* implicit */_Bool) -8163619858713204342LL)) || (((/* implicit */_Bool) var_0)))) ? (arr_3 [16U] [i_2] [2LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_10))))))));
                            arr_12 [i_0 - 1] [i_2] [i_3] = ((/* implicit */unsigned char) arr_3 [i_0] [i_2 + 1] [i_2 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_11 &= var_0;
}
