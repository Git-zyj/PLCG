/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43202
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) << (((-1780251534776709624LL) + (1780251534776709642LL)))))) || (((/* implicit */_Bool) (~(((arr_2 [i_0] [i_0]) * (((/* implicit */int) arr_0 [i_0] [i_0]))))))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned long long int) arr_0 [i_0] [i_3]);
                                var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8581)) + (((/* implicit */int) (_Bool)0))));
                                var_16 += ((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_4]);
                            }
                        } 
                    } 
                } 
                var_17 += min((arr_7 [i_0] [i_0] [19ULL] [19ULL] [(short)19]), (((/* implicit */signed char) ((_Bool) ((arr_9 [i_1] [(signed char)0] [i_0] [i_0] [i_0] [i_0] [i_1]) >> (((((/* implicit */int) arr_6 [20] [i_0] [i_0] [i_1])) - (215))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((min((var_10), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7))))))))))));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            {
                var_19 += min(((~(((((/* implicit */unsigned long long int) arr_9 [16LL] [i_6] [i_5] [i_5] [i_6] [i_6] [(signed char)8])) % (arr_8 [(signed char)4] [(signed char)0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_11 [(unsigned char)10]), (arr_5 [i_5] [i_6] [i_5] [i_5]))))) % (((arr_3 [(short)5] [i_6] [i_6]) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5] [i_6])))))))));
                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [(signed char)4])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(signed char)0]))) ^ (arr_8 [i_5] [20ULL])))))) && (((/* implicit */_Bool) min((((unsigned long long int) arr_3 [i_5] [20ULL] [i_6])), (((/* implicit */unsigned long long int) ((arr_14 [6] [i_6] [(_Bool)1]) && (((/* implicit */_Bool) arr_13 [4] [4] [i_6]))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) (!(((((unsigned long long int) var_2)) <= (min((var_0), (var_0)))))));
}
