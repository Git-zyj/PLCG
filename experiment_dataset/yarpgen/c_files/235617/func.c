/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235617
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_15 += ((/* implicit */int) (!(((/* implicit */_Bool) 1074521127U))));
        var_16 &= ((/* implicit */unsigned int) 3012338459365055045ULL);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_17 |= ((/* implicit */unsigned int) arr_5 [i_0 - 2] [i_1] [i_2]);
                        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(max((var_13), (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 3] [i_0 - 1]))))));
                        var_18 -= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((3012338459365055054ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15872))))))) >= (((unsigned long long int) var_8)))) ? (((((/* implicit */_Bool) 2763355317051019654LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [10U]))))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4095))) : (-2763355317051019654LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) max(((short)-15873), (((/* implicit */short) arr_5 [i_0 + 1] [i_2] [i_3 + 1]))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 12; i_4 += 1) 
        {
            for (int i_5 = 3; i_5 < 13; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) -2079825413)), (arr_10 [i_0 + 1] [i_4] [i_0 - 1])))));
                    arr_13 [i_0] [i_4] [i_5 - 1] = ((/* implicit */unsigned int) 15997229716710799523ULL);
                    var_20 -= ((/* implicit */int) (short)-4100);
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */int) var_10);
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (min((6458759005577462231ULL), (((/* implicit */unsigned long long int) (short)4081)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (var_2))), ((!(((/* implicit */_Bool) var_7)))))))))))));
}
