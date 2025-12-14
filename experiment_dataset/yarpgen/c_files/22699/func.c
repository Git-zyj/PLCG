/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22699
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
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (var_0)))) ? ((+(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) (unsigned short)50179))))))), (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_1 + 1]))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_0)))))));
                arr_7 [i_0] [i_1 - 1] = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned short)65535)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (short i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_11 [i_2] [i_3 + 1])), (var_12)))) > (var_7))) ? (((/* implicit */int) ((var_3) > ((-(((/* implicit */int) var_14))))))) : (((((/* implicit */int) arr_11 [i_3 + 3] [i_3 + 3])) - (((/* implicit */int) arr_10 [i_3 + 2] [i_3 + 3] [i_2]))))));
                var_17 = (-(max((max((((/* implicit */int) (unsigned char)50)), (-1242833858))), ((~(((/* implicit */int) (unsigned short)25)))))));
                var_18 = ((/* implicit */int) max((var_18), (max((((/* implicit */int) ((((/* implicit */int) arr_11 [i_3 + 1] [i_3])) <= (((int) var_11))))), (((((/* implicit */int) arr_8 [(unsigned char)22])) ^ (((/* implicit */int) var_14))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)20), (((/* implicit */unsigned short) var_8)))))))))));
}
