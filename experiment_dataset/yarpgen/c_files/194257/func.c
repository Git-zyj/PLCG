/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194257
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_9 [i_1] [i_3 - 1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) ((short) var_3))) >= (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), ((short)30073)))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 - 2]))) >= (var_9)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)36))))))))));
                            var_10 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)37))))), (15812196002839588359ULL)));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                            {
                                var_11 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (short)15259))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) arr_8 [i_2 + 1]);
                                var_12 ^= ((/* implicit */unsigned char) arr_4 [i_0]);
                            }
                            var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [(short)7] [i_1 - 1] [i_1] [i_2 + 2] [i_3])) < (((/* implicit */int) ((((/* implicit */int) arr_7 [(unsigned short)4] [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 1])) == (((/* implicit */int) arr_7 [i_0] [(unsigned char)17] [i_1] [i_2 + 1] [2U])))))));
                            arr_15 [i_3 - 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_5 = 4; i_5 < 18; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 2; i_6 < 18; i_6 += 2) 
                    {
                        var_14 ^= ((((((/* implicit */_Bool) -4954135223454456186LL)) && (((/* implicit */_Bool) ((int) 300511224))))) || (((/* implicit */_Bool) (short)15259)));
                        arr_21 [i_6] [i_1] [(short)4] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-28))) & (((((/* implicit */_Bool) (unsigned short)50099)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-6540058344705097885LL)))));
                    }
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (short)-7402)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)237)) < (((int) (signed char)13))))) : (-300511246))))));
                        var_16 = ((/* implicit */unsigned long long int) arr_13 [i_1] [(unsigned char)11] [i_5 + 1] [i_1 - 1] [i_1]);
                    }
                    arr_26 [i_1 - 1] [i_1] = ((/* implicit */int) ((short) ((unsigned char) ((short) 1429175726U))));
                }
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned long long int) (unsigned char)20)), (11181802094650610942ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))));
}
