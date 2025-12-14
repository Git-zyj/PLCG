/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25142
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
    var_13 = ((/* implicit */unsigned int) (-(min((2147483647), (((((/* implicit */int) (short)-32755)) | (((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) / (var_1)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32755))) : (1550561898528668341ULL)))));
            var_15 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)32217)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : ((+(13751617112983303892ULL)))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */signed char) min((((/* implicit */int) (signed char)1)), (944827751)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)7));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))));
                            arr_12 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((var_2) | (((/* implicit */unsigned int) -338392879))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) (unsigned char)219))));
                        }
                        arr_13 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -944827727)) ? (var_3) : (((/* implicit */long long int) -340885132))))));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max(((+(var_7))), (((/* implicit */unsigned long long int) 1842562618)))))));
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */signed char) (unsigned short)0);
    }
    var_21 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_9)))) | (((/* implicit */int) var_4)))) / ((-(((/* implicit */int) (unsigned char)36))))));
}
