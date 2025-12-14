/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213477
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */int) (_Bool)1);
        var_19 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (6301913479335398622ULL)));
        var_20 = var_4;
        arr_3 [i_0] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((((/* implicit */int) var_18)) >= (((/* implicit */int) (_Bool)1)))))))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) / (var_17)))) ? (arr_5 [i_1]) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)54)) == (((/* implicit */int) var_12))))))) * (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)242)) << (((((/* implicit */int) (unsigned char)211)) - (188))))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (((_Bool)1) ? (arr_6 [i_1] [i_1]) : (arr_5 [i_1])))), (max((var_15), (((/* implicit */long long int) arr_0 [i_1] [i_1]))))))))))));
    }
    /* LoopSeq 1 */
    for (int i_2 = 2; i_2 < 8; i_2 += 4) 
    {
        arr_11 [i_2 + 3] = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */int) arr_8 [i_2 - 2])) : (((/* implicit */int) var_9)))) != (((/* implicit */int) arr_8 [i_2 + 2]))));
        var_22 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) max((-362068050), (0)))), (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1]))))))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (unsigned char)251)))))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_23 = ((/* implicit */_Bool) ((min((arr_8 [i_2 - 2]), (((((/* implicit */int) var_8)) <= (((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_3]))) + (arr_10 [i_2 + 3] [i_2 + 4]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_2] [i_2 + 4])))))));
            var_24 -= min(((_Bool)1), (arr_8 [2U]));
            var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_8 [(_Bool)1])) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)239)), (var_10)))))), (min((((((/* implicit */_Bool) (unsigned char)255)) ? (-1) : (((/* implicit */int) (unsigned short)1984)))), (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_0 [i_2] [i_3])))))))));
            var_26 += ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_0 [i_2 + 4] [i_2 + 4])), (arr_13 [i_2 + 3])))), (((((((/* implicit */int) var_13)) > (((/* implicit */int) var_7)))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_0 [i_2] [i_3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (((/* implicit */int) arr_0 [i_2] [i_3])) : (((/* implicit */int) var_1)))))))));
        }
        var_27 = ((/* implicit */unsigned short) var_1);
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) min((var_15), (((/* implicit */long long int) arr_9 [(_Bool)1] [i_2])))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)10273))) / (-6882983794610499560LL)))))))));
    }
}
