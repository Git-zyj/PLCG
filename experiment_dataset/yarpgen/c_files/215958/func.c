/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215958
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
    var_20 = ((/* implicit */int) (~((~(4ULL)))));
    var_21 = ((/* implicit */unsigned char) (short)64);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(0ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_2 [i_0] [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(1397728319U)))) ? (min((((((/* implicit */_Bool) (unsigned char)118)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) var_19)))) : (-7529357049936804436LL)));
        var_24 |= ((/* implicit */int) arr_0 [(_Bool)1]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) -7075471739515798574LL))));
        arr_5 [i_1] = ((/* implicit */unsigned char) (signed char)12);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) var_12)))));
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    {
                        arr_16 [(short)19] [i_3] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4] [(unsigned short)8])))), ((!(((/* implicit */_Bool) arr_3 [i_5]))))));
                        var_26 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 33521664U)), (9223372036854775804LL)))), (0ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_3]))))));
                    }
                } 
            } 
        } 
        arr_17 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2])))))));
        arr_18 [(short)11] = ((/* implicit */int) (unsigned char)22);
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_8 [i_2])) : ((+(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)233))))))))))));
        arr_19 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [(unsigned char)16] [(unsigned char)16] [(unsigned char)16] [i_2]))))) ? (((((/* implicit */_Bool) (unsigned char)232)) ? (9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((arr_10 [i_2] [i_2] [i_2]) <= (var_18))) ? (((/* implicit */int) (short)0)) : (var_5))))));
    }
    var_28 *= ((/* implicit */unsigned long long int) 67106816);
}
