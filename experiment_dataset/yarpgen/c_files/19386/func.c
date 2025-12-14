/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19386
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_3 [i_0] [i_0 + 3] = ((/* implicit */short) (signed char)21);
        var_12 &= ((/* implicit */short) (!(((((/* implicit */int) arr_1 [20ULL])) == (((/* implicit */int) arr_0 [(short)14]))))));
        var_13 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) min((arr_0 [(short)12]), (((/* implicit */short) arr_1 [12LL]))))))));
    }
    /* LoopSeq 3 */
    for (int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [4LL])) ? (((/* implicit */unsigned long long int) max((0LL), (((/* implicit */long long int) var_11))))) : (2145956502048154726ULL))) << (((((/* implicit */_Bool) max((arr_0 [(unsigned char)6]), (((/* implicit */short) arr_1 [(short)4]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) arr_0 [(short)18]))))));
        arr_8 [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) var_7)) == (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */int) arr_0 [(unsigned char)18])) % (((/* implicit */int) var_8)))) : (((((((/* implicit */int) arr_0 [(_Bool)1])) + (2147483647))) >> (((((/* implicit */int) arr_0 [(short)8])) - (25863)))))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (+(max((arr_4 [i_1] [i_1]), (((/* implicit */long long int) var_3)))))))));
    }
    for (int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) arr_6 [i_2]));
        arr_14 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) -1LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3971))))) : (((/* implicit */int) ((((/* implicit */int) ((short) 491520ULL))) > (((((/* implicit */_Bool) -974355011386051471LL)) ? (((/* implicit */int) (short)7)) : (1559001380))))))));
        arr_15 [i_2] = ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) var_7)) : ((+(689004497))));
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_1 [14LL])) ? (arr_4 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1465))))))), ((short)3970)));
        arr_16 [i_2] [i_2] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_5)), ((+(((arr_11 [i_2]) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) arr_5 [i_2]))))))));
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        arr_19 [i_3] = arr_12 [i_3];
        var_16 += ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (+(arr_4 [i_3] [i_3])))) ? (min((((/* implicit */int) arr_0 [10ULL])), (var_10))) : (((/* implicit */int) max((arr_1 [(unsigned char)12]), (((/* implicit */unsigned char) var_5))))))));
    }
}
