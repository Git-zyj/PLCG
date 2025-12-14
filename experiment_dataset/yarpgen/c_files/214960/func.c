/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214960
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
    var_17 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_13))))), ((+(262142U))))), (((/* implicit */unsigned int) -1231489551))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (((long long int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 -= ((/* implicit */unsigned short) 2841792055U);
                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) 4294705154U))), (3990620536054395292LL)));
                var_21 -= ((/* implicit */signed char) max(((~(5325620027766271566ULL))), (((/* implicit */unsigned long long int) (~(arr_1 [i_1 - 1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
    {
        for (short i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) max(((signed char)-124), ((signed char)1)))))))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) ^ (max((((/* implicit */int) max((arr_4 [i_2] [i_2] [i_2]), (arr_10 [i_2] [i_3] [i_2])))), (((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned short)14011))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((var_11) ? (((/* implicit */long long int) (-(((/* implicit */int) var_14))))) : (var_1)));
}
