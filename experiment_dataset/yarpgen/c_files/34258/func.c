/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34258
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
    var_15 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (13081622672567360564ULL))) * (((16121034109997413998ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_14)), ((unsigned char)0)))))))));
    var_16 = ((/* implicit */signed char) var_5);
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (((var_13) & (((/* implicit */long long int) var_12))))))) ? (((/* implicit */int) (unsigned short)26100)) : (((/* implicit */int) (unsigned short)38308))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0])) <= (arr_2 [i_0]))))) : (max((var_13), (((/* implicit */long long int) var_10)))))), (((long long int) ((var_3) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-745)))))));
        arr_4 [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39435)) >> (((arr_0 [i_0 - 1]) - (83392896)))));
    }
    var_18 = ((/* implicit */unsigned short) max((max((max((var_9), (((/* implicit */unsigned long long int) 0LL)))), (((var_9) << (((-1605967174703310951LL) + (1605967174703310987LL))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) == (max((-2268688386859506576LL), (((/* implicit */long long int) (short)-26703)))))))));
}
