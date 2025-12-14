/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245443
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_10 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 3]))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((((((/* implicit */int) var_0)) + (((/* implicit */int) var_8)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)117))))))))));
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */int) arr_3 [(signed char)13] [i_0])) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [(signed char)12] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0])))))))))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) (signed char)-59))));
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)123))));
                    var_14 = min((((/* implicit */signed char) ((((/* implicit */int) max(((signed char)127), ((signed char)127)))) > ((~(((/* implicit */int) var_7))))))), (arr_6 [i_0] [i_1] [i_1 + 2]));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-120)) >= (((/* implicit */int) (signed char)-75))))) <= (((((/* implicit */int) (signed char)91)) & (((/* implicit */int) (signed char)-76))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) var_0)))) : ((+(((/* implicit */int) var_6))))))));
    /* LoopSeq 2 */
    for (signed char i_3 = 3; i_3 < 9; i_3 += 4) 
    {
        var_16 = ((/* implicit */signed char) max((max((((/* implicit */int) ((signed char) arr_3 [i_3] [i_3]))), ((+(((/* implicit */int) var_9)))))), ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-4)) <= (((/* implicit */int) (signed char)-90))))) : ((~(((/* implicit */int) arr_1 [(signed char)6] [(signed char)10]))))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (signed char)-92))))))))));
        arr_9 [i_3 + 3] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0))))) & ((+(((/* implicit */int) arr_7 [i_3] [i_3])))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_3 - 3] [i_3]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_3] [i_3] [(signed char)0])) : (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) arr_0 [i_3] [i_3]))))))));
        arr_10 [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)27)) != (((/* implicit */int) (signed char)-25))));
    }
    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (signed char)10))))));
        arr_15 [i_4] = ((/* implicit */signed char) ((((((((/* implicit */int) var_1)) * (((/* implicit */int) var_0)))) > (((/* implicit */int) arr_11 [i_4])))) ? (max(((-(((/* implicit */int) arr_6 [i_4] [i_4] [i_4])))), ((~(((/* implicit */int) (signed char)16)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_4] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_4] [i_4])) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_3 [i_4] [i_4])))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)15)) % (((/* implicit */int) (signed char)-52))));
        arr_16 [i_4] = ((/* implicit */signed char) (~(min((((/* implicit */int) var_6)), ((-(((/* implicit */int) (signed char)0))))))));
        arr_17 [i_4] [i_4] = max(((signed char)-52), ((signed char)16));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) ^ (((((/* implicit */int) var_3)) % (((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-29)) * (((/* implicit */int) (signed char)-127))))) && (((/* implicit */_Bool) (signed char)-112))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_7))))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)-1)))))));
}
