/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215960
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) max((363509962U), (363509962U)))) - (var_7))) - (max((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) ((long long int) arr_11 [i_0] [i_1] [i_2] [i_3])))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0])), (arr_0 [i_0] [i_0])))))) / (var_9)))));
                            var_15 |= ((/* implicit */unsigned long long int) arr_3 [i_0]);
                            var_16 = ((/* implicit */unsigned short) ((((unsigned int) arr_8 [i_1 - 1] [i_1 + 3] [i_4])) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_4] [i_1 + 3] [i_2]))))));
                        }
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((int) arr_4 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (var_1)));
                    var_19 -= ((/* implicit */signed char) min((6667409034488959466LL), (((/* implicit */long long int) 3931457333U))));
                }
            } 
        } 
        var_20 &= ((/* implicit */signed char) min((((((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (!(((3543372187U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)16384))))))))));
        var_21 |= ((/* implicit */short) (+(((((((/* implicit */_Bool) var_2)) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])))) + (((/* implicit */int) (_Bool)0))))));
    }
    var_22 = ((/* implicit */long long int) var_7);
}
