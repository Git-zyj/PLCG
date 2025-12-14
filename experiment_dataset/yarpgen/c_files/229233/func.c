/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229233
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
    var_18 = (signed char)-106;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) max((max((min((var_5), (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)32745)) : (((/* implicit */int) var_7))))))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))));
        arr_2 [i_0] = ((/* implicit */int) ((short) ((((/* implicit */int) arr_0 [i_0 + 1])) & (((/* implicit */int) arr_0 [i_0 + 1])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_20 += ((/* implicit */unsigned char) arr_8 [i_2] [i_1]);
            var_21 = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
            var_22 = ((/* implicit */long long int) (!(arr_4 [i_2] [i_1 - 1])));
            var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (4528179604747804278ULL) : (5220452103869523086ULL)))))) ? (((/* implicit */long long int) min((((/* implicit */int) ((arr_5 [i_1] [i_2]) == (((/* implicit */unsigned long long int) 8986021471353661619LL))))), (((((/* implicit */_Bool) var_6)) ? (308676996) : (((/* implicit */int) var_11))))))) : (-5246509121004642458LL)));
            var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 5246509121004642455LL)), (min((((((/* implicit */_Bool) 13271344884786079851ULL)) ? (((/* implicit */unsigned long long int) 1638351002126141383LL)) : (16611289792193558814ULL))), (((/* implicit */unsigned long long int) -436113236266299028LL))))));
        }
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
        {
            var_25 = ((/* implicit */int) arr_9 [i_1]);
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (((((_Bool)1) ? (arr_10 [i_1] [2LL] [i_1]) : (((/* implicit */int) (signed char)127)))) | (((var_1) | (var_15))))))));
            /* LoopNest 2 */
            for (long long int i_4 = 3; i_4 < 15; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    {
                        var_27 = arr_4 [i_1 + 1] [i_3 + 1];
                        var_28 = arr_4 [i_5] [i_4 - 3];
                        var_29 = ((/* implicit */int) (~(((11578064868849372508ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3])))))));
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((_Bool) ((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)4]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8986021471353661620LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((-219566504) + (((/* implicit */int) var_3))))) : (arr_19 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1])))));
    }
    var_31 = ((/* implicit */unsigned long long int) ((max((var_10), (((/* implicit */long long int) var_14)))) / (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
}
