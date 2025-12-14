/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223841
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) (unsigned char)26);
        var_18 = ((/* implicit */int) arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((unsigned int) ((int) arr_3 [i_1])));
        arr_4 [11] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)26))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)26), ((unsigned char)243))))) | (((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])) / (17259765977620119804ULL)))))));
        var_20 = ((/* implicit */unsigned char) ((short) 487620566));
    }
    /* LoopSeq 3 */
    for (int i_2 = 2; i_2 < 10; i_2 += 4) 
    {
        var_21 = ((/* implicit */int) min((min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (arr_3 [i_2])))), (arr_0 [i_2] [i_2]))), (((/* implicit */unsigned int) (unsigned char)5))));
        arr_8 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max(((+(3004663069U))), (((/* implicit */unsigned int) ((unsigned char) arr_2 [i_2 - 2] [i_2 - 2])))))) ? (max((arr_3 [i_2 + 1]), (((/* implicit */unsigned int) arr_6 [i_2 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))));
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_22 = ((/* implicit */long long int) (+(((arr_2 [i_3] [i_3]) >> (((((/* implicit */int) arr_1 [i_3])) - (128)))))));
        var_23 = ((/* implicit */int) ((unsigned int) min((((((/* implicit */_Bool) arr_2 [i_3] [i_3])) || (((/* implicit */_Bool) arr_10 [i_3])))), ((!(((/* implicit */_Bool) arr_3 [i_3])))))));
    }
    /* vectorizable */
    for (short i_4 = 1; i_4 < 10; i_4 += 2) 
    {
        arr_14 [i_4] [i_4 + 1] = ((/* implicit */unsigned int) ((int) (~(arr_12 [i_4] [i_4 - 1]))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) ((((int) var_10)) | (((/* implicit */int) ((unsigned short) arr_3 [i_4 + 1])))));
    }
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3145728))));
}
