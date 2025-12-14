/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217572
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
    var_11 = ((/* implicit */unsigned char) (-(var_7)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) max((7286477241314958442ULL), (((/* implicit */unsigned long long int) var_7))))))));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (-(((long long int) -2134402178)))))));
                    var_14 = ((/* implicit */long long int) ((-1756070518) + (((/* implicit */int) arr_1 [i_0] [i_2]))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */unsigned long long int) var_0);
                        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 2157445443115912801LL)) ? (7286477241314958463ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1266))))) : (((/* implicit */unsigned long long int) arr_8 [i_3 - 2] [i_1] [i_1 - 1] [i_1] [(_Bool)1])))) == (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_4)) >> (((((/* implicit */int) (short)19971)) - (19942))))))))));
                        var_16 &= (+(((/* implicit */int) (unsigned char)6)));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 3; i_4 < 17; i_4 += 2) /* same iter space */
                    {
                        arr_14 [i_0] [19U] [i_0] [i_1] = ((/* implicit */short) arr_4 [i_2 + 1] [(unsigned short)3] [i_2]);
                        var_17 = (-(11160266832394593174ULL));
                        arr_15 [i_1] [i_1] [i_1 + 1] [i_4] = ((/* implicit */unsigned short) 288230376151711743LL);
                    }
                }
            } 
        } 
    } 
}
