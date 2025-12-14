/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5239
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
    var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_13), (var_10)))) ? (((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (_Bool)0)))))))) + (var_5));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((5294706603352349222ULL), (((/* implicit */unsigned long long int) ((_Bool) 7559469241287096392LL))))))));
        arr_2 [i_0] = ((/* implicit */long long int) (((+(max((((/* implicit */long long int) arr_1 [i_0])), (7559469241287096392LL))))) < (min((max((((/* implicit */long long int) (_Bool)1)), (var_15))), (-7559469241287096392LL)))));
        var_18 = ((/* implicit */unsigned long long int) (-(536870896U)));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_19 = ((/* implicit */short) arr_3 [i_1]);
        var_20 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_3 [i_1])) ? ((+(6621773940384844804ULL))) : (((/* implicit */unsigned long long int) (+(-1073741824))))))));
        var_21 = ((/* implicit */int) ((_Bool) arr_3 [i_1]));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_4 [i_1]))));
        var_23 = ((/* implicit */unsigned short) ((((long long int) var_11)) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [7LL]))) || (((/* implicit */_Bool) arr_4 [i_1]))))))));
    }
    for (unsigned short i_2 = 1; i_2 < 7; i_2 += 3) 
    {
        var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_11)))) && ((!(((/* implicit */_Bool) 18446744073709551606ULL))))))), (var_12)));
        arr_7 [i_2] = ((/* implicit */_Bool) var_14);
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)11137)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) var_6)))) > (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)172)), (var_11))))))))));
}
