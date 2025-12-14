/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49389
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) max((min((max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1])), (12471428026024838025ULL))), (min((((/* implicit */unsigned long long int) var_18)), (5975316047684713591ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max(((unsigned short)41249), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]))))), (max((arr_10 [i_0] [i_1] [i_0] [i_3]), (((/* implicit */long long int) (signed char)103)))))))));
                                var_20 = max((max((max((3324802130631364066LL), (((/* implicit */long long int) var_12)))), (min((((/* implicit */long long int) (unsigned short)23825)), (9223372036854775807LL))))), (min((max((arr_10 [i_4] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) max((((/* implicit */short) arr_5 [i_2] [i_3] [i_4])), ((short)-19640)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) min((min((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (1ULL))), (min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_2])), (arr_4 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min((var_16), (arr_11 [i_0] [i_1] [i_2])))), (min(((unsigned short)41717), (((/* implicit */unsigned short) (unsigned char)123)))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((max((min((((/* implicit */unsigned int) (unsigned short)24286)), (var_13))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)0)), (var_18)))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) min((((/* implicit */short) var_5)), (var_14)))), (max((((/* implicit */unsigned short) (unsigned char)177)), ((unsigned short)41257))))))));
    var_23 = ((/* implicit */long long int) max((max((min((4294967289U), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) min((var_12), (((/* implicit */signed char) var_0))))))), (((/* implicit */unsigned int) min((min((var_1), (((/* implicit */unsigned short) var_10)))), (min(((unsigned short)41251), (((/* implicit */unsigned short) var_17)))))))));
}
