/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((~(max(((max(var_13, -964158473))), ((var_9 ? var_8 : var_8)))))))));
    var_17 = (((~-964158473) ? (min((((-2143484775 ? var_5 : 2436733716))), (max(var_8, var_1)))) : (max(-1839036768, (min(var_8, -964158500))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((~((~((min(64877, 646)))))));
        arr_3 [i_0] = ((18446744073709551610 ? -1584942002 : -120282454));
        var_18 = ((((max((max(116, (arr_0 [i_0]))), ((max(-1584941981, (-32767 - 1))))))) ? (((-(arr_0 [i_0])))) : (max((((67972812 ? var_2 : var_3))), (((arr_1 [i_0]) ? 3874584852388673878 : var_4))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_19 *= ((-(((((var_12 ? var_10 : 655))) ? 1584942001 : ((-3874584852388673879 ? -3874584852388673879 : -1584942004))))));
        var_20 = (min(var_20, (((-(((((var_7 ? var_1 : (arr_5 [6] [i_1])))) ? ((max(var_4, (arr_5 [i_1] [i_1])))) : ((var_10 ? 4226994483 : var_5)))))))));
    }
    var_21 |= (max(((max(var_10, var_14))), (max(((8389 ? var_11 : var_10)), ((var_11 ? 28316 : var_5))))));
    var_22 = (((((((min(1887815168, 4226994489))) ? ((max(var_14, 1887815173))) : ((var_5 ? var_7 : var_1))))) ? ((-1887815169 ? ((32767 ? 127 : -32755)) : ((max(var_10, var_11))))) : (max(((((-32767 - 1) ? 32753 : (-32767 - 1)))), (-9223372036854775807 - 1)))));
    #pragma endscop
}
