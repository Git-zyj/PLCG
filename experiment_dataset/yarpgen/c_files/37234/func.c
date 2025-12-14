/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37234
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) max((((/* implicit */int) var_15)), ((~(min((((/* implicit */int) (short)18784)), (-315687934)))))));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) max((var_9), (((/* implicit */unsigned long long int) (signed char)51)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    var_19 = ((/* implicit */_Bool) var_11);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)55859))));
                                arr_14 [i_0 - 1] [(short)6] [16LL] [i_3] [i_4 - 1] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2 - 1] [i_4 - 1] [i_4] [i_4] [i_4]))) | (var_9)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 3; i_5 < 17; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_1] = ((/* implicit */short) ((arr_18 [i_0 - 1] [3] [i_2 + 1]) - (((/* implicit */long long int) ((arr_10 [0] [(_Bool)1]) ? (((/* implicit */int) var_3)) : (-315687934))))));
                        var_21 = ((/* implicit */unsigned char) (unsigned short)9677);
                    }
                }
                /* vectorizable */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (short i_7 = 2; i_7 < 20; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) (~(509440317486729988LL))))))) ? (max((((/* implicit */long long int) (_Bool)1)), (max((var_16), (((/* implicit */long long int) (signed char)35)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10255))) : (((((/* implicit */_Bool) (signed char)7)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                                var_26 = ((/* implicit */_Bool) ((((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_31 [i_8] [i_8] [(unsigned short)10] [i_8])))) || (((/* implicit */_Bool) arr_30 [i_7] [i_8] [i_9] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_7])) == (((/* implicit */int) ((_Bool) (short)4493))))))) : ((-(((((/* implicit */_Bool) arr_33 [i_7] [i_7] [i_9] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_16)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            {
                                arr_41 [i_7] [13LL] = arr_39 [i_7] [i_7] [i_7];
                                var_27 = ((/* implicit */_Bool) min((var_27), (arr_35 [i_13] [i_9] [i_9] [i_8] [i_7 + 1])));
                                arr_42 [12LL] [7LL] [21ULL] [(_Bool)1] [i_7] [i_7] = ((/* implicit */unsigned short) min((((long long int) 315687934)), (((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_7])))))));
                                arr_43 [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (min((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)34)), (arr_23 [i_7])))), (((((/* implicit */_Bool) (unsigned short)9667)) ? (arr_36 [(unsigned short)21] [i_12] [i_9] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
