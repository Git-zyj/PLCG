/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46936
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
    var_10 ^= ((/* implicit */unsigned char) var_1);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                for (int i_3 = 3; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */unsigned short) -1864503244);
                        arr_11 [i_0 - 3] [i_1] [i_2] [i_2] [i_3 - 3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1864503242)) ? (9223372036854775807LL) : (((/* implicit */long long int) 1414675790U))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */unsigned long long int) (unsigned char)139);
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(67092480))))));
        var_13 *= ((/* implicit */unsigned int) max((((((((/* implicit */int) (unsigned short)25919)) & (((/* implicit */int) (_Bool)1)))) << (((-1431586852) + (1431586857))))), (((/* implicit */int) (unsigned short)18126))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (unsigned short i_5 = 1; i_5 < 11; i_5 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned short)54783)))), (-67092477)));
                    var_15 = 2477952204U;
                    arr_17 [i_0] [i_4] [i_5] = ((/* implicit */_Bool) min((((/* implicit */long long int) 2880291526U)), (9223372036854775779LL)));
                }
            } 
        } 
    }
}
