/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221631
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
    var_19 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (7320485301834683225LL) : (7320485301834683225LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) arr_1 [i_0] [i_1 - 1]);
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_2] [(unsigned char)15] [i_2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2380270191896533694LL))))) : (((/* implicit */int) arr_1 [i_0] [i_1 - 2]))));
                            }
                        } 
                    } 
                }
                for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1 - 1] [i_5] [i_5])) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1 - 2] [i_5] [i_0])))) || (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 1]))))));
                    arr_17 [i_0] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) 992390075);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_1 - 2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 849622044)) | (7320485301834683225LL))))))) : (((/* implicit */int) ((unsigned short) (-(4294967295U)))))));
                                arr_26 [i_0] [i_5] = ((/* implicit */long long int) var_14);
                                var_24 = ((/* implicit */long long int) max((var_24), (((arr_2 [(unsigned short)0]) ^ (((((/* implicit */_Bool) ((arr_14 [14] [i_6] [i_5]) & (2380270191896533693LL)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) -1799848889)) ^ (2679972711U)))) : (var_8)))))));
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((signed char) -789929682864398855LL)))));
                            }
                        } 
                    } 
                }
                var_26 |= ((/* implicit */unsigned short) var_10);
            }
        } 
    } 
    var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) * (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) var_10)))))))) < (var_13)));
}
