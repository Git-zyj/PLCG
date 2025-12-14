/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241096
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
    var_20 = ((/* implicit */unsigned int) ((int) min((min((var_16), (var_3))), (((short) var_19)))));
    var_21 = ((/* implicit */unsigned short) ((int) max(((short)-25614), (((/* implicit */short) ((signed char) 1329258355U))))));
    var_22 = ((/* implicit */_Bool) max((min((min((1170590972U), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) ((int) 288230376151711743LL))))), (((/* implicit */unsigned int) ((unsigned char) min((var_12), (((/* implicit */signed char) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [6ULL] [i_1] [i_1] [0LL] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) ((unsigned int) -39962334)))), (min((((/* implicit */unsigned long long int) ((_Bool) (short)23649))), (max((((/* implicit */unsigned long long int) var_16)), (arr_6 [i_1] [8LL] [i_0] [i_0])))))));
                    var_23 = ((/* implicit */int) min((var_23), (((int) ((signed char) min((arr_2 [(unsigned short)8]), (((/* implicit */unsigned short) var_12))))))));
                    arr_8 [i_0 - 1] [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) max((((int) var_18)), (((/* implicit */int) max(((unsigned short)30720), (((/* implicit */unsigned short) (unsigned char)0))))))));
                    arr_9 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))), (((unsigned long long int) (_Bool)1)))), (min((min((((/* implicit */unsigned long long int) (unsigned short)31040)), (0ULL))), (((unsigned long long int) 67108863))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) ((int) min((((long long int) arr_4 [i_0] [6LL] [6LL] [i_0])), (((long long int) arr_6 [(unsigned short)4] [i_0] [(unsigned char)0] [i_0])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 4; i_4 < 15; i_4 += 4) 
            {
                {
                    arr_14 [(short)10] [(short)10] [11] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((max((((/* implicit */int) arr_5 [i_0 - 1] [i_3] [i_4 - 4])), (var_8))), (max((arr_4 [(short)8] [i_3] [i_3] [(short)8]), (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))), (((unsigned int) ((short) (short)-23649)))));
                    arr_15 [i_0] [i_3] [i_3] [i_4] = ((/* implicit */short) min((min((((unsigned int) 2965708941U)), (min((((/* implicit */unsigned int) var_12)), (arr_12 [8] [i_3] [i_3] [i_4 - 4]))))), (((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */short) var_9)), (var_15)))), (min((-120232870), (((/* implicit */int) arr_3 [i_4 - 2] [13] [i_0])))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) 4147727085U))), (min((max((((/* implicit */unsigned int) arr_0 [(signed char)0])), (var_10))), (min((4147727085U), (4147727085U)))))));
    }
    var_26 = ((/* implicit */signed char) min((((long long int) max((var_15), (((/* implicit */short) var_14))))), (((/* implicit */long long int) ((signed char) max((((/* implicit */int) var_5)), (var_8)))))));
}
