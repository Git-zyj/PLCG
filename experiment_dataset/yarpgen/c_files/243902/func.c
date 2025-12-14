/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243902
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) ((unsigned long long int) (!((!(((/* implicit */_Bool) 1227346189)))))));
                var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 1227346189)), (arr_3 [i_0] [i_1] [i_0 + 2]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) ((unsigned short) ((int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (1227346198)))));
                arr_7 [i_0 + 2] [i_1] = ((/* implicit */unsigned long long int) (-(((var_6) + (1227346198)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) 1260483183U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))), ((+((+(((/* implicit */int) (short)16150))))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            {
                arr_13 [i_3] &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */_Bool) (short)1758)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21407))) : (4095U))))) << (((((/* implicit */int) (short)20293)) - (20291)))));
                arr_14 [i_3 + 1] [i_2] [i_2] = ((/* implicit */short) (+(-275695152)));
                arr_15 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) <= (7756433735325534044ULL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1227346198)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (short)14270))))) : (8307104839674993739LL))) > (((var_8) ? (7355718010427075404LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)137)) & (((/* implicit */int) (short)22679)))))))));
}
