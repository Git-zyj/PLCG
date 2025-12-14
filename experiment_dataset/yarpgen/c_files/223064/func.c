/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223064
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (min((var_12), (((/* implicit */unsigned short) var_0))))))) % (((/* implicit */int) var_6))));
    var_18 |= ((/* implicit */signed char) ((((/* implicit */int) (short)-29257)) < (((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_19 = var_15;
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) min(((+(((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_0 [i_0] [10LL]))))))), ((~(((/* implicit */int) arr_5 [(unsigned short)4] [(unsigned short)4] [i_2]))))));
                    var_21 = ((/* implicit */long long int) max(((short)29256), (((/* implicit */short) var_3))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */int) (short)29256)) & (((/* implicit */int) var_12)))), (((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0]))))));
        arr_8 [i_0] = ((unsigned int) var_2);
    }
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            for (unsigned short i_5 = 2; i_5 < 10; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (short i_7 = 1; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_20 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (short)-29263))), ((-(((/* implicit */int) var_4))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_5] [i_5 - 1] [i_5 + 3]))))) : (min((((/* implicit */int) arr_14 [i_3] [i_6])), ((+(((/* implicit */int) (short)-29022))))))));
                                var_22 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_3 [i_7 + 1] [i_5] [3])) % (((/* implicit */int) arr_19 [i_5 + 2] [(signed char)11] [i_7 - 1] [(unsigned short)10] [i_7 - 1] [(signed char)11])))));
                                arr_21 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((unsigned short) (signed char)80));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) var_13);
                    arr_22 [i_3] [i_4] [i_3] = ((/* implicit */short) arr_12 [i_3] [i_3] [i_3]);
                }
            } 
        } 
        arr_23 [i_3] = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(signed char)12] [i_3] [i_3] [(signed char)12])) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])) : ((-2147483647 - 1))))), ((+(5903357118932156892LL))));
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (min((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_9))))), ((-(((/* implicit */int) (short)16363)))))) : (((/* implicit */int) var_6))));
}
