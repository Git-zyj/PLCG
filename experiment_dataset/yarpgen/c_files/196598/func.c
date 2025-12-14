/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196598
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (var_5)));
                var_17 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 8646911284551352320ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_1]))) : (2321391935U))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_12)))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_1 [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) var_7);
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) arr_9 [i_2]);
        var_19 -= ((/* implicit */unsigned long long int) min((((max((((/* implicit */unsigned int) arr_6 [i_2])), (var_6))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))))), (((((/* implicit */_Bool) (+(766117840)))) ? (min((var_9), (((/* implicit */unsigned int) (signed char)127)))) : (var_6)))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            arr_16 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((14371211650981991163ULL) < (((/* implicit */unsigned long long int) var_3))))), (min((((/* implicit */signed char) arr_12 [i_2])), ((signed char)104)))))) ? (min((arr_14 [i_2] [i_2]), (((/* implicit */unsigned int) (+(arr_7 [i_2] [i_3 + 1])))))) : (max((1973575360U), (var_6)))));
            var_20 = ((/* implicit */_Bool) (-(min((max((var_5), (((/* implicit */unsigned long long int) (signed char)-26)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))))));
            var_21 &= ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) || (((/* implicit */_Bool) var_9))))))), (((var_13) & (((/* implicit */int) arr_6 [i_2]))))));
            arr_17 [i_3] [i_3 + 1] [i_2] = ((/* implicit */unsigned short) max((1973575360U), (((/* implicit */unsigned int) (_Bool)1))));
        }
    }
    var_22 += ((/* implicit */unsigned long long int) var_15);
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)111)), (((((/* implicit */_Bool) max((5623934277792332815ULL), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)8192)) : (-553149966)))) : (18446744073709551615ULL)))));
}
