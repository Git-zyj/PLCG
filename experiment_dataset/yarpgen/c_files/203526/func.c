/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203526
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
    var_13 = ((/* implicit */int) min((6600515782029223775LL), (6600515782029223775LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-858)), (16777215U)))), (max((((/* implicit */unsigned long long int) 6600515782029223796LL)), (1722133120050560430ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_3 [1]), (var_0)))), (min((-6600515782029223789LL), (((/* implicit */long long int) arr_3 [i_1])))))))));
                var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 6600515782029223782LL)), (min((((/* implicit */unsigned long long int) (signed char)0)), (16724610953658991176ULL)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_16 *= ((/* implicit */signed char) min((min((min((var_12), (((/* implicit */unsigned long long int) var_4)))), (max((var_3), (17684933165194838320ULL))))), (min((((/* implicit */unsigned long long int) 133693440U)), (16724610953658991185ULL)))));
                            var_17 = ((/* implicit */unsigned char) min((min((max((((/* implicit */unsigned long long int) var_11)), (16724610953658991176ULL))), (min((1722133120050560440ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [(unsigned short)19] [i_2] [i_3])))))), (max((min((var_12), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2 - 1] [i_2])))), (max((var_3), (((/* implicit */unsigned long long int) var_9))))))));
                            var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)101)), (4278190081U)))), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (6600515782029223788LL)))), (max((((/* implicit */unsigned long long int) (signed char)65)), (17684933165194838330ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((max((min((((/* implicit */unsigned long long int) var_6)), (var_12))), (max((18446744073709551613ULL), (var_8))))), (min((min((((/* implicit */unsigned long long int) var_4)), (1722133120050560430ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)120)), (-1))))))));
}
