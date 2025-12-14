/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24499
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
    var_18 = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))))) % (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13863535424315453893ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (9223372036854775807LL)))) && (((/* implicit */_Bool) var_5)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((arr_3 [i_0]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_1]))))) <= (((unsigned int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)17785))))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (13863535424315453888ULL) : (((/* implicit */unsigned long long int) var_5)))))) ? (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)55249))) ? (((/* implicit */unsigned long long int) max((arr_1 [i_1] [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (arr_4 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) (((+(-2147483646))) / ((+(((/* implicit */int) var_9)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_21 |= max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_9 [(unsigned char)4]))))))), (max(((~(13863535424315453865ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) (short)-26720))))))));
                            var_22 *= ((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned short)65532)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) > (arr_11 [(unsigned char)0] [i_1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (arr_11 [(unsigned short)2] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_8 [i_3] [i_3])))) : (max((arr_11 [(unsigned short)10] [i_1]), (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) arr_9 [(unsigned short)8])), (4583208649394097737ULL)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_1 - 1]))) : (13863535424315453865ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0] [(signed char)2] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) var_10)))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) ^ (-6))))))));
                arr_12 [i_0 - 1] = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1])))), (((/* implicit */int) ((unsigned char) 0ULL)))))));
            }
        } 
    } 
}
