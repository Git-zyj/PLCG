/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22985
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)(-32767 - 1))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) ((short) (short)6658))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [(short)8])))))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) max((var_0), (arr_2 [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_7 [(short)3] = ((/* implicit */unsigned int) (short)-30356);
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            arr_10 [i_1] [i_2] [i_1] = ((/* implicit */short) max((((max((((/* implicit */unsigned int) arr_9 [i_1] [i_2])), (arr_1 [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))), (((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_5))))), (min((arr_8 [i_1] [i_2]), (arr_6 [(short)7]))))))));
            arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-24538))))) ? (((((/* implicit */int) (short)-5052)) + (((/* implicit */int) (short)5051)))) : (((/* implicit */int) ((short) arr_6 [i_2])))));
            arr_12 [9U] [9U] [i_2] = ((/* implicit */short) max((max((((/* implicit */unsigned int) arr_5 [i_1])), ((-(1429814321U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) min((var_0), (arr_0 [i_1])))) : (((/* implicit */int) arr_0 [i_1])))))));
        }
        for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) max(((short)-1), ((short)31098)))) % (((/* implicit */int) (short)-32431)))) != (((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_3 + 3] [i_3])) : (((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 2]))))));
            arr_15 [i_1] [i_1] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (short)-11131)) && (((/* implicit */_Bool) max((3764229895U), (((/* implicit */unsigned int) (short)32767))))))));
        }
    }
    var_19 &= ((/* implicit */short) (~(((((((/* implicit */int) min(((short)-20738), ((short)24537)))) + (2147483647))) << (((max((((/* implicit */unsigned int) (short)20737)), (649610054U))) - (649610054U)))))));
    var_20 = var_9;
    var_21 = var_16;
    var_22 ^= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) < (((/* implicit */unsigned int) (((+(((/* implicit */int) (short)-6658)))) ^ (((/* implicit */int) ((((/* implicit */int) (short)30338)) > (((/* implicit */int) var_9))))))))));
}
