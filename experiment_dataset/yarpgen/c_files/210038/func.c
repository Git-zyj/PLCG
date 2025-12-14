/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210038
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 4; i_2 < 21; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned int) var_13);
                    arr_8 [i_1 + 1] [i_0] = ((/* implicit */short) min((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))));
                }
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) var_14);
                                var_18 = ((/* implicit */short) (~(((((((var_3) + (9223372036854775807LL))) << (((((/* implicit */int) var_15)) - (6795))))) | (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_19 = ((/* implicit */unsigned int) ((short) var_2));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)40915))));
                    var_21 &= ((/* implicit */long long int) ((signed char) var_10));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 4) 
                {
                    var_22 *= ((/* implicit */unsigned long long int) ((unsigned short) (!((!(((/* implicit */_Bool) var_9)))))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 20; i_8 += 4) 
                        {
                            {
                                arr_26 [13ULL] [i_1] [(_Bool)1] [i_7] [i_8] [i_0] [i_0] = ((/* implicit */short) arr_16 [i_1 + 1] [i_1]);
                                var_23 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_6] [i_1 + 1] [i_1] [i_8] [i_0])) ? (arr_12 [i_0] [i_0] [i_8] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_6] [i_0] [i_8] [i_8]))))))))) ? (((/* implicit */int) (unsigned short)16382)) : ((-(((/* implicit */int) ((unsigned short) arr_11 [i_8])))))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_6)))) && (((/* implicit */_Bool) arr_2 [i_1] [i_6 + 1] [i_0]))));
                                var_25 *= ((/* implicit */signed char) arr_0 [i_8]);
                            }
                        } 
                    } 
                    var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16382)) | (((/* implicit */int) (unsigned short)16382))));
                    var_27 *= ((/* implicit */_Bool) ((signed char) arr_10 [i_1] [i_6]));
                }
                for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)40915)) || (((/* implicit */_Bool) (short)23045))));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 2; i_10 < 20; i_10 += 3) 
                    {
                        var_29 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) ((short) var_1))))));
                        var_30 = ((/* implicit */signed char) ((short) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((var_7) + (1694635058)))))), (var_5))));
                        var_31 = (~(((/* implicit */int) ((unsigned short) arr_22 [i_10 - 1] [i_1 - 1] [i_0]))));
                        var_32 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [(signed char)12] [i_1]);
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 1; i_11 < 18; i_11 += 1) 
                    {
                        arr_34 [i_0] [i_9] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_32 [i_0]);
                        var_33 = ((/* implicit */unsigned int) var_6);
                        var_34 = ((/* implicit */int) (-(var_12)));
                    }
                }
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    var_35 *= ((/* implicit */_Bool) ((unsigned long long int) 2990284169U));
                    var_36 = ((/* implicit */unsigned short) (short)-16215);
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (-(((/* implicit */int) arr_33 [i_12] [(signed char)13] [i_12] [i_0] [i_0] [i_0])))))));
                }
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned int) var_14);
    var_39 = max((((var_4) * (var_14))), (((/* implicit */unsigned long long int) var_6)));
    var_40 = ((/* implicit */unsigned int) (((~(var_12))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) != (var_12)))))))));
    var_41 = ((/* implicit */signed char) var_2);
}
