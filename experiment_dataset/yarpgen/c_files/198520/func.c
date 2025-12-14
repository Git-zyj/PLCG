/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198520
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_1 [i_0]))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0 - 1])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_0 - 1]) > (arr_1 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_16 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_0 [i_1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32496))) ^ (16476391090884169725ULL)))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned int) ((unsigned long long int) var_2)))), ((~(var_1))))))));
        arr_8 [i_1] = ((/* implicit */int) ((unsigned int) (unsigned short)8217));
    }
    var_18 = ((((((/* implicit */_Bool) ((3247856908890064963LL) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1395578894632531444LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned long long int) -1551085144)), (12021217343318986385ULL))))) << (((((((/* implicit */_Bool) -2424645838920362328LL)) ? (((((/* implicit */_Bool) (unsigned short)58143)) ? (6425526730390565230ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((6425526730390565225ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14432))))))) - (6425526730390565194ULL))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_4))));
    var_20 &= ((/* implicit */short) max((var_3), (((/* implicit */unsigned int) 876257227))));
}
