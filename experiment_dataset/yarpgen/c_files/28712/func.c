/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28712
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = var_1;
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2687093487698079458ULL)))))) : (((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) | (var_8)))) ? (((var_6) * (var_6))) : (min((15759650586011472152ULL), (var_2)))))));
            var_13 *= arr_0 [i_0];
        }
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned long long int) (~(((unsigned int) min((((/* implicit */unsigned long long int) var_9)), (2687093487698079458ULL))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        arr_15 [i_0] [(unsigned char)14] [i_3] [i_4] = ((max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), (15759650586011472143ULL))) * (min((arr_8 [i_3]), (((/* implicit */unsigned long long int) (_Bool)0)))));
                        var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_13 [i_2] [(unsigned char)2] [i_3] [i_4] [i_3]), (arr_13 [i_0] [i_0] [(_Bool)1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (~(arr_14 [i_0] [i_2])))) : (min((((var_10) % (((/* implicit */unsigned long long int) arr_12 [i_0] [i_3] [i_3])))), (((/* implicit */unsigned long long int) ((15759650586011472158ULL) == (arr_0 [i_0]))))))));
                        var_16 |= ((/* implicit */unsigned char) var_10);
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 15759650586011472164ULL))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_18 += ((/* implicit */unsigned char) var_5);
            arr_20 [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) >> (((17163091968ULL) - (17163091960ULL))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_9) << (((14922621518916811626ULL) - (14922621518916811626ULL)))))) <= ((+(arr_16 [10U] [i_0] [i_0]))))))));
        }
        var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (max((var_1), (((/* implicit */unsigned long long int) (unsigned char)65)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) ((unsigned char) (_Bool)0)))));
    }
    var_20 = ((/* implicit */long long int) var_4);
}
