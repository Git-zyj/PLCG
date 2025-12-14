/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232626
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
    var_16 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_17 &= ((/* implicit */_Bool) arr_4 [i_2] [(unsigned short)6] [i_0]);
                        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (990636035U)))) ? (((/* implicit */int) max((((/* implicit */short) arr_9 [i_0] [i_1] [4] [i_0])), (arr_4 [i_0] [i_0] [i_3])))) : (((/* implicit */int) arr_9 [i_3] [i_1] [i_2 + 2] [i_3])))) << (((((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0])) | (var_4)))) ? (min((arr_2 [i_0] [i_2] [i_2 - 1]), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_1] [8U] [i_0])))) : (((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_0] [i_0]) >> (((arr_6 [(unsigned char)3] [i_1] [i_0]) - (494089853U)))))))) - (231ULL)))));
                        arr_11 [i_3] [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((unsigned long long int) arr_7 [i_3] [i_1] [i_1])) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_2 - 1])))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) 318600503))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 318600492)) ? (((/* implicit */unsigned long long int) arr_13 [i_4])) : (7637818398857676285ULL))))))));
        var_21 = ((/* implicit */unsigned char) ((_Bool) (unsigned short)23223));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) -318600492)))))))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((short) ((((/* implicit */int) (short)6209)) > (((/* implicit */int) (short)-4245))))))));
    }
    var_24 = ((/* implicit */short) (unsigned short)52206);
}
