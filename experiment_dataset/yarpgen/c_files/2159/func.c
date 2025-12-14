/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2159
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((_Bool) -4215719734456386575LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3351569948U)))))));
                    var_11 = (!(((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)10546)), ((unsigned short)28053))))))));
                    var_12 ^= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)-20817)) != (((/* implicit */int) (short)-10560))))), (min((462747726U), (((/* implicit */unsigned int) (_Bool)0))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) 3832219569U))));
}
