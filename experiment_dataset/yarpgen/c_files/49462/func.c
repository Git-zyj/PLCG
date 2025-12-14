/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49462
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [(unsigned short)8] [i_0] [i_0])) >= (((/* implicit */int) (unsigned short)65328))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])), (17592186044415ULL)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) min((-1), (((/* implicit */int) (short)127))));
        arr_7 [i_2] [i_2] = ((/* implicit */signed char) min((1), (((/* implicit */int) (_Bool)1))));
        arr_8 [i_2] = ((/* implicit */long long int) -22);
        var_15 &= ((/* implicit */signed char) ((long long int) ((arr_2 [i_2] [i_2]) ? (((arr_2 [i_2] [i_2]) ? (((/* implicit */int) (unsigned short)65328)) : (((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) min(((_Bool)0), (var_3)))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) -20);
        var_16 = ((/* implicit */unsigned char) var_8);
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3446058523U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3])))));
    }
    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((-1), (-11)))) ? (-570640114) : (((/* implicit */int) (signed char)55)))), ((~(((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */signed char) (((((_Bool)0) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((signed char) (_Bool)1))))) == ((~(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_6)))))))));
}
