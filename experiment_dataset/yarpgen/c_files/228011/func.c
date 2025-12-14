/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228011
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_6))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (min((-3586224971659501835LL), (((/* implicit */long long int) (_Bool)0))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min(((~(((/* implicit */int) ((-1059738968) != (((/* implicit */int) (signed char)124))))))), (((/* implicit */int) var_0))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (max((((2736173051786245107LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18978))))), (((/* implicit */long long int) var_3))))));
    /* LoopNest 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        for (long long int i_6 = 3; i_6 < 17; i_6 += 4) 
                        {
                            {
                                arr_16 [i_2] [i_5] [i_2] [i_2] [i_4] = ((/* implicit */signed char) (_Bool)1);
                                var_17 |= ((/* implicit */_Bool) (signed char)-52);
                                var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) var_0))));
                                var_19 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) 4686158635743447036ULL))) != (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)6552))))) ? (var_7) : (((/* implicit */unsigned long long int) arr_11 [0ULL] [i_5 + 1] [i_6 - 3]))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) var_3);
                /* LoopSeq 1 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_15 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [0] [i_2]))))), (max((((/* implicit */int) (_Bool)0)), (255))))))));
                    var_22 = ((/* implicit */unsigned short) ((unsigned long long int) arr_11 [18LL] [i_3] [i_7]));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) min((0LL), (((/* implicit */long long int) (-(var_9)))))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min((var_2), (((((/* implicit */_Bool) 14079678279938933665ULL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -7LL)))))))))))));
}
