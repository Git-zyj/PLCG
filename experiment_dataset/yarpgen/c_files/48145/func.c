/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48145
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
    var_17 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-8282839741439734262LL)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0])) > (((/* implicit */int) var_12)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
                    var_20 = ((/* implicit */short) (unsigned short)42596);
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_21 = ((long long int) arr_3 [i_3] [i_3] [i_3]);
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (int i_5 = 1; i_5 < 12; i_5 += 4) 
            {
                for (long long int i_6 = 2; i_6 < 12; i_6 += 1) 
                {
                    {
                        arr_17 [i_3] [i_4] = (-(((/* implicit */int) (unsigned short)42579)));
                        arr_18 [i_4] [i_6] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) min(((unsigned short)22940), (var_12))))))), (((((/* implicit */int) (unsigned char)189)) << (((((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (((/* implicit */int) arr_13 [i_3])))) - (63308)))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_4 [i_3] [i_3]))));
    }
    var_23 -= ((/* implicit */unsigned short) var_15);
    var_24 = ((/* implicit */int) ((_Bool) (signed char)-28));
}
