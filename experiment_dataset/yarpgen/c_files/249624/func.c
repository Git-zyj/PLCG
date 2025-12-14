/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249624
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
    var_16 = var_14;
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13206))) > (var_14)))))));
    var_18 ^= min((((/* implicit */unsigned long long int) var_8)), ((-(var_10))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) (unsigned short)52346)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (var_13))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
            var_21 = ((/* implicit */unsigned char) var_2);
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)13190)) * (((/* implicit */int) (unsigned short)13206))))))) : (max((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13190))) : (4680052394673883419ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13190))) : (var_5))))))));
        }
        var_22 = ((/* implicit */unsigned int) ((14466971655093191204ULL) != (18446744073709551615ULL)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        arr_14 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3] [i_3]))) % (arr_8 [i_3] [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */int) arr_0 [i_3] [i_3])) : (((/* implicit */int) arr_0 [i_3] [i_3]))))) : (arr_8 [i_3] [i_3] [i_3]));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) var_11);
        var_23 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((1975450064U), (((/* implicit */unsigned int) (unsigned short)52345))))) ? (((/* implicit */unsigned long long int) (-(162047377U)))) : (min((((/* implicit */unsigned long long int) var_8)), (557724242561333786ULL))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_23 [i_3] [i_4] [i_3] [i_6] = ((/* implicit */short) (-(var_10)));
                        var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3])) / (((/* implicit */int) arr_20 [i_3] [i_3] [i_5]))));
                    }
                } 
            } 
        } 
        var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)52345)) + (((/* implicit */int) (unsigned short)64512))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6)));
    }
}
