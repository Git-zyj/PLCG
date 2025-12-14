/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44276
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), ((((~(((/* implicit */int) var_0)))) < (((/* implicit */int) ((17470504570069651889ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23159))))))))));
                                arr_15 [i_4] [i_0 + 4] [i_1] [i_4] [i_2] [i_3] [i_0 + 4] = max(((+((~(704529011))))), ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)15)))))));
                                var_17 = ((/* implicit */short) max((((/* implicit */unsigned short) ((-477432025) != (((/* implicit */int) arr_12 [i_4 + 1] [i_4] [i_2] [i_2] [i_4] [i_0 + 3]))))), ((unsigned short)11356)));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */signed char) 8704259320576012592LL);
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_23 [i_0 + 2] [i_1] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0])) ? (arr_17 [i_0 + 1] [i_0 + 1]) : (arr_17 [i_0 + 1] [i_0 + 1])))));
                            var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 137438951424ULL)) ? (arr_13 [i_0 + 2] [i_0] [i_0 + 3] [16U] [i_1] [i_1] [3ULL]) : (arr_13 [i_0] [i_0] [i_0 + 1] [i_5] [i_0 + 1] [(unsigned char)9] [i_6]))) * (((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 2]), (arr_10 [i_0 + 3] [i_0 - 1] [i_0 + 3] [i_0 + 4])))))));
                            var_20 = ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_3);
}
