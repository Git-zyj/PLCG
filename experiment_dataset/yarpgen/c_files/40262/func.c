/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40262
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
    var_11 = ((/* implicit */signed char) ((var_7) ? (min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -189285773620910162LL)) : (18446744073709551608ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_12 += ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))) : ((+(((((/* implicit */_Bool) 981014644)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)4176)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) max((((((long long int) var_7)) & (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_8))))))), (arr_1 [(_Bool)0])));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (((!((_Bool)1))) ? (-965253505) : (((/* implicit */int) ((((/* implicit */int) var_9)) != (((var_8) ? (arr_0 [i_0] [i_0 + 2]) : (((/* implicit */int) (_Bool)1)))))))));
        var_13 -= ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0] [i_0 + 1])) <= (var_5)));
        arr_6 [i_0] = ((((/* implicit */_Bool) (~(((((/* implicit */int) var_7)) ^ (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (arr_1 [i_0 + 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) var_2)))))) : ((-(min((((/* implicit */int) arr_3 [i_0])), (var_1))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (+(((/* implicit */int) max(((_Bool)1), (((((/* implicit */int) arr_8 [i_1])) != (((/* implicit */int) arr_8 [i_1]))))))))))));
        arr_9 [i_1] = arr_8 [i_1];
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_7 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) max((min((var_1), (-1901146879))), (((/* implicit */int) arr_8 [i_1]))))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_8 [20ULL])), (var_9)))), (1649507390753107071ULL)))));
    }
}
