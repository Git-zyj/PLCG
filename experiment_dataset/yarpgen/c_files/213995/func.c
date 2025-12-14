/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213995
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
    var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) var_9))))) ? ((~(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_1]);
                arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1106207615U)))) ? (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (arr_1 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_0)))))))) ? (((((/* implicit */_Bool) (signed char)-69)) ? (var_7) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) ? (min((((/* implicit */unsigned int) arr_3 [i_0 + 1] [i_0 + 1])), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0 - 2] [i_0 - 2] [i_1]), ((signed char)106)))))));
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)119)) ? ((((_Bool)1) ? (var_6) : (min((((/* implicit */unsigned int) (unsigned short)35151)), (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((1640033619U), (((/* implicit */unsigned int) (signed char)39)))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) var_2))), ((unsigned short)41711))))));
                            arr_12 [i_0 - 2] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((signed char) ((((_Bool) (_Bool)1)) ? ((+(var_8))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26631))) % (var_7))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) 1640033648U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))) : (min((((/* implicit */unsigned int) (signed char)-8)), (var_11))))), ((((_Bool)1) ? (((((/* implicit */_Bool) var_9)) ? (581046795U) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)20536))))))));
}
