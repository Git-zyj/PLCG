/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39103
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)9099), (((/* implicit */unsigned short) ((signed char) 452746077U)))))) ? ((~(((unsigned int) -4247441582810010936LL)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) (short)-3058)) ? (arr_2 [i_0] [i_0] [i_3]) : (arr_2 [i_0] [i_1] [10ULL])))));
                        arr_9 [i_0] [(_Bool)1] [9] [i_1] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (_Bool)1))) == (((arr_5 [i_1]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3])) : (((/* implicit */int) var_8))))));
                        var_19 = ((/* implicit */unsigned char) var_6);
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 17; i_4 += 1) 
        {
            arr_13 [i_4] = ((/* implicit */unsigned int) (!(arr_1 [i_4 - 1] [i_4 - 1])));
            var_20 = var_11;
            var_21 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-3843))));
        }
    }
}
