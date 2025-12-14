/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44048
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
    var_18 = ((/* implicit */unsigned short) var_6);
    var_19 = ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) (_Bool)1)), (-7245771202419030165LL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))))))));
                arr_5 [i_1] [8ULL] |= ((/* implicit */short) min((arr_0 [i_1]), (max((((/* implicit */long long int) arr_3 [i_1] [i_1] [i_0])), ((~(5367519088117059951LL)))))));
                var_21 += ((/* implicit */signed char) ((arr_4 [(_Bool)1] [i_0] [i_1]) * (((arr_4 [i_1] [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (((var_17) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) var_3);
                    var_24 = ((/* implicit */_Bool) min((arr_8 [4LL]), (arr_8 [i_3])));
                    arr_14 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((_Bool) var_8));
                }
            } 
        } 
        arr_15 [i_2] = ((/* implicit */_Bool) ((arr_9 [(short)12] [(unsigned char)14] [(short)12]) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)57))))) : (min((arr_11 [0ULL]), (((/* implicit */long long int) (_Bool)1))))));
        arr_16 [(unsigned char)5] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : (arr_11 [(_Bool)1]));
    }
}
