/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35570
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))) : (arr_3 [i_0])));
            var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (arr_3 [i_1]))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_2))))))));
        }
        var_20 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [16]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))));
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) -7590494376059119867LL))))))) != (((/* implicit */int) arr_6 [i_2] [i_2]))));
        arr_7 [i_2] [i_2] = ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_2])) | (((/* implicit */int) arr_6 [i_2] [i_2])))))));
    }
    var_22 = ((/* implicit */int) max((((/* implicit */long long int) ((((var_13) & (((/* implicit */int) var_2)))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) - (((((/* implicit */_Bool) var_3)) ? (-257309194874655000LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_23 = ((/* implicit */_Bool) var_16);
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 131509468)) ? (-1290367546) : (((/* implicit */int) (unsigned short)22202))));
    var_25 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_7)))))))))));
}
