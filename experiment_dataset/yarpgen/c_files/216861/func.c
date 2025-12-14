/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216861
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_2);
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) arr_4 [i_0]);
            var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_6 [i_0] [i_1]))));
        }
        var_14 = ((/* implicit */unsigned char) var_1);
    }
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((min(((((_Bool)1) ? (arr_11 [(signed char)3] [(signed char)3]) : (var_7))), (((/* implicit */unsigned long long int) (+(arr_10 [i_2] [i_2])))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) - (((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2]))) : (4294967295U))))))));
        arr_13 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967290U))));
        var_16 = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_9 [i_2] [i_2]))))));
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        arr_18 [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((long long int) arr_17 [i_3]))), (min((arr_14 [i_3] [(signed char)8]), (((/* implicit */unsigned long long int) (+(2147483647))))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) min((arr_17 [i_3]), (arr_17 [i_3])))) > (((/* implicit */int) ((((/* implicit */int) arr_17 [i_3])) < (((/* implicit */int) (_Bool)1))))))))));
        var_18 &= ((((_Bool) 4294967295U)) ? ((-(((/* implicit */int) arr_16 [i_3])))) : ((-(((/* implicit */int) ((signed char) arr_16 [i_3]))))));
        arr_19 [i_3] = ((/* implicit */short) min((arr_15 [i_3]), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (_Bool)1)), (4294967273U))), (((/* implicit */unsigned int) (!((_Bool)1)))))))));
    }
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) 4294967284U)) ? (var_2) : (var_2))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((0U) > (((/* implicit */unsigned int) var_10))))))))) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (var_11))) + (62)))));
    var_20 = ((/* implicit */unsigned short) ((unsigned long long int) var_12));
    var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_3)))) ? (((/* implicit */long long int) ((var_10) / (((/* implicit */int) var_9))))) : (min((((/* implicit */long long int) var_4)), (7480858976805482499LL)))))));
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ^ (((var_2) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) 4294967295U)))))))))));
}
