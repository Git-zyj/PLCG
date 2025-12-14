/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197868
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (unsigned int i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_18 = ((((/* implicit */long long int) ((/* implicit */int) max(((short)-4719), (((/* implicit */short) arr_0 [i_2] [i_3 - 2])))))) + (((long long int) (short)-12014)));
                        var_19 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((((arr_3 [i_1]) + (2147483647))) >> (((((/* implicit */int) var_12)) - (20227)))))) & (max((((/* implicit */unsigned int) (short)-4696)), (var_11))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 12256479288936292619ULL)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) arr_1 [i_0]);
        arr_9 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned char) (short)4720))) ? (((/* implicit */unsigned long long int) ((1967924480U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) : (((((/* implicit */_Bool) (short)4719)) ? (17058791848415003601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31290))))))), (((/* implicit */unsigned long long int) ((short) ((2147483647) % (32766)))))));
    }
    for (int i_4 = 3; i_4 < 23; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) var_16);
        var_22 *= ((/* implicit */short) ((((((/* implicit */_Bool) max((var_11), (1967924467U)))) ? (var_11) : (((/* implicit */unsigned int) min((var_2), (((/* implicit */int) var_13))))))) >> (((((/* implicit */_Bool) 17058791848415003585ULL)) ? (((/* implicit */int) arr_11 [i_4 - 3])) : (((/* implicit */int) max(((short)-4719), ((short)2692))))))));
        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_17) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */int) max((((/* implicit */short) arr_10 [i_4 + 1] [i_4 - 1])), (var_5)))) : (((/* implicit */int) arr_10 [i_4] [i_4 - 1]))));
    }
    var_24 = ((/* implicit */unsigned char) ((unsigned short) min((min((1387952225294548015ULL), (((/* implicit */unsigned long long int) 1861980150U)))), (max((1387952225294548025ULL), (1799884414684622853ULL))))));
}
