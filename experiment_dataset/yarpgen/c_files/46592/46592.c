/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((!(var_18 || var_15))))) < (((((var_16 ? var_13 : -387465875))) ? 4575439137557954781 : (var_7 <= 18393)))));
    var_20 = var_14;
    var_21 = (((((757087375395295637 | var_11) ? var_14 : (((var_18 << (18393 - 18375)))))) ^ 0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_22 ^= (1 || var_1);
        arr_2 [i_0] = 757087375395295637;
        arr_3 [i_0] &= ((~(arr_0 [i_0])));
        var_23 ^= 16383;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_24 &= (((((-(4294967295 | 17689656698314255981)))) ? 1156232738880991937 : ((((var_16 <= (arr_1 [i_1]))) ? ((var_14 ? var_8 : 12809240833239557974)) : ((max(var_17, -16384)))))));
        arr_6 [2] [i_1] = (((((((max(var_2, 3968))) ? ((var_6 ? (arr_0 [i_1]) : (arr_4 [i_1]))) : ((((arr_4 [i_1]) * (arr_1 [i_1]))))))) / (min(3968, 4575439137557954781))));
    }
    #pragma endscop
}
