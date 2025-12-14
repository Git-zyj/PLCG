/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248297
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [(unsigned short)11] [i_1] [(unsigned short)11] [8LL])), (549218942976LL)))))))) | (var_19))))));
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) arr_7 [i_3 + 1] [i_2] [i_2] [i_1] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_19)))) ? (arr_1 [i_2] [i_3 + 1]) : (((/* implicit */int) arr_7 [i_0] [8] [i_2] [i_1] [i_0] [i_0]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4032)) % (-1)))), (((arr_5 [i_0] [i_1] [i_2] [i_3]) >> (((410859155) - (410859106)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) arr_6 [i_0] [i_1] [i_1] [i_5]);
                            arr_13 [i_0] [i_4] [i_0] [i_0] [i_0] [2LL] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)184)) >= (((/* implicit */int) (unsigned char)174))));
                            var_23 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_0])))) + ((-(arr_3 [(unsigned short)15])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 &= ((/* implicit */long long int) var_7);
    var_25 = ((/* implicit */unsigned char) var_12);
}
