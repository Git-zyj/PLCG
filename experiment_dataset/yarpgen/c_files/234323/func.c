/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234323
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (long long int i_3 = 4; i_3 < 17; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) (-((+(min((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_3]), (var_11)))))));
                            var_16 = ((/* implicit */unsigned long long int) var_2);
                        }
                        for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [(_Bool)1] [i_3 + 2] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_3 - 2])) || (((/* implicit */_Bool) arr_15 [i_3 - 4]))))), (arr_14 [i_3] [i_1] [i_3] [i_3 - 3] [i_3 + 1] [i_3 - 1])));
                            arr_18 [i_0] [i_1] [i_1] [i_2] [16ULL] [i_3] [i_5] = ((/* implicit */short) ((unsigned short) ((unsigned short) max((arr_9 [i_0] [i_1]), (((/* implicit */unsigned int) var_0))))));
                        }
                        var_17 = var_6;
                        arr_19 [i_1] = ((/* implicit */signed char) (-(4161223698729843456LL)));
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned short) var_10);
    }
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        arr_24 [i_6] &= ((/* implicit */short) (!(((/* implicit */_Bool) max((max((var_4), (var_4))), ((short)27131))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) ((unsigned short) -371455991));
            var_19 = (((+(0ULL))) <= (((unsigned long long int) arr_22 [i_6] [i_6])));
        }
        var_20 = ((/* implicit */unsigned char) max((var_11), ((~(arr_25 [i_6])))));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            var_21 += ((/* implicit */int) ((((((/* implicit */int) arr_26 [i_6])) - (((/* implicit */int) arr_26 [i_8])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_6])))))));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (max((arr_22 [i_6] [(short)10]), (((/* implicit */unsigned long long int) arr_30 [i_6] [i_8]))))));
        }
    }
    var_23 *= ((/* implicit */unsigned short) (+(((/* implicit */int) var_14))));
    var_24 = ((var_8) | (((/* implicit */unsigned long long int) var_12)));
}
