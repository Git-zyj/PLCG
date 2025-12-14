/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206200
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
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [6] [i_2 - 2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((1213985563), (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) (unsigned short)65534)) ? (3609091367U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))) : (((/* implicit */unsigned int) min((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1]))))));
                    var_18 -= arr_2 [i_2];
                    var_19 = ((/* implicit */unsigned short) max(((+(min((((/* implicit */int) var_2)), (var_13))))), ((-(((/* implicit */int) (unsigned short)40863))))));
                    var_20 = ((/* implicit */int) ((unsigned long long int) arr_6 [i_0] [i_0 - 3] [i_1] [i_2]));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) -1370122402463121769LL)) ? (var_4) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)40863)) ? (((/* implicit */int) (short)-32695)) : (((/* implicit */int) (unsigned short)1))))) : (-9093285289914011641LL)))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */_Bool) (short)-21019)) ? (3823791188U) : (((/* implicit */unsigned int) var_14)))) << (((max((((/* implicit */long long int) var_9)), (var_11))) - (955959059LL))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_12)) + (11919))))))))));
}
