/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244808
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 -= ((/* implicit */unsigned short) var_3);
        arr_4 [(short)2] |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) (short)-31199)))));
        var_20 = ((/* implicit */int) arr_2 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (var_16)));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-29231)) ? (1275868126) : (252073892))))));
            }
            for (short i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)31199)) >> (((-371875701291145855LL) + (371875701291145862LL)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) var_4)))));
                var_24 = ((/* implicit */int) arr_8 [i_0] [i_0]);
            }
            arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) 4663505103860157395LL);
            var_25 = ((/* implicit */int) min((var_25), ((-(((/* implicit */int) arr_10 [i_1] [i_0]))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_10 [i_0] [i_0]));
                arr_20 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)56852)) && (((/* implicit */_Bool) 536870908U))));
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 19; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                for (int i_7 = 1; i_7 < 20; i_7 += 3) 
                {
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_27 [i_6] [i_0])) == (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_9 [i_0]) : (((/* implicit */int) (unsigned short)56848))))))) <= (((/* implicit */int) arr_2 [i_0]))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)56852)) ? (371875701291145838LL) : (((/* implicit */long long int) 21152660))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            arr_31 [i_0] [i_7 - 1] [i_6] [(short)3] [i_5 + 1] [i_0] = ((/* implicit */signed char) arr_18 [i_6] [i_7]);
                            var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_0] [i_0] [i_7] [i_0]))));
                            arr_32 [i_0] [6] [i_6] [i_0] [i_0] [i_6] [6] = ((/* implicit */int) (unsigned short)17);
                            arr_33 [i_0] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0]))))), (((((/* implicit */int) (unsigned char)254)) * (((/* implicit */int) (short)25786))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) * (1169874205))) / (var_11)))) ? ((-(((((/* implicit */_Bool) var_9)) ? (var_4) : (969899309))))) : ((~(((/* implicit */int) max((var_16), (var_16))))))));
}
