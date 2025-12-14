/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29283
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
    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_14 |= ((/* implicit */unsigned long long int) (~((+(262143LL)))));
                                var_15 ^= ((/* implicit */short) min((130255499), (((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_6 [i_0])))) << (((var_5) - (9699269641602125794ULL)))))));
                                arr_13 [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) (+(max((130255499), (((/* implicit */int) (!(arr_9 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4]))))))));
                                var_16 *= ((/* implicit */unsigned long long int) (~(-3904729276081108091LL)));
                                var_17 = ((/* implicit */_Bool) (+(130255499)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-((+((-(var_6))))))))));
                        arr_17 [i_0] [i_0] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (-(((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_8)))))))), ((-((~(960330395U)))))));
                        var_19 += ((/* implicit */long long int) (-((+(((/* implicit */int) arr_15 [i_5] [i_2] [i_1]))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((3334636901U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))))))));
                                var_21 += ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)127), (((/* implicit */signed char) (_Bool)1)))))))), (((int) arr_1 [i_0]))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_0] [i_1] = max((((/* implicit */long long int) (signed char)16)), (-3904729276081108091LL));
                }
            } 
        } 
    } 
}
