/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4760
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) min(((signed char)-79), (max(((signed char)-98), (var_5)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_3))))) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) min((var_6), (var_8))))))));
    var_19 = max(((signed char)120), (var_0));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min(((+(((/* implicit */int) max(((signed char)32), ((signed char)-1)))))), ((+(((/* implicit */int) (signed char)1))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_1 [i_0])))) >> (((((/* implicit */int) min(((signed char)-43), (arr_0 [i_0])))) + (57)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                arr_9 [i_1] [(signed char)4] [i_2 - 3] = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (min((((((/* implicit */int) (signed char)-59)) * (((/* implicit */int) (signed char)54)))), (((/* implicit */int) max(((signed char)127), ((signed char)-94))))))));
                arr_10 [(signed char)1] [i_1] [i_1] [i_0] = ((signed char) ((((/* implicit */int) arr_1 [i_2 - 2])) == (((/* implicit */int) arr_1 [i_2 - 1]))));
            }
            arr_11 [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) (signed char)-31)))), (((/* implicit */int) max((arr_7 [i_1] [i_0] [i_0]), ((signed char)127))))));
            arr_12 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) (signed char)32))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))), (min((((/* implicit */int) arr_8 [i_0] [i_1] [i_0])), ((-(((/* implicit */int) (signed char)58))))))));
            arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) min((min(((signed char)100), ((signed char)(-127 - 1)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_16)))))))) <= ((+(((/* implicit */int) arr_0 [i_1]))))));
        }
        for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            arr_18 [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [(signed char)6] [i_3])) * (((/* implicit */int) max((max((var_7), (arr_6 [i_0]))), (var_4))))));
            arr_19 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_16 [i_3]), (var_15)))) > (((((/* implicit */_Bool) (signed char)-52)) ? ((-(((/* implicit */int) (signed char)121)))) : (((/* implicit */int) min((arr_16 [i_0]), ((signed char)68))))))));
            arr_20 [i_0] = ((/* implicit */signed char) max((max((((((/* implicit */int) (signed char)-45)) & (((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)6])))), (((/* implicit */int) max((var_9), ((signed char)49)))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)-125))))))));
            arr_21 [(signed char)9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_6 [i_0])))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)18)) < (((/* implicit */int) arr_8 [(signed char)6] [(signed char)5] [(signed char)5]))))) > (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (signed char)19))))))))));
            arr_22 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_17 [i_3] [i_3] [i_0]))) ? (max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) arr_6 [i_3])))), (((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)(-127 - 1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)75))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) : (((((/* implicit */int) (signed char)-93)) / (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))));
        }
    }
    var_20 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) + (((((/* implicit */int) var_6)) * (((/* implicit */int) (signed char)-79)))))) <= (((/* implicit */int) max((var_13), (var_13))))));
}
