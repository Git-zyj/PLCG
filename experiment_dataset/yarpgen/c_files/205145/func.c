/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205145
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [(_Bool)1] [(unsigned char)3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)16256))) <= ((~(arr_3 [i_0] [23])))));
                var_13 *= ((/* implicit */unsigned long long int) (_Bool)1);
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) | (arr_1 [i_0]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5420763398134666374ULL)) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_1]))))));
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) || (((/* implicit */_Bool) 13025980675574885254ULL))))))))))));
                var_15 ^= ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_10))))))), ((~((((_Bool)1) ? (13025980675574885241ULL) : (((/* implicit */unsigned long long int) 2226661263U)))))))))));
}
