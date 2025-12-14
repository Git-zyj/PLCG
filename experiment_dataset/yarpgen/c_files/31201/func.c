/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31201
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
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (6817312407258919748ULL))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) (~(var_9))))) * (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11368))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (signed char)-23))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) 1876518640631929358LL);
                                var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-2216))) > (-1876518640631929361LL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) 8755515560598041422ULL))))), ((~((-9223372036854775807LL - 1LL)))))))))));
                                var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) min((min((((/* implicit */long long int) (short)-9350)), (var_1))), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))))))));
                                var_26 = ((/* implicit */signed char) ((((unsigned long long int) ((short) -24LL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_5])))));
                                var_27 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (arr_11 [i_6] [10ULL] [i_2] [i_1] [i_0])))) ? (((/* implicit */int) (short)17229)) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10)))))));
                                var_28 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */short) (signed char)35)), ((short)-17235)))), (4041308841077090824LL)));
                            }
                        } 
                    } 
                    var_29 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_1] [i_0])) ? (arr_11 [(signed char)1] [i_1] [i_0] [i_1] [(signed char)1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28))))) != (max((arr_11 [i_0] [9ULL] [i_1] [9ULL] [9ULL]), (arr_11 [i_0] [i_0] [i_0] [i_2] [i_2])))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned short) var_18);
}
