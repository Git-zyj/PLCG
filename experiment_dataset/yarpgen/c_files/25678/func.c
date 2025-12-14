/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25678
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (~(var_13)))) ? (min((var_13), (((/* implicit */unsigned long long int) (unsigned char)157)))) : (((/* implicit */unsigned long long int) -1615372389514225479LL)))));
                var_20 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) arr_3 [(unsigned short)4])) : (-6917460661334925443LL))), (((-6917460661334925457LL) % (((/* implicit */long long int) ((/* implicit */int) (short)10186))))))))));
                var_21 = ((/* implicit */int) var_0);
                arr_4 [i_0] [i_0] = ((((/* implicit */int) ((short) ((2975729415U) & (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))))) & (((/* implicit */int) ((short) ((((/* implicit */_Bool) 1319237880U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) : (2975729436U))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_8))));
    var_23 = ((/* implicit */unsigned char) 7705255845697443479ULL);
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                var_24 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) 3345905789U))) >> (((((long long int) arr_6 [i_2])) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65510))) : (var_2))))))));
                arr_13 [i_2] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (9827985933703983780ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) min((-6917460661334925443LL), (((/* implicit */long long int) arr_0 [i_3] [i_2]))))) : (18185718218518054419ULL))));
                arr_14 [i_3] |= ((/* implicit */unsigned int) ((int) ((unsigned short) min((((/* implicit */int) (unsigned short)65526)), ((-2147483647 - 1))))));
                var_25 ^= ((/* implicit */unsigned short) (((((+(2313616434U))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1038))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-104), ((signed char)(-127 - 1)))))) / (min((var_5), (5U))))) : (((/* implicit */unsigned int) ((int) (unsigned char)17)))));
                arr_15 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)50500)), (2554159454U)))) ? ((-(1615372389514225478LL))) : (((/* implicit */long long int) ((unsigned int) (short)13149)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16383))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (0ULL) : (((/* implicit */unsigned long long int) -1615372389514225471LL))))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-88)), (4250566276U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (arr_11 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3])))))));
            }
        } 
    } 
}
