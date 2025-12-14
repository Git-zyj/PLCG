/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201649
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
    var_13 = ((/* implicit */int) min((((/* implicit */long long int) ((var_10) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_3))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    var_14 *= ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [(unsigned short)3] = ((/* implicit */short) ((1010775202) > (((/* implicit */int) (unsigned char)178))));
                var_15 = ((/* implicit */short) ((((max((((/* implicit */unsigned int) var_1)), (var_10))) == (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((signed char) var_9))) : ((+(var_5)))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_13 [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */short) var_1)), (var_3))));
                            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)81))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)81)) || (((3743079357525426833ULL) != (((/* implicit */unsigned long long int) 2016397595U))))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */long long int) var_11)) : (var_2)))) ? (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) var_11))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)32))));
            }
        } 
    } 
}
