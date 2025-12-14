/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49411
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
    var_19 ^= ((/* implicit */int) var_11);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_4)), (var_15))), (((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0])), (-1308454730))))));
        arr_3 [i_0] = min((((/* implicit */long long int) min((((/* implicit */unsigned int) 3840)), (var_17)))), (min((((/* implicit */long long int) arr_1 [i_0 + 3] [i_0 + 1])), (5840772898166839002LL))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */short) max((((/* implicit */unsigned char) var_1)), (arr_0 [i_0])))), (var_12))), (((/* implicit */short) max((((/* implicit */unsigned char) var_1)), (var_18))))));
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        for (short i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            {
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((max((var_2), (var_3))), (((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (max((((/* implicit */int) (unsigned char)173)), (var_0))))))));
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_1] [i_3] [(unsigned short)4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_7 [i_3 + 1] [i_1] [i_1])), (-7098132977835251105LL)))), (max((13446736194624781603ULL), (((/* implicit */unsigned long long int) arr_7 [i_1] [(unsigned char)7] [i_1]))))));
                    var_20 *= min((((/* implicit */int) (signed char)24)), (max((-484728768), (((/* implicit */int) (unsigned char)255)))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((arr_8 [i_2 - 1] [i_3] [i_3 + 1]), (-1)))), (min((min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_2 + 2])), (13446736194624781588ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (369634502)))))))))));
                    arr_14 [i_1] [i_1] [i_3] [i_1] = max((1800937895237787758LL), (((/* implicit */long long int) (unsigned short)27)));
                }
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                {
                    arr_17 [i_4] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) 995824830);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (signed char i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) 2161727821137838080LL);
                                var_23 += ((/* implicit */int) -9140679751902457806LL);
                                var_24 += ((/* implicit */unsigned char) (short)29756);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
