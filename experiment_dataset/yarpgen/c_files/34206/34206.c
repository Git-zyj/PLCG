/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((((((min(var_8, var_3))) <= (var_6 < var_11)))) + ((((0 % 1) < (var_0 <= var_4)))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((min((max((arr_2 [i_0] [i_0]), 16870580875830915464)), (((arr_0 [19]) / var_10)))) * (min(((2125299758987060501 * (arr_0 [i_0]))), (var_4 * var_15)))));
        var_17 = (min((max((-17295 * -17305), (max((arr_0 [4]), var_3)))), (((min((arr_1 [i_0] [i_0]), (arr_0 [12]))) * (((max(65374, (arr_1 [i_0] [i_0])))))))));
        var_18 = (min(((max((75 <= 96), (17295 * 182)))), (max((((arr_0 [i_0]) * var_9)), (var_3 / 15527423822935025227)))));
    }
    var_19 = (min(((((min(18446744073709551615, 0)) == (var_8 < 18446744073709551597)))), ((((min(var_8, var_5))) + (-24206 % -17325)))));
    #pragma endscop
}
