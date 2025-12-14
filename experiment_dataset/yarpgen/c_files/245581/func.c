/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245581
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)32767))) & (-3573099847548914495LL)))) ? (min((((((/* implicit */_Bool) (signed char)-64)) ? (9764979530123757898ULL) : (var_0))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_11)), (var_10)))))) : (((((/* implicit */_Bool) max((var_2), (((/* implicit */short) (_Bool)0))))) ? (max((8681764543585793737ULL), (9764979530123757879ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (var_9))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) + (2728421800786589283LL)))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) * (8681764543585793709ULL))))), (((((/* implicit */int) ((arr_6 [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) < (((/* implicit */int) ((var_4) || (((/* implicit */_Bool) 9764979530123757898ULL)))))))));
                    arr_10 [i_0] [i_0] = ((max((((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61235))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-16212)) != (((/* implicit */int) (unsigned char)6))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_2 [i_2]))))) < (min((((/* implicit */unsigned long long int) var_1)), (18446744073709551615ULL))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) max((9764979530123757874ULL), (((/* implicit */unsigned long long int) -9223372036854775806LL))));
    var_15 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_3)) : (8681764543585793709ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)17382)) % (((/* implicit */int) var_6))))), (((-3633638888209702830LL) + (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8901867515111146444ULL)) || (((/* implicit */_Bool) 18446744073709551615ULL))))), (max((var_0), (((/* implicit */unsigned long long int) var_11)))))));
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)3), (((/* implicit */unsigned short) (signed char)-45)))))) : (max((var_8), (((/* implicit */unsigned long long int) var_3)))))) % (((((/* implicit */unsigned long long int) ((var_4) ? (var_7) : (((/* implicit */long long int) var_9))))) + (((var_8) + (var_8)))))));
}
