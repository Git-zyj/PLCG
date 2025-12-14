/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47742
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
    var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) % (6398587927845224591LL))) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))))))));
    var_12 = ((/* implicit */short) ((((((((/* implicit */long long int) var_7)) + (0LL))) + (((/* implicit */long long int) ((2096128) - (((/* implicit */int) var_5))))))) - (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (signed char)100))) + (((((/* implicit */int) var_5)) + (((/* implicit */int) (_Bool)1)))))))));
    var_13 = 8269768585702974396LL;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 &= ((/* implicit */_Bool) ((arr_3 [i_1] [i_1] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 16777088U)))))))));
                var_15 = ((/* implicit */_Bool) min((min((((arr_2 [i_0 - 1] [i_0 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))), ((+(arr_2 [i_0] [i_1]))))), (((/* implicit */unsigned int) arr_0 [i_0 - 1]))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_2)) % (max(((+(var_0))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 - 2] [i_1] [i_1]))))));
                    var_17 = ((/* implicit */_Bool) (~(((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) || (((/* implicit */_Bool) arr_0 [i_0]))))) >> (min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (arr_4 [i_2] [i_1] [i_0] [i_0])))))));
                }
                for (int i_3 = 3; i_3 < 14; i_3 += 1) 
                {
                    var_18 ^= ((/* implicit */short) ((((arr_2 [i_1] [i_0 + 1]) != (arr_2 [i_0] [i_0 + 1]))) || (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [10LL] [i_0 - 1])), (var_0))), (((/* implicit */unsigned long long int) ((int) 2759949073U))))))));
                    arr_9 [i_3] [i_1] [i_3] [i_1] = ((/* implicit */short) (~(((((((/* implicit */int) (signed char)-31)) + (2147483647))) >> (((min((((/* implicit */long long int) 2759949073U)), (var_2))) - (2759949054LL)))))));
                }
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    arr_12 [i_0] = ((/* implicit */short) min((((((((((/* implicit */int) arr_7 [i_1])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)233)) - (217))))) ^ (((/* implicit */int) ((signed char) (unsigned char)23))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))) / (16140901064495857664ULL)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (9874646162180649749ULL)))))))));
                    var_19 = ((((((((/* implicit */_Bool) (short)-1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250))))) << (((/* implicit */int) ((short) (unsigned short)0))))) > (((/* implicit */unsigned long long int) ((((_Bool) (unsigned char)23)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % (var_7)))) : (arr_3 [i_0] [i_0 + 1] [i_1])))));
                }
                arr_13 [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) 1535018224U);
            }
        } 
    } 
}
