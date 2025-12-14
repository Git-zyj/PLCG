/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224598
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
    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (!(var_10))))) || (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_17)), (var_13))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_10)), (var_15)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_1 [i_1 + 1])))) || (((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_1 + 1] [i_1 - 1])))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) 456457008);
                            var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_8 [i_0] [i_0] [i_0] [(short)10] [(short)10] [i_3]), (arr_8 [i_3] [i_3] [i_0] [i_1] [i_0] [i_0]))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))) - (8325793266552572336LL)));
                        }
                    } 
                } 
                var_24 += ((/* implicit */short) 1730802268626954895ULL);
                var_25 = ((/* implicit */int) ((long long int) (~(arr_1 [i_0]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
    {
        for (unsigned int i_5 = 2; i_5 < 17; i_5 += 4) 
        {
            for (signed char i_6 = 2; i_6 < 16; i_6 += 4) 
            {
                {
                    var_26 += ((/* implicit */short) arr_12 [i_4 + 2] [i_4 + 2] [i_6]);
                    arr_17 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-1)) ? (arr_13 [i_4] [(short)10] [i_4] [i_4]) : (arr_15 [i_4] [i_4] [i_4] [i_4]))) / (min((var_0), (arr_16 [i_5] [i_5] [i_5] [4])))))) ? ((+(((/* implicit */int) (_Bool)0)))) : ((-(((1887239759) / (arr_14 [i_4] [i_4] [i_4])))))));
                    var_27 = (+(max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) (+((-2147483647 - 1))))))));
                }
            } 
        } 
    } 
}
