/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21163
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)25070)), (-43703941)));
                arr_6 [i_1 - 1] = ((/* implicit */unsigned short) min((((((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) (unsigned char)15))))) | (((/* implicit */int) var_13)))), (((/* implicit */int) (unsigned short)36187))));
                var_19 &= ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) / (var_9)))) ? (43703952) : (((((/* implicit */int) var_5)) + (((/* implicit */int) var_3)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] = var_3;
                            arr_14 [i_0] [i_1] [(unsigned short)13] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (unsigned short)65527))) >> (((((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))) - (77)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) ((int) min((((((/* implicit */int) var_13)) << (((((/* implicit */int) var_13)) - (100))))), (((((/* implicit */int) var_18)) % (((/* implicit */int) (short)5021)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */int) (_Bool)1)), (43703940))), (((/* implicit */int) (short)-32760))))) ? ((-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)6)), ((unsigned char)197)))))) : (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (short)31849)) : (((/* implicit */int) (unsigned short)42410))))));
}
