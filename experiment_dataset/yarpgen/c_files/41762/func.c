/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41762
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
    var_13 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_4)), (var_2))))) % ((+(17086489442632703943ULL)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    var_15 = ((/* implicit */signed char) (((-(((unsigned long long int) var_9)))) + (((/* implicit */unsigned long long int) -1849031079))));
                    var_16 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [5] [(_Bool)1] [(_Bool)1]))))), ((~(var_7))))) | (((/* implicit */unsigned long long int) (~(-2016573509))))));
                    var_17 = ((/* implicit */_Bool) 1070314058);
                }
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (signed char)17))));
                    arr_11 [i_0] [i_1] [i_3] &= ((/* implicit */signed char) ((min((((2289921731325787216ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)143))) : (var_7))))) / (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (6686534405733849383ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0])))))));
                    var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (min((((/* implicit */int) var_2)), (arr_9 [i_0] [i_0] [i_0] [i_0]))) : (1875647766)))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_5 [(unsigned char)5] [8] [i_0])))))))));
                }
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0] [i_0] [10])) + (((((/* implicit */int) (signed char)-17)) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
                var_22 = max((((/* implicit */unsigned long long int) var_0)), (min((var_7), (min((12852598901976096234ULL), (((/* implicit */unsigned long long int) arr_4 [(unsigned char)8] [i_1] [i_1])))))));
            }
        } 
    } 
}
