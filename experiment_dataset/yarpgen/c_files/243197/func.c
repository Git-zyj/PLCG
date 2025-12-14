/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243197
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) min(((+(((((/* implicit */_Bool) 3844946892615905347ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)104)))))), (min((var_5), (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))))));
        arr_2 [i_0] = ((/* implicit */short) max((((3844946892615905349ULL) - (3844946892615905349ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0])))))));
        var_12 ^= ((/* implicit */unsigned int) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */int) var_2)))) <= (((((((/* implicit */int) var_4)) + (2147483647))) >> (((var_6) - (2964326475U)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (var_5)))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) arr_1 [12ULL]))))))));
    }
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_10)), (var_0))), (((/* implicit */long long int) var_7))))) ? (((((/* implicit */_Bool) (-(var_0)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_5)) == (var_8))))))) : (max((((/* implicit */unsigned int) var_7)), (var_6)))));
    /* LoopSeq 1 */
    for (signed char i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        var_14 = ((/* implicit */long long int) max((((arr_0 [i_1]) ? (((/* implicit */int) ((unsigned short) arr_1 [i_1]))) : (((arr_3 [i_1] [i_1]) >> (((((/* implicit */int) var_4)) + (14992))))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >= (max((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), (var_8))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min(((!(arr_0 [i_1 - 3]))), (arr_0 [i_1 - 1])));
                    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) < (((((/* implicit */_Bool) 14601797181093646269ULL)) ? (14601797181093646258ULL) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) 3021227675U)) : (14601797181093646260ULL)))))));
                }
            } 
        } 
    }
}
