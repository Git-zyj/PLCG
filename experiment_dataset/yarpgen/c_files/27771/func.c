/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27771
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) ((561979460U) % (561979452U)));
                    var_19 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) ((signed char) arr_8 [(unsigned short)9] [i_1] [i_1] [i_1]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))) * (4294967295U)));
                        var_21 = ((/* implicit */unsigned char) 3732987847U);
                        var_22 = ((/* implicit */signed char) ((short) ((arr_12 [i_0]) < (((/* implicit */unsigned long long int) 4294967290U)))));
                    }
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) arr_10 [i_2 - 1]))) < (min((((/* implicit */unsigned long long int) 4294967280U)), (11521881749952614143ULL)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((unsigned long long int) ((signed char) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((unsigned long long int) var_17)))));
    var_26 = ((/* implicit */unsigned short) var_7);
    var_27 = ((/* implicit */unsigned short) var_3);
}
