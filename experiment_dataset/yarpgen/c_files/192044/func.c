/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192044
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) < (arr_0 [i_0]))))) / (((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) arr_1 [(unsigned char)17]);
                                var_17 += (+(((/* implicit */int) arr_9 [12LL] [i_1] [i_2] [i_1] [i_3])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) arr_12 [i_5] [i_5])) : (((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_1] [i_5] [i_6])))))), (max((((/* implicit */unsigned long long int) ((unsigned char) 3579846136U))), (((((/* implicit */_Bool) (short)-14063)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))) : (958920666127109406ULL)))))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_5] [i_5]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) var_13))) * (((unsigned long long int) 958920666127109406ULL))));
    var_21 *= ((/* implicit */long long int) var_2);
    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (4058973621172437027ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (958920666127109406ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))) - (((/* implicit */int) var_1))));
}
