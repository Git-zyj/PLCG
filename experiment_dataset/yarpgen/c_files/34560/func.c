/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34560
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
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((int) (((!(((/* implicit */_Bool) 571380289594598982LL)))) ? ((+(-571380289594598983LL))) : (((/* implicit */long long int) ((int) arr_0 [5LL] [i_0]))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((long long int) arr_5 [i_0])) | ((((~(-571380289594598983LL))) ^ ((-(-571380289594598975LL)))))));
                var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((2147483647) / (((/* implicit */int) (unsigned short)22835)))))) >> (((/* implicit */int) (!(arr_5 [i_0]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    var_11 = ((/* implicit */int) (~(571380289594598972LL)));
                    arr_12 [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_2 - 1]))));
                }
            }
        } 
    } 
    var_12 = (!(((/* implicit */_Bool) var_5)));
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50334))));
}
