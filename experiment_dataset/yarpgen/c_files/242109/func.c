/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242109
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
    var_14 = ((/* implicit */unsigned char) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (1048576))))));
    var_15 -= var_9;
    var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) 1048576)), (806318469U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_13))))) : (var_4)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((short) ((signed char) 8893786079876858316LL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */int) min((max((((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_1))))), (((((arr_2 [i_3] [(_Bool)1] [i_3]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_13)), (806318469U))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 1) 
                            {
                                arr_13 [6U] [i_1] [i_2] [i_3] = ((/* implicit */short) (((-(-1048577))) + (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_4))) > (((/* implicit */unsigned int) ((1048577) * (((/* implicit */int) var_13))))))))));
                                arr_14 [i_0] [i_0] |= ((/* implicit */int) ((short) -5984823132297374241LL));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_3] [i_0])) ? (((/* implicit */unsigned long long int) ((((-1048582) % (var_3))) * (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) (signed char)124)))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_0 [i_1] [i_1])) & (arr_6 [i_0] [(_Bool)1] [i_2] [i_0] [i_4])))) ? (6146598189563589687ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)195)))))));
                                var_20 |= ((((/* implicit */_Bool) min((arr_11 [i_4 + 2] [i_4] [i_4 + 3] [i_4 + 2] [i_4 + 4] [i_4]), ((short)-32763)))) || (((((/* implicit */_Bool) 1683423149U)) || ((_Bool)1))));
                            }
                            var_21 = ((/* implicit */short) min((arr_6 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((1048576) ^ (((/* implicit */int) (signed char)4))))) == (min((((/* implicit */long long int) 1048576)), (-5984823132297374244LL))))))));
                            var_22 |= ((/* implicit */unsigned char) (~(-1627068284)));
                            arr_15 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)11017)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 2508852392U)) || (var_2)))) > (((/* implicit */int) (!(((/* implicit */_Bool) 5984823132297374249LL)))))))) : (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) + (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_9 [i_1] [i_0] [i_0] [i_0] [i_0])) : (arr_8 [i_1] [i_1] [i_1] [i_1] [i_0]))))) >= (arr_8 [i_0] [i_0] [i_1] [i_1] [i_1])));
                arr_17 [7] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 110936859801771683LL)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) ((signed char) (_Bool)1)))));
            }
        } 
    } 
}
