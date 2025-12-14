/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34508
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
    var_15 = ((unsigned short) min(((unsigned char)139), (((/* implicit */unsigned char) var_14))));
    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */int) var_5))))) == (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148))) : (var_6))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) arr_3 [i_0]);
        arr_4 [4] = ((/* implicit */unsigned int) arr_3 [i_0]);
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_1 [(short)10])), (arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_19 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_1] [(_Bool)1]))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_6 [i_1 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((((/* implicit */unsigned char) arr_5 [1ULL] [i_0] [1ULL])), ((unsigned char)139))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))))))))))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_12 [(signed char)20] [i_3] = ((/* implicit */long long int) ((int) (unsigned char)117));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_1 [i_3]))));
            var_22 = ((/* implicit */unsigned int) ((_Bool) var_14));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_15 [i_2] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4] [i_2] [i_2])) ? (((/* implicit */long long int) (-(max((((/* implicit */int) arr_2 [i_2] [i_2])), (295590334)))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)139))))), (min((arr_11 [i_2]), (((/* implicit */long long int) 295590334))))))));
            arr_16 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_7 [i_4] [(signed char)20]);
        }
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) arr_2 [i_2] [i_5]);
            arr_20 [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)139))));
        }
        var_24 = ((/* implicit */_Bool) max((var_24), (arr_5 [i_2] [i_2] [i_2])));
        arr_21 [i_2] = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned short) arr_14 [i_2])), (arr_10 [i_2] [(_Bool)1] [i_2]))));
    }
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((var_25), (arr_6 [(signed char)4] [i_6])));
        var_26 &= ((/* implicit */unsigned int) arr_24 [5ULL] [i_6]);
        var_27 = ((/* implicit */unsigned long long int) var_2);
    }
    var_28 = ((/* implicit */unsigned char) var_0);
}
