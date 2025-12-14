/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49981
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((2749273271U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) >= (((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_8))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (2628728365U)))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) ((((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)-19867)))) * (((/* implicit */int) ((arr_5 [i_0] [i_1] [i_1] [i_2]) <= (var_5)))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) + (arr_5 [(unsigned short)18] [i_2] [(unsigned short)18] [(unsigned short)18])))) || (((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [i_2]) & (9223372036854775781LL)))))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) != (var_0))) && (((/* implicit */_Bool) ((4058092923U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) <= (((((/* implicit */int) ((((/* implicit */long long int) 140450590U)) < (arr_3 [i_0] [i_0] [(unsigned char)11])))) >> (((/* implicit */int) ((((/* implicit */long long int) arr_4 [(_Bool)1] [i_1 - 2] [i_2] [i_1])) != (arr_3 [i_0] [i_0] [i_2]))))))));
                    arr_8 [(short)13] [i_1] [i_2 + 1] [i_1] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_6)))) || (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)14] [(unsigned short)14])))))) || (((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_10)))) || (((((/* implicit */_Bool) 17ULL)) && (((/* implicit */_Bool) -1353952250563876142LL))))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_1 [i_0 - 1]))))) + (((1905616006U) << (((2147483647) - (2147483644))))))) | (((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) >> (((1976291996) - (1976291978))))) + (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) 209978471U)))))))));
                }
            } 
        } 
    } 
}
