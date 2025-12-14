/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191003
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_20 += 2945120868U;
        var_21 += ((/* implicit */long long int) ((signed char) (_Bool)0));
    }
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (var_13)))) ? (((/* implicit */int) var_11)) : (min((((/* implicit */int) var_11)), (var_15)))))) ? (var_3) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) (_Bool)1))), (min((68719476672LL), (((/* implicit */long long int) var_13))))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        for (int i_2 = 4; i_2 < 19; i_2 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            arr_13 [i_2] = var_9;
                            var_23 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_9 [16ULL])) % (((((/* implicit */unsigned long long int) arr_12 [i_4] [i_4] [i_4] [i_4 + 1] [11ULL] [i_4])) & (var_7)))));
                            var_24 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((arr_6 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26593))) : (var_2)))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (((var_1) & (((/* implicit */unsigned long long int) var_15)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    arr_18 [i_5] [i_2] [i_2] [i_1] = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned short)2))))));
                    var_25 ^= ((((/* implicit */_Bool) ((arr_16 [i_2] [i_2 + 1] [i_2 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(unsigned short)4] [i_2] [(unsigned short)4]))) : (arr_4 [i_2 - 4] [i_2])))) ? (min((((int) (unsigned short)31258)), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(unsigned short)2])) && (((/* implicit */_Bool) (unsigned short)31260))))))) : (((/* implicit */int) ((unsigned short) arr_4 [i_5 + 2] [i_2 + 1]))));
                    arr_19 [i_2] = ((/* implicit */short) max((min((((((/* implicit */_Bool) (signed char)32)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40771))))), (((/* implicit */unsigned long long int) min((261931274), (-890282494)))))), (((((/* implicit */_Bool) arr_15 [i_5] [i_2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1194343349)))) : (arr_3 [i_2 + 2])))));
                }
                arr_20 [i_2] = ((/* implicit */_Bool) (short)7679);
            }
        } 
    } 
}
