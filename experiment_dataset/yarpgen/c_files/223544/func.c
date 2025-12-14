/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223544
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)5293)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) : (((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))));
        arr_3 [i_0] = var_3;
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-115)) && (((/* implicit */_Bool) (short)24794))));
        var_12 = ((((unsigned long long int) var_1)) | (((/* implicit */unsigned long long int) (+(var_10)))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((1812386333) - (((/* implicit */int) (signed char)-87)))) + (((/* implicit */int) (signed char)-104)))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned short)44985)), (((unsigned long long int) (short)-32755))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)15812)))) & ((~(14755152661474014305ULL)))));
        var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned short) (short)20809)), ((unsigned short)14494)))), ((~(-420841124)))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (signed char)35))));
    }
    var_17 = var_4;
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7296))) % (var_2))) & (((/* implicit */long long int) 1812386332)))))));
}
