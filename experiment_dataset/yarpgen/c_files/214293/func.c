/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214293
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
    var_19 = ((/* implicit */short) var_11);
    var_20 = ((/* implicit */unsigned char) min((var_20), ((unsigned char)192)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */_Bool) arr_2 [i_0]);
        var_21 ^= ((/* implicit */_Bool) (short)32399);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27244))) : ((~(3865508910326740316ULL)))));
        var_23 = ((/* implicit */unsigned int) arr_4 [i_1 + 1]);
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [(short)16] &= ((/* implicit */unsigned int) ((signed char) var_0));
            var_24 = ((/* implicit */_Bool) 4294967272U);
        }
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            {
                                var_25 *= ((/* implicit */_Bool) (short)-27245);
                                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) 13)))))))));
                                var_27 = ((/* implicit */signed char) arr_17 [i_1] [12ULL] [i_3] [i_4] [12ULL] [i_1] [(short)5]);
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_3] = ((/* implicit */unsigned char) (~(((int) ((((/* implicit */_Bool) 351539104)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3]))) : (3865933375U))))));
                }
            } 
        } 
    }
}
