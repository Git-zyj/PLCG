/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200998
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) arr_7 [i_2])) <= (((((/* implicit */long long int) (~(((/* implicit */int) var_4))))) | ((~(var_19)))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_7))))) >> (((((((/* implicit */_Bool) -8357447328702347107LL)) ? ((~(-5932427284836806555LL))) : (((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_1] [3])), (arr_2 [i_2] [i_1] [i_2])))))) - (5932427284836806532LL)))));
                            var_22 = ((/* implicit */_Bool) (~((~(((((/* implicit */int) arr_0 [i_2])) % (((/* implicit */int) (unsigned char)243))))))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1])), ((+(var_1)))));
                arr_12 [(unsigned char)3] = ((/* implicit */unsigned char) var_19);
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_17))));
    var_24 = ((/* implicit */unsigned char) var_14);
    var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) ? (((((/* implicit */long long int) var_15)) | (5932427284836806557LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_14)) | (var_6))))))) ? (var_16) : (((/* implicit */long long int) var_11))));
}
