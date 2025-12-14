/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223551
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (unsigned short)13146;
                    arr_9 [i_0] [(unsigned short)14] [i_2 + 1] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1]))))), (((((/* implicit */_Bool) (unsigned short)60590)) ? (((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_4 [i_1 + 1] [i_0])) - (60082))))) : (((/* implicit */int) (unsigned short)4952))))))) : (((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1]))))), (((((/* implicit */_Bool) (unsigned short)60590)) ? (((((/* implicit */int) var_3)) >> (((((((/* implicit */int) arr_4 [i_1 + 1] [i_0])) - (60082))) + (55400))))) : (((/* implicit */int) (unsigned short)4952)))))));
                }
            } 
        } 
    } 
    var_16 = (unsigned short)29215;
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (unsigned short i_4 = 3; i_4 < 11; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    arr_18 [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)60591)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (unsigned short)32509)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13)))))), ((+(((/* implicit */int) min(((unsigned short)26256), (arr_0 [i_3]))))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)4952), ((unsigned short)57249)))) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [i_3] [i_4 - 1] [i_4 + 1] [i_4 - 3])) > (((/* implicit */int) (unsigned short)57540))))) : (((((/* implicit */int) (unsigned short)23907)) - (((/* implicit */int) (unsigned short)56574)))))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (var_14)));
                    var_19 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_15 [i_3] [i_4 - 2] [i_4 - 2])))) * (((/* implicit */int) ((((/* implicit */int) arr_15 [i_3] [(unsigned short)10] [i_4 - 1])) <= (((/* implicit */int) var_11)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_3] [i_3] [i_5] |= ((/* implicit */unsigned short) (+((+(((/* implicit */int) (unsigned short)61319))))));
                        var_20 = (unsigned short)60111;
                    }
                    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_3] [i_4 + 1] [i_5] [i_7 + 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14))))))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? ((+(((/* implicit */int) min(((unsigned short)31787), (var_2)))))) : (((/* implicit */int) min((arr_5 [i_3] [i_5] [i_4 - 2]), (var_3))))));
                    }
                }
            } 
        } 
    } 
}
