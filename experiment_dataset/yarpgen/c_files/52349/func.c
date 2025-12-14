/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52349
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        arr_2 [(unsigned char)4] |= ((/* implicit */unsigned short) min((max((((/* implicit */int) arr_0 [i_0 + 4])), (536870912))), (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_16)))))));
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((min((var_3), (((/* implicit */unsigned short) arr_1 [i_0 + 4] [i_0])))), (((/* implicit */unsigned short) (!(var_15)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_19 |= ((/* implicit */unsigned char) (~(((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)105)))))));
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (~(8140079681431359738LL)));
                    var_20 ^= ((/* implicit */long long int) (+((-(((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)10244))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) min(((-(var_11))), (min((((/* implicit */long long int) arr_6 [i_0 + 3] [i_0 + 4] [i_0])), (var_7)))));
    }
    var_22 |= ((/* implicit */short) min(((unsigned char)242), (((/* implicit */unsigned char) (_Bool)1))));
    var_23 = min((min((var_10), (min((var_12), (((/* implicit */long long int) var_5)))))), (var_12));
    var_24 = ((/* implicit */short) var_16);
}
