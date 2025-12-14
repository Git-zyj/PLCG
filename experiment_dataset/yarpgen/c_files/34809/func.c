/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34809
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
    var_11 = ((/* implicit */long long int) var_1);
    var_12 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (short)-26098))) ? ((-(var_8))) : (((/* implicit */int) ((((/* implicit */int) (short)-26081)) < (((/* implicit */int) (short)-462)))))))), (var_5)));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(5628465337939981049ULL)))))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)26076))))))));
    var_14 = ((((/* implicit */long long int) ((/* implicit */int) ((short) min((var_4), (((/* implicit */unsigned int) var_10))))))) < (var_6));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) var_9);
        var_15 = ((/* implicit */int) ((var_10) ? (((/* implicit */long long int) ((unsigned int) var_0))) : (((((((/* implicit */long long int) ((/* implicit */int) (short)-462))) > (var_9))) ? (min((((/* implicit */long long int) var_5)), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-26081)))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) var_3)), (arr_0 [(unsigned char)6])))) + (((/* implicit */int) var_1))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned long long int) arr_5 [i_0] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26080)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0] [i_1 - 3])))))))) ? (((/* implicit */int) ((signed char) arr_5 [(_Bool)1] [6U]))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 3; i_2 < 7; i_2 += 4) /* same iter space */
        {
            arr_8 [i_0] [i_2 - 1] = ((/* implicit */unsigned long long int) arr_0 [i_2]);
            arr_9 [i_0] = ((/* implicit */long long int) ((unsigned long long int) (short)23276));
        }
        for (unsigned long long int i_3 = 3; i_3 < 7; i_3 += 4) /* same iter space */
        {
            arr_13 [i_0] |= ((/* implicit */signed char) arr_11 [i_3] [4] [i_3 + 2]);
            var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_3]))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 3; i_4 < 7; i_4 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned long long int) 11136088008948319025ULL)))));
            arr_18 [i_4] = ((((/* implicit */_Bool) (short)-26072)) ? (((/* implicit */int) (short)26090)) : (((/* implicit */int) (short)26071)));
        }
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-87))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((var_2), (arr_17 [i_0] [i_0])))) / (((/* implicit */int) ((short) var_4)))))) : (((unsigned int) var_6))));
    }
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_5))) || (((/* implicit */_Bool) ((unsigned int) arr_3 [i_5] [i_5])))));
        var_21 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_11 [5U] [(unsigned short)9] [i_5]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) : (((((/* implicit */_Bool) -8179789276878454228LL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [4]))))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6028388288439105636ULL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5])))))) ? ((+(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)18678)))))))));
        arr_23 [i_5] = ((/* implicit */unsigned int) var_6);
    }
    for (unsigned int i_6 = 2; i_6 < 16; i_6 += 4) 
    {
        var_22 = arr_25 [i_6] [i_6];
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [11ULL])) ? (((/* implicit */long long int) var_5)) : (max((((/* implicit */long long int) var_3)), (3639550012989269370LL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (1111153561623377828LL)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -1111153561623377811LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6] [i_6 + 2]))) : (((arr_24 [i_6]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))))))));
        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)-123))) ? (arr_24 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [8LL] [i_6])))));
    }
}
