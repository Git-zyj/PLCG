/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242582
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
    var_14 = ((/* implicit */short) -711673848);
    var_15 = ((/* implicit */unsigned char) ((max((min((((/* implicit */unsigned long long int) 711673842)), (var_11))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)229))))))) + (((/* implicit */unsigned long long int) -711673843))));
    var_16 = ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)65535)))) > (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */int) var_2)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_4);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((var_6) ? (((((/* implicit */_Bool) ((unsigned int) arr_1 [(unsigned short)5]))) ? (((/* implicit */unsigned long long int) var_7)) : (0ULL))) : (((((/* implicit */_Bool) 11941416074667069485ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4918))) : (((unsigned long long int) 6505327999042482131ULL))))));
        var_17 = ((/* implicit */unsigned char) (~(max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-1))))))));
        arr_4 [i_0] = ((var_11) - (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_0))))));
    }
    for (short i_1 = 1; i_1 < 8; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 4; i_2 < 9; i_2 += 1) 
        {
            arr_11 [i_1] [i_2] = ((/* implicit */unsigned long long int) max((-711673836), (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_9 [i_1] [i_1]))) > (((/* implicit */int) (unsigned short)56548)))))));
            arr_12 [i_1] [(unsigned char)10] [i_1] = ((/* implicit */unsigned short) ((((var_9) + (((/* implicit */unsigned long long int) arr_7 [i_2 - 2])))) | (arr_8 [i_1 + 4])));
            var_18 = ((/* implicit */unsigned int) min((((unsigned long long int) ((((/* implicit */int) var_6)) - (711673826)))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8961)) | (((/* implicit */int) (unsigned short)0))))) ? (6505327999042482131ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3180711902U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29817))) : (3755011893U))))))));
        }
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (1114255393U)))), (((((/* implicit */unsigned long long int) arr_6 [6])) ^ (var_0))))), (((/* implicit */unsigned long long int) arr_10 [i_1])))))));
    }
}
