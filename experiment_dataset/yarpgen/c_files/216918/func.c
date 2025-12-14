/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216918
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
    for (int i_0 = 1; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_15 *= ((/* implicit */_Bool) min((((/* implicit */long long int) 985799251U)), (1498358386708552738LL)));
    }
    for (int i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [0]))));
        var_16 = ((/* implicit */_Bool) arr_3 [i_1 + 1]);
        arr_6 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1]))) > (-1498358386708552739LL)))))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 776321839)) ? (-1498358386708552762LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_18 &= ((/* implicit */signed char) (unsigned char)223);
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((unsigned int) -1681071488516683420LL)) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_3] [i_3]))))))))));
        }
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 - 1] [i_2]))) : (11990680208892580503ULL)))) ? (((((/* implicit */_Bool) arr_7 [i_2 - 1])) ? (((/* implicit */int) arr_9 [14ULL] [i_2])) : (((/* implicit */int) arr_10 [i_2] [i_2 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 - 1])) >= (((/* implicit */int) arr_10 [i_2] [i_2])))))))));
    }
    var_20 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_7)))));
    /* LoopSeq 1 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_4 - 1] [i_4 - 1]))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) arr_12 [i_4 - 1] [(signed char)22]))))))) : (min((((((/* implicit */_Bool) arr_12 [i_4] [11LL])) ? (arr_14 [i_4 - 1]) : (((/* implicit */long long int) 575329670)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4])) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) arr_13 [i_4] [i_4 - 1])))))))));
        var_21 += ((/* implicit */short) 1498358386708552726LL);
        var_22 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~((-(arr_14 [i_4]))))))));
    }
}
