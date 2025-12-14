/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219783
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((var_0) ^ (((/* implicit */long long int) var_2))))))) ? (max((((/* implicit */long long int) ((signed char) var_7))), (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-36))) : (-9171121792127645979LL))))) : (var_0)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) var_6);
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 + 4]))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (arr_4 [i_3] [i_0 + 1]) : (arr_4 [i_3] [i_0 + 3])));
                        var_20 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0 + 4]))));
                        arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_1] [i_1])) - (((-9171121792127645995LL) / (-9171121792127645986LL)))));
                        var_21 &= ((((/* implicit */int) (signed char)55)) >= (var_8));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */int) ((-8009258620952848900LL) & (((/* implicit */long long int) (~(var_3))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) 293475505)) / (-9171121792127645995LL)))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((((/* implicit */_Bool) min((arr_7 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */int) (unsigned short)53550))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */long long int) arr_10 [i_4] [(_Bool)1] [(_Bool)1] [i_6])), (9171121792127645987LL))))), (max((907984714461572154LL), (((/* implicit */long long int) var_6)))))))));
                }
            } 
        } 
        arr_21 [i_4] = ((((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4])) * (((/* implicit */int) (unsigned short)12236))))) | (((var_9) ? (arr_17 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) arr_15 [i_4] [i_4] [i_4])))));
        var_24 = ((/* implicit */short) arr_6 [i_4] [i_4] [(unsigned short)12] [i_4]);
        arr_22 [i_4] = min((((/* implicit */long long int) ((var_15) ? (((/* implicit */int) arr_16 [14LL] [14LL])) : (((/* implicit */int) (!((_Bool)1))))))), (-1430878264608655884LL));
        arr_23 [i_4] = ((/* implicit */long long int) (~(arr_7 [i_4] [i_4] [i_4] [i_4])));
    }
}
