/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243951
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) (signed char)-59);
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((min((-1143709870), (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])))) / (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1143709878)) ? (((/* implicit */long long int) -1143709855)) : (2305843000623759360LL)))) && (((/* implicit */_Bool) 2803909492U))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((signed char) max((2305843000623759360LL), (992938885208782360LL))));
                var_18 += ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1 + 1]))))), (max((-281474976710656LL), (((/* implicit */long long int) 1915454880))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            {
                arr_13 [i_2] [i_3] [(unsigned char)6] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_2])))), (((((/* implicit */_Bool) -1915454873)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_2 [i_2]))))));
                arr_14 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_2]);
            }
        } 
    } 
    var_19 += ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_14))))) <= (min((((/* implicit */long long int) ((signed char) var_7))), (var_12)))));
    var_20 -= ((/* implicit */unsigned char) var_11);
    var_21 = ((((((/* implicit */_Bool) max((((/* implicit */long long int) -1143709870)), (var_12)))) ? (min((((/* implicit */long long int) (short)32760)), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_0))))))) >= (((/* implicit */long long int) (~(((/* implicit */int) var_8))))));
}
