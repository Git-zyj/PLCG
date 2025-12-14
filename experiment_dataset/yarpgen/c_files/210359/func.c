/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210359
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
    var_16 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)248)))) : (((/* implicit */int) max((var_7), (var_11)))))) ^ (((/* implicit */int) var_12))));
    var_17 = ((/* implicit */unsigned short) var_5);
    var_18 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)17806)) % (((/* implicit */int) (unsigned char)113))))))) ? (((/* implicit */int) max(((unsigned char)159), ((unsigned char)31)))) : ((+(((/* implicit */int) (unsigned short)65535))))));
                arr_5 [i_0] [i_1] [(unsigned short)5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [(unsigned char)5] [i_0] [i_1])) <= (((/* implicit */int) min(((unsigned short)59297), (((/* implicit */unsigned short) (unsigned char)141)))))))), (var_8)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]);
                            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3]))));
                            var_21 = var_5;
                        }
                    } 
                } 
            }
        } 
    } 
}
