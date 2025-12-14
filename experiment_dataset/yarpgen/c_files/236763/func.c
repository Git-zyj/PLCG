/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236763
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
    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_5), (var_3)))) ^ (((/* implicit */int) var_4)))) | ((-(((/* implicit */int) var_9))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) & (((arr_0 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_5 [5ULL] = ((/* implicit */unsigned char) (+(2616525433038811142LL)));
            var_17 = ((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) 9223372036854775807LL)));
        }
        for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
        {
            arr_8 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) arr_6 [i_0] [i_2] [i_2]);
            arr_9 [11ULL] [i_2] = ((/* implicit */unsigned char) ((10504938193815240570ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((arr_0 [i_0]), (arr_2 [i_0]))))))));
            var_18 -= ((/* implicit */short) arr_6 [i_0] [i_2] [i_0]);
        }
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_19 = ((/* implicit */long long int) 12211218886224163430ULL);
            var_20 = ((/* implicit */unsigned long long int) ((max((((arr_6 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))), (((/* implicit */unsigned long long int) arr_12 [2ULL] [i_3])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
            var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) 966153029521649017ULL)));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_18 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_2 [i_5]) % (arr_2 [i_0]))))));
                    arr_19 [i_5] = ((/* implicit */long long int) arr_7 [i_5] [i_4] [(short)1]);
                }
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0]))) - (var_0))), (((unsigned long long int) (short)1)))))));
        /* LoopSeq 1 */
        for (short i_6 = 3; i_6 < 11; i_6 += 1) 
        {
            arr_23 [i_6] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((var_6) != (((((/* implicit */_Bool) ((unsigned char) 966153029521649017ULL))) ? (17480591044187902599ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11151639016363196708ULL)) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) (short)-1)))))))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 2; i_7 < 9; i_7 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) (short)-32717);
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_7 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((arr_1 [i_0]) - (7181495648313251139ULL)))))))))));
            }
        }
    }
}
