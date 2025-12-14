/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25116
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [7U] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)31081))) - (((var_0) >> (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])))))) > (((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_0 [(_Bool)1]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_2)))))))))));
                    var_10 ^= ((/* implicit */unsigned int) ((14694007769952997273ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)41)))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) var_4))))))) != (max((arr_6 [i_0]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))));
                        var_11 = ((/* implicit */unsigned short) var_7);
                        var_12 = ((/* implicit */_Bool) var_5);
                        var_13 = ((/* implicit */_Bool) (unsigned char)151);
                    }
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */unsigned int) (((-(((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned char)101)) - (86))))))) & (((/* implicit */int) (_Bool)1))));
}
