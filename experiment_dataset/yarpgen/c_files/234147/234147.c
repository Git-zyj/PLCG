/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 18446744073709551595;

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0 - 4] = ((arr_0 [i_0 - 4]) ? (((10780895943818665686 ? var_1 : (arr_0 [i_0 - 2])))) : (((arr_0 [i_0 - 3]) ? (arr_1 [i_0 + 1]) : 16904276992224680063)));
        arr_3 [i_0] = (((((var_7 + (arr_0 [i_0 - 3])))) ? (max(16904276992224680062, -1712724729750417026)) : ((((arr_1 [i_0 - 3]) + (arr_0 [i_0 + 1]))))));
    }
    var_11 = (max(var_6, (((!-32737) ? -29740 : (min(16904276992224680051, 16904276992224680062))))));
    #pragma endscop
}
