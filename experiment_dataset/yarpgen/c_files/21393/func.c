/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21393
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
    var_13 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)24381)) ? (((/* implicit */int) (short)-24934)) : (((/* implicit */int) max(((unsigned short)24390), (((/* implicit */unsigned short) (signed char)-49)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [12] [12] &= ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */int) (short)24952)), (-954385390))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)60)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)10] [(unsigned char)2])) ? (((/* implicit */int) arr_5 [0LL] [i_1] [i_1 + 3])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 2])))))));
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) max(((unsigned short)41154), (((/* implicit */unsigned short) (unsigned char)63)))))));
            }
        } 
    } 
    var_15 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) / (3095443396553266110LL)))) ? (((/* implicit */int) min((var_5), (((/* implicit */short) (unsigned char)60))))) : (((((/* implicit */_Bool) var_5)) ? (985151446) : (((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) & (-3282830156603400107LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (max((((/* implicit */long long int) (_Bool)1)), (1623920294533144405LL))))));
}
