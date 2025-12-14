/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225499
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
    var_10 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_7), (var_7)))) && (((/* implicit */_Bool) var_0))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) max((((((/* implicit */unsigned long long int) -1265641974)) * (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_4 [i_2 - 2] [i_1 + 2]))))))))));
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (arr_9 [i_2 + 1] [i_2 + 1] [i_1] [i_0])))), (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))))))))));
                }
            } 
        } 
        var_13 = ((/* implicit */long long int) min((var_13), (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (var_3)))) ^ (((((((/* implicit */long long int) 1604121682)) - (var_2))) + (((/* implicit */long long int) arr_4 [i_0] [i_0]))))))));
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min((((arr_4 [i_0] [i_0]) / (((/* implicit */int) (short)-30336)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)146)), (var_1)))))))));
        var_15 = ((/* implicit */unsigned short) ((min((max((((/* implicit */unsigned int) arr_1 [i_0])), (1444642077U))), (((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)89)), (arr_7 [i_0] [i_0] [i_0])))))) * (((((/* implicit */unsigned int) arr_5 [i_0])) + (arr_9 [i_0] [i_0] [i_0] [i_0])))));
        var_16 = min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_0)), (var_5)))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)7)) + (((/* implicit */int) var_7))))) + (5355447125108149391ULL))));
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            var_17 = ((((((/* implicit */long long int) ((/* implicit */int) var_6))) - ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((((/* implicit */int) arr_7 [4] [i_3] [i_3])) - (((/* implicit */int) arr_7 [4LL] [i_3] [i_3]))))));
            arr_15 [i_4] [i_4] [i_4] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_3])), (var_4)))) || (((/* implicit */_Bool) ((arr_13 [i_4] [i_4]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-21388))))))))), (((((/* implicit */int) max((var_1), ((short)-1)))) & (((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned short)37066))))))));
        }
        arr_16 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) | (var_9)))) & (((18446744073709551606ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3])))))));
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_3 [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_6), (((/* implicit */short) var_7))))))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_5] [8ULL])) == (arr_5 [i_5]))))) > (((((/* implicit */unsigned long long int) var_3)) - (5685581291509880168ULL))))))));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) min((max((arr_14 [i_5] [i_5]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -6LL)) && (((/* implicit */_Bool) arr_11 [i_5]))))))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_5])), (arr_2 [i_5])))) && (((((/* implicit */_Bool) (unsigned short)40943)) || (((/* implicit */_Bool) arr_12 [i_5])))))))));
    }
}
