/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229290
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min(((unsigned short)2046), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        arr_3 [(unsigned short)4] [i_0] = ((/* implicit */_Bool) ((unsigned char) (signed char)-22));
        var_11 = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    var_12 = ((/* implicit */int) var_10);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((((/* implicit */int) (signed char)-9)), (var_9)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (3574664297390043620LL)));
    /* LoopSeq 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) var_2);
        arr_7 [i_1] = ((/* implicit */long long int) arr_5 [i_1]);
        var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [14]))) == ((-(arr_6 [i_1]))))))) - ((+(arr_6 [i_1])))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            arr_14 [i_2] [(unsigned short)4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)17))));
            arr_15 [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_11 [i_3]) - (arr_11 [i_2])));
        }
        arr_16 [i_2] = ((/* implicit */unsigned short) ((unsigned char) (signed char)10));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_20 [(signed char)7] = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)0)))) - (((/* implicit */int) arr_4 [i_4]))));
        arr_21 [i_4] [(signed char)13] = ((/* implicit */unsigned short) ((int) arr_4 [i_4]));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (+(var_0))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(unsigned char)12])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_4]))))) <= (13608469021995881034ULL)));
    }
}
