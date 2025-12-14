/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37998
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
    var_19 = ((/* implicit */signed char) max((max((((/* implicit */int) max((((/* implicit */short) var_17)), (var_18)))), (max((((/* implicit */int) var_14)), (539909600))))), (min((min((((/* implicit */int) (short)32767)), (2120212294))), (((/* implicit */int) min(((short)255), ((short)17702))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */short) min((max((max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_1])))), (((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) arr_0 [i_1]))))))), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) (short)-17697)), (arr_2 [i_1]))), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)83)), ((short)17708)))))))));
                var_20 = ((/* implicit */signed char) min((max((max((arr_1 [i_1]), (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) max((((/* implicit */short) arr_4 [i_1] [i_1] [i_0])), (arr_3 [i_1] [i_1])))))), (((/* implicit */long long int) max((((/* implicit */short) max(((signed char)110), (arr_4 [i_0] [i_1] [i_0])))), (max((((/* implicit */short) (signed char)(-127 - 1))), (var_14))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) max((((/* implicit */int) max((arr_0 [i_1]), (arr_0 [i_0])))), (max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (-652721527)))))), (max((min((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1])), (var_1))), (((/* implicit */long long int) max((((/* implicit */int) (signed char)-107)), (var_15))))))));
                var_21 = ((/* implicit */long long int) max((max((max((2147479552U), (((/* implicit */unsigned int) (short)-16419)))), (((/* implicit */unsigned int) max((((/* implicit */short) var_7)), ((short)-17697)))))), (((/* implicit */unsigned int) min((((/* implicit */short) min((arr_4 [i_0] [i_0] [i_0]), ((signed char)-80)))), (max((((/* implicit */short) var_7)), (var_14))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((min((max((var_1), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (var_11)))))), (((/* implicit */long long int) max((max((var_4), (var_4))), (min((939524096U), (((/* implicit */unsigned int) var_13))))))))))));
}
