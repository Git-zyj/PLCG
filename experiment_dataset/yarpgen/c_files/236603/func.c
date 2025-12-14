/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236603
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((_Bool) var_3))), (((((/* implicit */long long int) var_10)) - (var_9)))))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) == (var_4)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                var_20 &= ((/* implicit */unsigned long long int) (-((((+(((/* implicit */int) arr_7 [(short)8] [i_1])))) * (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_6 [i_1]))))))));
                arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max(((-(11286006366871919490ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57344)) < (((/* implicit */int) (unsigned short)8191)))))))) ? (((/* implicit */unsigned long long int) ((var_6) ? (((2539142056U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (arr_5 [9U] [(unsigned char)1] [(_Bool)1])))) : (((((((/* implicit */_Bool) arr_2 [(unsigned char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [4]))) : (var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16516)))))));
            }
        } 
    } 
    var_21 = ((max(((~(0ULL))), (((/* implicit */unsigned long long int) 4294967295U)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9831))));
    var_22 = ((/* implicit */short) var_11);
    var_23 = var_5;
}
