/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49807
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned char) var_1);
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) (+(((((/* implicit */int) ((unsigned short) (signed char)16))) << (((((/* implicit */int) ((signed char) -990643335))) - (99)))))));
                                arr_13 [i_0] [i_1] [1] [i_2] [i_4] [(unsigned short)11] = arr_12 [i_0] [i_1] [i_1] [(_Bool)1] [i_4];
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] = (-(min((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_1) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [2] [i_0])) : (((/* implicit */int) var_7)))))));
                arr_15 [i_1] [i_1] [i_0] = ((/* implicit */signed char) (_Bool)0);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_0);
    var_13 *= ((/* implicit */unsigned char) ((var_2) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned char) var_2)))))))) : (((/* implicit */int) var_7))));
    var_14 = ((/* implicit */unsigned char) ((unsigned short) var_5));
}
