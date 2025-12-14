/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29800
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((long long int) 1239977528U)))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (signed char)55))))))) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) var_13))));
    var_16 += ((/* implicit */_Bool) (unsigned char)46);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) ((signed char) (unsigned char)57))))));
                            var_18 = ((/* implicit */unsigned short) (((~(arr_4 [i_0]))) * (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_2 [i_0] [i_0 - 1])))) + (((/* implicit */int) min(((unsigned char)40), ((unsigned char)218)))))))));
                            arr_12 [i_0] [i_1] = ((/* implicit */signed char) (-(((9219164116931025559LL) / (var_8)))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
                arr_14 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((_Bool) 1239977528U))), (((unsigned int) max(((unsigned char)57), (((/* implicit */unsigned char) arr_1 [i_1 + 1])))))));
            }
        } 
    } 
}
