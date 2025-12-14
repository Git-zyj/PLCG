/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51243
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
    var_18 = ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_14))))) % (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * ((+(((/* implicit */int) var_16))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_2 [i_0] [(signed char)5])))) + (var_17)))) ? ((-((-(5190798095414088329LL))))) : (((((/* implicit */_Bool) var_12)) ? ((-(5190798095414088329LL))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (arr_1 [i_1])))))));
            var_20 -= ((/* implicit */unsigned char) (+(((unsigned int) max((arr_1 [7ULL]), (((/* implicit */long long int) var_16)))))));
        }
        for (short i_2 = 1; i_2 < 8; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] = ((unsigned int) (+(1491774101U)));
            /* LoopNest 3 */
            for (signed char i_3 = 2; i_3 < 7; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_16))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0])) | ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_5]))))));
                            var_23 = ((/* implicit */long long int) (((+(var_15))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [3ULL] [i_0]))) * (arr_9 [i_2 + 1] [i_2] [i_2 + 1])))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] = ((/* implicit */short) var_16);
        }
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_16))));
    }
}
