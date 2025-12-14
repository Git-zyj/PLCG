/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245859
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
    var_14 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_11)))))), (min((var_12), (((/* implicit */unsigned long long int) -1252564384))))));
    var_15 += ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (-2125690067) : (((/* implicit */int) (unsigned short)22438))))), (max((((/* implicit */unsigned long long int) var_7)), (var_2))))), (var_12)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)22438)) >> (((((/* implicit */int) var_0)) - (48864)))))))) ? (max((((/* implicit */int) (unsigned short)22438)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_1) : (((/* implicit */int) arr_1 [i_0] [15])))))) : (max((((/* implicit */int) var_11)), (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)22438)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_4 [i_0] = ((/* implicit */short) max((min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)43098)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((short) min((((/* implicit */int) arr_0 [i_1])), (var_4)))))));
            arr_5 [i_0] [7ULL] [(short)5] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) min(((unsigned short)13363), (((/* implicit */unsigned short) arr_1 [(short)24] [i_1]))))) & (((((/* implicit */_Bool) (unsigned short)43079)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))))));
            /* LoopNest 2 */
            for (short i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        arr_10 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_8 [i_3] [(short)23] [i_2] [i_1] [i_0] [(unsigned short)20])) ? (((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (short)-17033))))))));
                        var_17 = arr_3 [i_0] [i_0];
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_0])))))));
                    }
                } 
            } 
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [(short)1] [i_0])), (var_10))))))), (((((((/* implicit */int) (unsigned short)52412)) >> (((((/* implicit */int) arr_0 [i_0])) - (52))))) >> (((((/* implicit */int) min(((short)-8192), (arr_8 [(unsigned short)2] [i_1] [i_1] [(unsigned short)2] [i_0] [(short)6])))) + (8214)))))));
        }
    }
    var_19 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 226209917U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) : (min((var_6), (((/* implicit */unsigned int) var_11)))))));
    var_20 = ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (short)6405)), (var_2)))))) ? (((/* implicit */int) min((max((((/* implicit */unsigned short) (short)-31898)), ((unsigned short)43097))), (min(((unsigned short)13109), ((unsigned short)22438)))))) : (var_1));
}
