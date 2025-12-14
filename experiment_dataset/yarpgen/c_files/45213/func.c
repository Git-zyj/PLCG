/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45213
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
    var_11 = ((/* implicit */int) ((short) (~(min((0LL), (((/* implicit */long long int) var_4)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_0]))))) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (-480980886)))), (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_10)))))));
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) ((18251921895086844621ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (arr_5 [i_1]) : (arr_5 [i_1]))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
    {
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned short) ((var_3) || (((/* implicit */_Bool) var_2))))), (var_7))), (arr_13 [(signed char)2] [(signed char)2])));
                                var_15 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_5])), (var_10)))))) ? ((~(var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                                arr_19 [i_2] [i_3 - 1] [i_2] [i_4] [i_4] = ((/* implicit */short) arr_8 [i_5]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) arr_18 [i_2 - 3]))))) ^ (((unsigned long long int) ((((/* implicit */_Bool) arr_22 [0ULL])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                            var_17 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_23 [i_2 - 3] [i_2 - 3] [i_2 - 3] [(_Bool)1]) != (((/* implicit */int) ((unsigned char) var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((var_3) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)));
}
