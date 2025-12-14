/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241733
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) 137170518016LL)) : (var_2))), (arr_4 [i_2])));
                            arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) min((234357639U), (((/* implicit */unsigned int) var_7))))) : (var_1)))) == (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_2 [i_3] [i_1])) : (var_8))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0])))))))));
                            var_12 = ((/* implicit */short) ((7801508331631317290ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((arr_1 [i_0] [i_0]) << (((var_8) - (13798497860531142436ULL))))))))));
                        }
                    } 
                } 
                var_13 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 234357631U)))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_14 = var_9;
                            arr_16 [i_0] [i_4] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) arr_13 [i_0] [i_1] [i_4])))) : (((((/* implicit */int) (short)12485)) >> (((2047) - (2039)))))))) & ((-(10931388797114534503ULL)))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */int) var_3);
            }
        } 
    } 
    var_16 &= ((/* implicit */unsigned long long int) max((((unsigned char) var_3)), (((unsigned char) var_8))));
}
