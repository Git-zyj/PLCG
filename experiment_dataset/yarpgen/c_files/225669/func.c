/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225669
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (short)-3032))));
    var_19 += ((/* implicit */int) (short)32767);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_11 [10ULL] [10] [i_3] &= ((((/* implicit */_Bool) ((1683391143) + ((-(303725034)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [0])) || (((/* implicit */_Bool) 0ULL)))))) : ((-(8049134132335665436LL))));
                            var_20 &= ((/* implicit */long long int) (short)-24107);
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((min((((/* implicit */long long int) arr_7 [(_Bool)1] [i_1 - 2])), (arr_0 [8] [8]))) + ((-(arr_0 [2] [2]))))))));
                            var_22 = ((/* implicit */int) ((min(((-(1652460494181744870ULL))), ((-(arr_1 [i_0] [i_1]))))) != (((/* implicit */unsigned long long int) (-(arr_8 [i_0]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-((-(((/* implicit */int) max((arr_6 [i_0] [i_0] [12ULL]), (((/* implicit */unsigned short) arr_7 [i_0] [i_1]))))))))))));
                var_24 -= ((/* implicit */int) (~(((((/* implicit */_Bool) (-(17811281854287697834ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [6LL]))) : ((-(arr_8 [2])))))));
                arr_12 [i_0] = ((/* implicit */long long int) arr_1 [i_1 - 2] [i_1 - 1]);
                var_25 &= ((/* implicit */unsigned short) (-(7997925606001933502LL)));
            }
        } 
    } 
    var_26 &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) (~(301148950)))) < (var_5))))));
}
