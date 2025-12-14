/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198969
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] &= ((((/* implicit */_Bool) var_16)) ? (((int) var_16)) : (((/* implicit */int) var_13)));
        var_17 &= ((/* implicit */int) ((signed char) 262143));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (+(((-1605908751) / (((/* implicit */int) (signed char)10)))));
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)127)) < (min((-61782118), (((/* implicit */int) arr_0 [i_1]))))));
        var_19 = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (-747919439) : (((/* implicit */int) arr_0 [7])))))), (arr_3 [i_1] [i_1])));
        var_20 ^= ((/* implicit */unsigned long long int) min((min((arr_1 [i_1]), (((/* implicit */unsigned int) arr_3 [i_1] [i_1])))), (((/* implicit */unsigned int) arr_3 [i_1] [(short)15]))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) arr_6 [i_2]))) + (2147483647))) << (((((((var_0) + (2147483647))) << (((149960536) - (149960536))))) - (1096530603)))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41169)) / (((/* implicit */int) arr_0 [i_2])))))));
    }
    var_23 ^= ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            {
                var_24 = min((((signed char) 8388607)), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)24865))))));
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (int i_7 = 4; i_7 < 7; i_7 += 1) 
                        {
                            {
                                arr_24 [i_3] [i_3] [8LL] [i_6] [i_7] = ((/* implicit */unsigned char) ((arr_1 [i_6]) / (((/* implicit */unsigned int) -149960557))));
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_20 [i_4] [i_4] [i_3] [i_3] [i_3] [i_3])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5])))))))) ? (((int) arr_20 [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 2] [i_7] [i_7])) : (min(((-(arr_4 [i_5]))), (((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */int) (signed char)31)) : (var_16)))))));
                            }
                        } 
                    } 
                } 
                arr_25 [(short)8] &= ((/* implicit */long long int) ((signed char) ((max((3011719722U), (((/* implicit */unsigned int) var_14)))) >> ((((-(((/* implicit */int) (short)18266)))) + (18269))))));
                var_26 = (signed char)-55;
            }
        } 
    } 
}
