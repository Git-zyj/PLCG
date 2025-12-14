/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25980
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
    var_15 = ((/* implicit */signed char) (unsigned char)248);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (unsigned char)47)))), (((((/* implicit */int) (unsigned char)5)) * (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) (_Bool)1)))))))));
        arr_4 [i_0] [i_0] = min((((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))) | (arr_1 [(unsigned char)11])))), (((/* implicit */unsigned short) var_5)));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 1) /* same iter space */
        {
            arr_7 [(unsigned char)9] [i_1 + 1] [(unsigned char)9] = ((/* implicit */unsigned char) min((((unsigned int) ((short) var_1))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 - 1]))))))))));
            arr_8 [i_0 + 2] [i_0 + 2] = max((((/* implicit */int) (!(((((/* implicit */int) var_14)) < (((/* implicit */int) var_0))))))), ((~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-32742)))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) /* same iter space */
        {
            arr_11 [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
            arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2 - 1])) % (((/* implicit */int) (unsigned char)39))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (arr_3 [i_0 + 4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned short)17474)))))) : (min((7670138241965744505LL), (((/* implicit */long long int) var_13))))))) : (((((/* implicit */_Bool) max((arr_3 [(unsigned char)12]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((unsigned long long int) var_1))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) /* same iter space */
        {
            arr_15 [0ULL] [i_0] = ((/* implicit */unsigned short) (!(var_5)));
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [(signed char)12])) ^ ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_0] [i_3])) : (((/* implicit */int) (_Bool)1)))))))));
            arr_16 [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_3 + 1])) : (((/* implicit */int) var_1))));
            arr_17 [i_0 + 1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)0)))) != (((((/* implicit */unsigned long long int) var_12)) * (2669134241413986375ULL)))));
        }
        arr_18 [i_0] = ((/* implicit */long long int) (unsigned char)102);
    }
    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_19 [i_4]))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) min((arr_19 [i_4]), (((/* implicit */unsigned char) (_Bool)1))))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((18446744073709551595ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_19 [i_4])) : (((/* implicit */int) var_7))))) || ((!(((/* implicit */_Bool) 1596553610U)))))))))))));
    }
}
