/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29087
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
    var_19 = var_3;
    var_20 ^= ((/* implicit */unsigned short) var_9);
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)65527)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)248)) * (((/* implicit */int) var_2)))), (((/* implicit */int) max(((unsigned char)227), (var_16)))))))));
                arr_6 [(unsigned short)2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65511)) / (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)227))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65516)) == (max((((/* implicit */int) var_12)), ((~(((/* implicit */int) var_5))))))));
                            arr_11 [i_3] [i_1] [(unsigned char)13] [i_2] [i_3] = (unsigned char)192;
                        }
                    } 
                } 
            }
        } 
    } 
}
