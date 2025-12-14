/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50168
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) (_Bool)0);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) var_8);
                                arr_16 [12] [i_0] [i_0] [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) arr_13 [0ULL] [i_3 - 4] [2LL] [9ULL] [i_4] [i_4]);
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0]);
                var_13 |= ((/* implicit */short) arr_1 [i_0 - 1] [i_0 - 1]);
                var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-4952258807377318828LL)))) <= (((/* implicit */int) (unsigned char)144))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((var_0) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2933893482U)) || (((/* implicit */_Bool) 329371450U)))))) <= (var_7)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_17 [i_6] [i_5])), (((var_3) << (((((/* implicit */int) arr_7 [i_5] [i_5] [i_5])) + (30544))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2933893484U)) > (min((var_6), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_6] [i_6] [i_5])) ? ((+(((/* implicit */int) (short)-28354)))) : (((/* implicit */int) (unsigned short)53531))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */unsigned int) var_8);
    var_19 += ((/* implicit */unsigned char) (!((_Bool)1)));
}
