/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235763
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
    var_18 &= ((/* implicit */short) var_12);
    var_19 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_1])) | (min((((unsigned long long int) arr_4 [i_0] [i_1])), (((/* implicit */unsigned long long int) 268369920U))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [(short)3] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_3] [i_3] [i_2 - 1] [13] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))));
                                var_21 = ((/* implicit */short) 1455493523);
                                var_22 = ((/* implicit */_Bool) 9U);
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */long long int) arr_0 [(unsigned short)9]);
                                var_23 += (((~(var_16))) << ((((~(arr_8 [0ULL] [(short)12] [i_3] [i_3] [i_1] [i_0]))) - (5871317014904170969ULL))));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */unsigned char) min((var_24), (((unsigned char) (short)16))));
                var_25 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((1728633782) ^ (673436608)))), (arr_10 [0U] [i_1] [(unsigned char)6] [i_0] [i_1] [i_0])))) ? (((((/* implicit */int) (unsigned short)2074)) & (685653830))) : ((~((((_Bool)1) ? (855691191) : (((/* implicit */int) (unsigned char)122)))))));
            }
        } 
    } 
}
