/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200850
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
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-35))))) ? (((/* implicit */int) arr_6 [i_2] [(unsigned char)12] [i_0])) : (((/* implicit */int) (((((_Bool)1) && (((/* implicit */_Bool) 3066943658U)))) && (((((/* implicit */_Bool) 2651626494U)) || (((/* implicit */_Bool) (unsigned short)4136)))))))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((-7207397673847368048LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))));
                    arr_11 [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (unsigned short)34764)), (arr_8 [i_1]))) & (((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) * (((/* implicit */int) var_5)))))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)15963))))))));
                    arr_12 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (signed char)-64);
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) - (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) var_5))))));
        arr_14 [i_0] = (_Bool)1;
    }
    var_16 = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_6))))) ^ (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)30771)) - (30744))))))) ^ (((/* implicit */int) var_6))));
}
