/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227365
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_14 = ((/* implicit */short) (-(min((((/* implicit */int) min(((signed char)43), ((signed char)-36)))), (((((/* implicit */_Bool) (unsigned short)51499)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) arr_6 [i_1] [i_0] [i_0]))))))));
            var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (((-4029787657989609015LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-32)))))))) / (((int) ((((/* implicit */int) var_5)) << (((((-250713240) + (250713266))) - (23))))))));
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (signed char)43))) && (((((var_0) % (((/* implicit */int) (unsigned short)51512)))) >= (((((/* implicit */int) (unsigned short)51522)) << (((/* implicit */int) (short)1))))))));
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_17 ^= ((/* implicit */long long int) var_0);
            var_18 |= ((/* implicit */signed char) ((max((max((((/* implicit */long long int) (signed char)122)), (262143LL))), (((/* implicit */long long int) arr_3 [i_0 + 2] [i_0 + 2])))) <= (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_0 - 1]), (arr_5 [i_0 - 2])))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) -8237960575031641204LL))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) < (308207880)))) : (((((/* implicit */int) (signed char)32)) << (((((/* implicit */int) (short)14700)) - (14676)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)17]))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-39)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)35))))))));
            var_20 |= ((/* implicit */int) arr_6 [i_0] [i_2] [12]);
        }
        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)39)), (var_3)))) ? (((((/* implicit */int) (short)-21)) - (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (short)32756)))));
        arr_10 [14LL] [14LL] &= ((/* implicit */unsigned short) ((((/* implicit */int) (short)14714)) << (((/* implicit */int) (short)3))));
        arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_2 [i_0])))) + (((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)99)) && (((/* implicit */_Bool) (signed char)36)))))))));
    }
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (signed char)33))));
}
