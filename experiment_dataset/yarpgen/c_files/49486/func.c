/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49486
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_10)), (((short) var_11)))))));
    var_14 = ((/* implicit */long long int) min((var_0), (var_7)));
    var_15 &= ((/* implicit */unsigned short) (_Bool)0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_2 [i_0] [i_1 + 1]))));
                var_17 ^= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_4))) && ((((_Bool)1) || ((_Bool)0)))))), (var_1)));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */int) var_7);
                    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_9))))), (((unsigned char) 10883171789662897058ULL))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2 - 1] [8] [8])) + (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])) ^ (10883171789662897058ULL)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [16ULL] [i_0] [i_0])), (var_3)))) : ((+(arr_2 [i_0] [i_0])))))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((long long int) var_9)))));
                }
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) ((3065202892U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))))));
                        var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_2))));
                    }
                    var_23 &= ((/* implicit */unsigned char) ((signed char) ((int) arr_2 [(_Bool)1] [i_1])));
                    var_24 = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        } 
    } 
}
