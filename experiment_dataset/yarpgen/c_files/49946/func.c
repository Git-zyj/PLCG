/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49946
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
    var_14 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (4ULL) : (var_1)))));
    var_15 = ((/* implicit */_Bool) var_9);
    var_16 = ((/* implicit */int) ((short) (-(((/* implicit */int) var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_10 [i_3] [i_1] [i_1] |= ((/* implicit */signed char) arr_2 [i_0] [i_1]);
                        arr_11 [i_0] [i_0] [i_2] = ((/* implicit */short) (unsigned char)161);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] = arr_1 [i_3];
                            arr_15 [i_0] [i_2] = ((/* implicit */unsigned int) (((+((~(((/* implicit */int) (unsigned char)104)))))) % (((((/* implicit */_Bool) 16451225816397339714ULL)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (short)-29185))))));
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_4] = ((long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            arr_17 [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((short) (-(((/* implicit */int) (short)8463))))));
                        }
                        arr_18 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 10; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_2] [i_2] [i_5 + 1] [i_0] [i_0] [i_0] = ((/* implicit */short) -7163522920173996071LL);
                                arr_26 [i_0] [i_1] [i_2] [i_5] [i_6] = (unsigned char)7;
                                arr_27 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */unsigned long long int) (+((-(arr_5 [i_1 + 2] [i_1] [i_1 + 4] [i_1 - 1])))));
                                arr_28 [i_0] [i_0] [i_2] [i_0] [i_6] = ((/* implicit */unsigned short) ((-85207883) | (-1832175238)));
                                arr_29 [i_0] [i_2] [i_2] = ((((/* implicit */int) (short)12073)) == (((/* implicit */int) (signed char)-1)));
                            }
                        } 
                    } 
                    arr_30 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)12067)) == (((/* implicit */int) (short)-2693))))) * ((-(((((/* implicit */_Bool) (short)32508)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_8);
}
