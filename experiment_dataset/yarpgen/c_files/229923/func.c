/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229923
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
    var_10 = ((/* implicit */unsigned short) max((var_2), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_8)))))))));
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_12 &= (~((~(((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0] [9ULL]) : (27U))))));
        arr_3 [i_0] |= ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_1] = ((/* implicit */int) ((((_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0])));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) max((5318898952693095837ULL), (((/* implicit */unsigned long long int) 1791186446))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_12 [i_0] [i_0] [12ULL] = ((/* implicit */unsigned int) ((arr_4 [i_0] [i_2] [i_2]) / (arr_11 [i_2] [i_0])));
            arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (arr_1 [i_0] [i_2])));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
            var_14 += ((13127845121016455763ULL) == (((/* implicit */unsigned long long int) 4294967292U)));
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                {
                    arr_26 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) -1916730382)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))) >= (((/* implicit */unsigned long long int) max((500795801U), (((/* implicit */unsigned int) var_6))))))))));
                    var_15 = ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_20 [i_6 + 1]));
                }
            } 
        } 
    } 
}
