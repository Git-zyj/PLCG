/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41563
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (short)31)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~(arr_0 [i_0]))) : ((-(((/* implicit */int) arr_1 [i_0]))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_1 [i_0]))));
        var_22 = ((/* implicit */long long int) max((var_22), (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((long long int) (short)8999)) : (((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0])))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_23 = ((/* implicit */long long int) min((((/* implicit */short) ((signed char) (~(((/* implicit */int) (short)-31811)))))), ((short)13374)));
        arr_5 [(signed char)4] [i_1 + 1] = ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))), (arr_4 [i_1 - 1])))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_14)), (8309207601761877340LL)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1])))) : (((/* implicit */int) ((signed char) -8309207601761877315LL))))));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-8309207601761877325LL)))) / (((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) arr_8 [i_2])))));
        var_24 ^= ((/* implicit */long long int) ((((/* implicit */int) (short)32767)) * (((/* implicit */int) (unsigned char)3))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8999)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)8))))), (arr_6 [i_2] [i_2]))) - (((((/* implicit */_Bool) ((((/* implicit */int) (short)31829)) * (((/* implicit */int) (short)1983))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_8 [i_2]))))))));
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((arr_6 [18ULL] [18ULL]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)34))))))));
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (+(((/* implicit */int) arr_12 [i_3])))))));
        var_27 = ((/* implicit */_Bool) ((6839113051103498830LL) + (((/* implicit */long long int) ((/* implicit */int) ((short) arr_11 [16ULL]))))));
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_12 [i_3]) ? (arr_6 [i_3] [i_3]) : (arr_6 [i_3] [i_3])))) ? ((-(arr_6 [i_3] [i_3]))) : (arr_6 [i_3] [i_3])));
    }
}
