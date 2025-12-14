/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53356
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1))), (((/* implicit */unsigned int) var_4))))) : (max((((((/* implicit */_Bool) var_6)) ? (-1465065435850931081LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) (-(var_6))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_11 &= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967287U)))))));
                        arr_13 [3U] [3U] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((11U), (1073741824U)))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_3 [i_0]))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (arr_11 [i_0] [i_0 - 2])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 29285083U)) ? (29285083U) : (3221225471U))))));
                        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 35184367894528LL)) ? (5485613240133355826LL) : (((/* implicit */long long int) 3221225455U))));
                    }
                } 
            } 
        } 
        arr_14 [(unsigned short)11] [i_0] = ((((/* implicit */_Bool) ((4265682230U) / (arr_10 [i_0 - 2] [i_0])))) ? (max((((29285083U) & (1073741829U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))) < (941202453U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-2096022458791752755LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)24)))))) ? (((((/* implicit */_Bool) (unsigned short)54567)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (3221225472U))) : (((((/* implicit */_Bool) var_9)) ? (arr_10 [i_0] [9U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
    }
}
