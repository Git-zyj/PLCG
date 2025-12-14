/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234677
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)232)) ? (min((((/* implicit */unsigned long long int) var_10)), (8646673233465941440ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8388576U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) : (1195606177U)))) ? (((/* implicit */long long int) var_2)) : (min((((/* implicit */long long int) 1195606187U)), (-9223372036854775798LL))))))));
    var_12 = (~((~(((((/* implicit */_Bool) (unsigned char)255)) ? (var_4) : (var_6))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */long long int) 1907140663);
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) arr_1 [(_Bool)1]);
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (max((arr_0 [i_0]), (((/* implicit */long long int) 1574226046U)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_0])))))) : (min((((/* implicit */unsigned long long int) 2720741250U)), (18446744073709551613ULL)))));
                }
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(arr_3 [i_1] [i_0])))), (min((arr_11 [i_1 + 3] [i_1 + 3] [i_0] [i_0]), (arr_11 [(_Bool)1] [i_1 - 1] [i_1] [i_1 - 1])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */int) 2720741239U);
                        arr_16 [i_0] [i_0] [19U] [i_0] = ((/* implicit */_Bool) 1778225994176929436LL);
                        arr_17 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_4])) ? (arr_15 [i_0] [15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)62))))) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)0))));
                    }
                }
                arr_18 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0]))) == (((unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_15 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                var_16 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((arr_1 [i_1]) != (1639478349)))), (max((((/* implicit */unsigned long long int) var_9)), (var_8))))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_1)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_14 [i_0])))))));
            }
        } 
    } 
}
