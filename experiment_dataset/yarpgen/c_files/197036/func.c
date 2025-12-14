/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197036
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max((var_5), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) -236633149)), (arr_2 [i_0] [i_1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) (unsigned char)249)))))))))));
                    var_15 = var_2;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) 2761646022U))))))));
                        var_18 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_3 [i_1] [i_2] [i_3 - 2])))));
                        var_19 = ((/* implicit */long long int) (unsigned short)65535);
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_2);
    var_21 = ((((/* implicit */_Bool) max((((unsigned char) var_5)), (max((((/* implicit */unsigned char) var_4)), ((unsigned char)241)))))) ? (((/* implicit */int) ((unsigned short) max(((unsigned short)44636), (((/* implicit */unsigned short) var_1)))))) : (var_3));
}
