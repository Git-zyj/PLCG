/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247617
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
    for (int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_3 [8ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (arr_1 [(_Bool)1]) : (((/* implicit */unsigned long long int) var_0))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_15 [i_0] [i_2] [12ULL] [i_0] = ((/* implicit */unsigned long long int) var_10);
                        arr_16 [i_0] [i_0] [(unsigned char)10] [i_0] [(short)18] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (signed char)-54)), (7748939864976279699ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
                    }
                } 
            } 
            arr_17 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */int) (signed char)20)), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_9 [i_0])))))) : (min((10697804208733271920ULL), (((/* implicit */unsigned long long int) arr_4 [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [23ULL] [(unsigned char)16])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) (unsigned char)0))))) ? ((~(((/* implicit */int) arr_12 [i_1] [i_1] [i_0] [i_1])))) : (((/* implicit */int) arr_6 [i_0 + 1])))))));
        }
        for (short i_4 = 2; i_4 < 21; i_4 += 2) 
        {
            arr_21 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0 + 1]);
            arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)2])) ? (max((20U), (((/* implicit */unsigned int) arr_20 [i_0])))) : (min((20U), (((/* implicit */unsigned int) (unsigned char)0)))))))));
            arr_23 [i_0] = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) (unsigned char)0)), (6948687004793146253ULL)))));
            arr_24 [i_0] [i_0] = ((/* implicit */short) max((arr_20 [i_0 - 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_14 [i_0]))))))))));
            arr_25 [i_0 + 1] [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_10 [i_4 + 3] [i_4 + 1] [i_4 + 2] [i_4 - 2])) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (113100121U)))))), (((/* implicit */int) (!(((/* implicit */_Bool) 1316571514755131542ULL)))))));
        }
        arr_26 [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (signed char)45)), (10697804208733271920ULL))) * (((/* implicit */unsigned long long int) max((20U), (((/* implicit */unsigned int) (short)12477)))))));
    }
    var_14 = ((/* implicit */int) var_1);
    var_15 = (((-(max((((/* implicit */unsigned int) var_5)), (var_6))))) == (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */int) var_5)))), ((+(((/* implicit */int) var_10))))))));
}
