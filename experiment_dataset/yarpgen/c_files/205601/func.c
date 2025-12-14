/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205601
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)27526))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) -3701294935754396714LL)) ? (7970784234978943838ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 3; i_3 < 8; i_3 += 3) 
        {
            for (unsigned short i_4 = 4; i_4 < 9; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39039)) ? (((/* implicit */unsigned long long int) ((2755633083U) | (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (arr_6 [i_3 + 1])));
                    arr_15 [(unsigned short)4] [(unsigned short)4] [i_4] &= ((/* implicit */int) ((-1002091221) < (((/* implicit */int) arr_2 [i_3 + 1]))));
                    var_23 = ((/* implicit */int) -1680523156726091713LL);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 1) 
        {
            {
                arr_22 [i_5] [i_6 - 1] = ((/* implicit */_Bool) var_6);
                arr_23 [i_5] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(10475959838730607777ULL))))));
            }
        } 
    } 
    var_24 |= ((/* implicit */short) ((2204683504908535893ULL) >> (((max((((((/* implicit */int) (unsigned short)44241)) * (((/* implicit */int) (short)-27527)))), (((((/* implicit */_Bool) 1497813122352561680ULL)) ? (((/* implicit */int) (short)27526)) : (((/* implicit */int) var_19)))))) - (27502)))));
}
