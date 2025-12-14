/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26517
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_17 |= ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) -5692252542534335576LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22)))))))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_2 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_0 [15LL] [15LL]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                    var_18 = ((/* implicit */short) ((max(((!(((/* implicit */_Bool) arr_5 [(unsigned char)18])))), (((((/* implicit */_Bool) arr_6 [i_1] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)13] [i_2] [i_2])))))) || ((!((!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))), ((+(((/* implicit */int) var_2))))));
}
