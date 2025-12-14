/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210012
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)129)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) > (((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) var_16)))))))) >= (((((var_13) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7)))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((2097151LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)129))))))) * (((var_3) << (((arr_2 [i_2] [i_2]) - (7255975113786464800ULL)))))))) && (((/* implicit */_Bool) (+((~(0U))))))));
                    var_22 = ((/* implicit */unsigned short) (signed char)80);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_0])))))));
                                arr_15 [1] [1] [1] [i_3] [(unsigned short)15] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) (short)0)), (arr_2 [(short)14] [i_1]))))) <= (((min((((/* implicit */unsigned long long int) var_1)), (15743821480056615845ULL))) & (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (-7206223402605788039LL))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        var_23 *= ((/* implicit */unsigned long long int) var_2);
                        arr_19 [i_0] [i_1] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_14);
                        var_24 *= ((/* implicit */unsigned long long int) (((+(var_17))) == (((/* implicit */int) ((((/* implicit */int) (unsigned char)126)) >= (((/* implicit */int) var_14)))))));
                    }
                    var_25 = ((/* implicit */int) arr_2 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_26 *= ((/* implicit */unsigned char) max((0), (0)));
    var_27 -= ((/* implicit */short) (-((~(((/* implicit */int) var_11))))));
    var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (((_Bool)1) ? (var_8) : (((/* implicit */int) var_2))))) * ((-(((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
}
