/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206350
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
    var_17 = ((/* implicit */unsigned long long int) min((var_6), (min(((~(((/* implicit */int) var_4)))), (((((/* implicit */int) var_15)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775795LL))) + (16LL)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 ^= ((/* implicit */_Bool) ((int) min((((/* implicit */long long int) arr_1 [i_1])), (9223372036854775807LL))));
                arr_4 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (~(min((arr_3 [i_0] [i_0] [i_0]), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_0 [(unsigned char)3]))))))));
                var_19 ^= min((((unsigned long long int) 9223372036854775807LL)), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0] [i_0])));
            }
        } 
    } 
    var_20 = (~(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_12)) / (((/* implicit */int) (signed char)-2)))) : (((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_6 [(_Bool)1] [(_Bool)1])))))) || (((/* implicit */_Bool) arr_1 [i_2]))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 2; i_4 < 21; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            arr_17 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) (~(arr_8 [i_4] [i_4] [i_4])));
                            arr_18 [20ULL] = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) -1993923743))))), ((-(-8757507284140378122LL)))));
                            arr_19 [i_2] [i_2] [i_4] [i_5 + 1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) (-(var_16)))) : ((-(1615244183U))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [(signed char)20] [i_4 + 1] [i_5]))) ^ (3494856310U)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) min((var_22), (min((var_6), (((/* implicit */int) ((_Bool) arr_15 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1])))))));
                var_23 += ((/* implicit */unsigned short) min((((min((((/* implicit */unsigned long long int) 375091610U)), (var_14))) ^ (((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) var_15))))))), (((/* implicit */unsigned long long int) min(((unsigned char)241), ((unsigned char)208))))));
                arr_20 [i_2] [(unsigned char)7] = (-(min((min((4ULL), (((/* implicit */unsigned long long int) arr_7 [i_2])))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) + (281474976710655LL)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_11);
}
