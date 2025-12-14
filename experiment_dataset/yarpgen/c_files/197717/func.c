/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197717
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
    var_17 = ((/* implicit */unsigned long long int) var_16);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [(unsigned char)18] [(unsigned char)18] [i_1] = min((((/* implicit */unsigned long long int) min((969234667U), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_7)))))))), ((-(min((6439502921981425871ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
                var_18 ^= ((/* implicit */_Bool) min((((arr_0 [i_0]) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_2 [i_0] [i_0])))), (((((/* implicit */int) (_Bool)1)) + (-1289134707))))))));
                arr_6 [i_0] [(unsigned short)15] = ((/* implicit */_Bool) max((2412365226U), (974071400U)));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((max((min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_0])), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) arr_1 [i_1])))) / (max((((/* implicit */unsigned long long int) var_12)), (arr_0 [15]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_6);
    var_21 = ((/* implicit */short) (-(1467541237U)));
}
